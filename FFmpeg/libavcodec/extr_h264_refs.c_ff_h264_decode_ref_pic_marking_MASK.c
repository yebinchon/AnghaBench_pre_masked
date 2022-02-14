
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ type; } ;
struct TYPE_8__ {int explicit_ref_marking; int curr_pic_num; int max_pic_num; int nb_mmco; TYPE_1__* mmco; } ;
struct TYPE_7__ {unsigned int long_arg; int short_pic_num; scalar_t__ opcode; } ;
typedef scalar_t__ MMCOOpcode ;
typedef TYPE_1__ MMCO ;
typedef TYPE_2__ H264SliceContext ;
typedef TYPE_3__ H2645NAL ;
typedef int GetBitContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (void*,int ,char*,scalar_t__) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(H264SliceContext *VAR_9, GetBitContext *VAR_10,
                                   const H2645NAL *VAR_11, void *VAR_12)
{
    int VAR_13;
    MMCO *VAR_14 = VAR_9->mmco;
    int VAR_15 = 0;

    if (VAR_11->type == VAR_1) {
        FUNC_5(VAR_10);
        if (FUNC_2(VAR_10)) {
            VAR_14[0].opcode = VAR_4;
            VAR_14[0].long_arg = 0;
            VAR_15 = 1;
        }
        VAR_9->explicit_ref_marking = 1;
    } else {
        VAR_9->explicit_ref_marking = FUNC_2(VAR_10);
        if (VAR_9->explicit_ref_marking) {
            for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
                MMCOOpcode VAR_16 = FUNC_3(VAR_10);

                VAR_14[VAR_13].opcode = VAR_16;
                if (VAR_16 == VAR_8 || VAR_16 == VAR_7) {
                    VAR_14[VAR_13].short_pic_num =
                        (VAR_9->curr_pic_num - FUNC_4(VAR_10) - 1) &
                            (VAR_9->max_pic_num - 1);
                }
                if (VAR_16 == VAR_7 || VAR_16 == VAR_5 ||
                    VAR_16 == VAR_4 || VAR_16 == VAR_6) {
                    unsigned int VAR_17 = FUNC_3(VAR_10);
                    if (VAR_17 >= 32 ||
                        (VAR_17 >= 16 && !(VAR_16 == VAR_6 &&
                                             VAR_17 == 16) &&
                         !(VAR_16 == VAR_5 && FUNC_0(VAR_9)))) {
                        FUNC_1(VAR_12, VAR_0,
                               "illegal long ref in memory management control "
                               "operation %d\n", VAR_16);
                        VAR_9->nb_mmco = VAR_13;
                        return -1;
                    }
                    VAR_14[VAR_13].long_arg = VAR_17;
                }

                if (VAR_16 > (unsigned) VAR_4) {
                    FUNC_1(VAR_12, VAR_0,
                           "illegal memory management control operation %d\n",
                           VAR_16);
                    VAR_9->nb_mmco = VAR_13;
                    return -1;
                }
                if (VAR_16 == VAR_3)
                    break;
            }
            VAR_15 = VAR_13;
        }
    }

    VAR_9->nb_mmco = VAR_15;

    return 0;
}
