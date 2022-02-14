
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_1__ svq1_pmv ;
typedef int ptrdiff_t ;
struct TYPE_7__ {int table; } ;
typedef int HpelDSPContext ;
typedef int GetBitContext ;
typedef int AVCodecContext ;






 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int ,int,int) ;
 TYPE_5__ VAR_0 ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int *,int *,int *,int ,TYPE_1__*,int,int,int,int) ;
 int FUNC_5 (int *,int *,int *,int *,int ,TYPE_1__*,int,int,int,int) ;
 int FUNC_6 (int *,int *,int ,int,int) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_1, HpelDSPContext *VAR_2,
                                   GetBitContext *VAR_3,
                                   uint8_t *VAR_4, uint8_t *VAR_5,
                                   ptrdiff_t VAR_6, svq1_pmv *VAR_7, int VAR_8, int VAR_9,
                                   int VAR_10, int VAR_11)
{
    uint32_t VAR_12;
    int VAR_13 = 0;


    VAR_12 = FUNC_1(VAR_3, VAR_0.table, 2, 2);


    if (VAR_12 == 128 || VAR_12 == 129) {
        VAR_7[0].x =
        VAR_7[0].y =
        VAR_7[VAR_8 / 8 + 2].x =
        VAR_7[VAR_8 / 8 + 2].y =
        VAR_7[VAR_8 / 8 + 3].x =
        VAR_7[VAR_8 / 8 + 3].y = 0;
    }

    switch (VAR_12) {
    case 128:
        FUNC_6(VAR_4, VAR_5, VAR_6, VAR_8, VAR_9);
        break;

    case 131:
        VAR_13 = FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5,
                                         VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);

        if (VAR_13 != 0) {
            FUNC_0(VAR_1, "Error in svq1_motion_inter_block %i\n", VAR_13);
            break;
        }
        VAR_13 = FUNC_3(VAR_3, VAR_4, VAR_6);
        break;

    case 130:
        VAR_13 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5,
                                            VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);

        if (VAR_13 != 0) {
            FUNC_0(VAR_1, "Error in svq1_motion_inter_4v_block %i\n", VAR_13);
            break;
        }
        VAR_13 = FUNC_3(VAR_3, VAR_4, VAR_6);
        break;

    case 129:
        VAR_13 = FUNC_2(VAR_3, VAR_4, VAR_6);
        break;
    }

    return VAR_13;
}
