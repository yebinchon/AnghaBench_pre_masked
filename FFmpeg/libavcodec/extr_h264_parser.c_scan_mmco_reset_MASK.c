
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int weighted_bipred_idc; scalar_t__ weighted_pred; scalar_t__ redundant_pic_cnt_present; } ;
struct TYPE_8__ {int pict_type; TYPE_2__* priv_data; } ;
struct TYPE_6__ {int sps; TYPE_5__* pps; } ;
struct TYPE_7__ {int picture_structure; TYPE_1__ ps; } ;
typedef unsigned int MMCOOpcode ;
typedef int H264PredWeightTable ;
typedef TYPE_2__ H264ParseContext ;
typedef int GetBitContext ;
typedef TYPE_3__ AVCodecParserContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int FUNC_0 (void*,int ,char*,unsigned int) ;
 scalar_t__ FUNC_1 (int*,int*,int *,TYPE_5__*,int,int ,void*) ;
 int FUNC_2 (int *,int ,int*,int,int *,int ,void*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 unsigned int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(AVCodecParserContext *VAR_13, GetBitContext *VAR_14,
                           void *VAR_15)
{
    H264PredWeightTable VAR_16;
    int VAR_17 = VAR_13->pict_type & 3;
    H264ParseContext *VAR_18 = VAR_13->priv_data;
    int VAR_19, VAR_20[2];


    if (VAR_18->ps.pps->redundant_pic_cnt_present)
        FUNC_4(VAR_14);

    if (VAR_17 == VAR_2)
        FUNC_3(VAR_14);

    if (FUNC_1(&VAR_19, VAR_20, VAR_14, VAR_18->ps.pps,
                                VAR_17, VAR_18->picture_structure, VAR_15) < 0)
        return VAR_0;

    if (VAR_17 != VAR_3) {
        int VAR_21;
        for (VAR_21 = 0; VAR_21 < VAR_19; VAR_21++) {
            if (FUNC_3(VAR_14)) {
                int VAR_22;
                for (VAR_22 = 0; ; VAR_22++) {
                    unsigned int VAR_23 = FUNC_5(VAR_14);

                    if (VAR_23 < 3)
                        FUNC_6(VAR_14);
                    else if (VAR_23 > 3) {
                        FUNC_0(VAR_15, VAR_1,
                               "illegal reordering_of_pic_nums_idc %d\n",
                               VAR_23);
                        return VAR_0;
                    } else
                        break;

                    if (VAR_22 >= VAR_20[VAR_21]) {
                        FUNC_0(VAR_15, VAR_1,
                               "reference count %d overflow\n", VAR_22);
                        return VAR_0;
                    }
                }
            }
        }
    }

    if ((VAR_18->ps.pps->weighted_pred && VAR_17 == VAR_4) ||
        (VAR_18->ps.pps->weighted_bipred_idc == 1 && VAR_17 == VAR_2))
        FUNC_2(VAR_14, VAR_18->ps.sps, VAR_20, VAR_17,
                                  &VAR_16, VAR_18->picture_structure, VAR_15);

    if (FUNC_3(VAR_14)) {
        int VAR_24;
        for (VAR_24 = 0; VAR_24 < VAR_5; VAR_24++) {
            MMCOOpcode VAR_25 = FUNC_5(VAR_14);
            if (VAR_25 > (unsigned) VAR_7) {
                FUNC_0(VAR_15, VAR_1,
                       "illegal memory management control operation %d\n",
                       VAR_25);
                return VAR_0;
            }
            if (VAR_25 == VAR_6)
               return 0;
            else if (VAR_25 == VAR_9)
                return 1;

            if (VAR_25 == VAR_12 || VAR_25 == VAR_11)
                FUNC_6(VAR_14);
            if (VAR_25 == VAR_11 || VAR_25 == VAR_8 ||
                VAR_25 == VAR_7 || VAR_25 == VAR_10)
                FUNC_5(VAR_14);
        }
    }

    return 0;
}
