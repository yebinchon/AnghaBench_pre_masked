
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_6__ {int* permutated; } ;
struct TYPE_8__ {int* quant_matrix; int gb; int mb_y; int mb_x; int avctx; TYPE_1__ scantable; } ;
struct TYPE_7__ {int * rl_vlc; } ;
typedef TYPE_2__ RLTable ;
typedef TYPE_3__ MadContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int,int,int ,int *,int ,int ,int,int ) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (int ,int *,int) ;
 int VAR_1 ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int ,char*,int ,int ) ;
 TYPE_2__ VAR_2 ;
 int FUNC_9 (int *,int) ;
 int VAR_3 ;

__attribute__((used)) static inline int FUNC_10(MadContext *VAR_4, int16_t * VAR_5)
{
    int VAR_6, VAR_7, VAR_8, VAR_9;
    RLTable *VAR_10 = &VAR_2;
    const uint8_t *VAR_11 = VAR_4->scantable.permutated;
    int16_t *VAR_12 = VAR_4->quant_matrix;

    VAR_5[0] = (128 + FUNC_9(&VAR_4->gb, 8)) * VAR_12[0];



    VAR_7 = 0;
    {
        FUNC_3(VAR_3, &VAR_4->gb);

        for (;;) {
            FUNC_7(VAR_3, &VAR_4->gb);
            FUNC_1(VAR_6, VAR_9, VAR_3, &VAR_4->gb, VAR_10->rl_vlc[0], VAR_1, 2, 0);

            if (VAR_6 == 127) {
                break;
            } else if (VAR_6 != 0) {
                VAR_7 += VAR_9;
                if (VAR_7 > 63) {
                    FUNC_8(VAR_4->avctx, VAR_0,
                           "ac-tex damaged at %d %d\n", VAR_4->mb_x, VAR_4->mb_y);
                    return -1;
                }
                VAR_8 = VAR_11[VAR_7];
                VAR_6 = (VAR_6*VAR_12[VAR_8]) >> 4;
                VAR_6 = (VAR_6-1)|1;
                VAR_6 = (VAR_6 ^ FUNC_4(VAR_3, &VAR_4->gb, 1)) - FUNC_4(VAR_3, &VAR_4->gb, 1);
                FUNC_2(VAR_3, &VAR_4->gb, 1);
            } else {

                FUNC_7(VAR_3, &VAR_4->gb);
                VAR_6 = FUNC_4(VAR_3, &VAR_4->gb, 10); FUNC_6(VAR_3, &VAR_4->gb, 10);

                FUNC_7(VAR_3, &VAR_4->gb);
                VAR_9 = FUNC_5(VAR_3, &VAR_4->gb, 6)+1; FUNC_2(VAR_3, &VAR_4->gb, 6);

                VAR_7 += VAR_9;
                if (VAR_7 > 63) {
                    FUNC_8(VAR_4->avctx, VAR_0,
                           "ac-tex damaged at %d %d\n", VAR_4->mb_x, VAR_4->mb_y);
                    return -1;
                }
                VAR_8 = VAR_11[VAR_7];
                if (VAR_6 < 0) {
                    VAR_6 = -VAR_6;
                    VAR_6 = (VAR_6*VAR_12[VAR_8]) >> 4;
                    VAR_6 = (VAR_6-1)|1;
                    VAR_6 = -VAR_6;
                } else {
                    VAR_6 = (VAR_6*VAR_12[VAR_8]) >> 4;
                    VAR_6 = (VAR_6-1)|1;
                }
            }

            VAR_5[VAR_8] = VAR_6;
        }
        FUNC_0(VAR_3, &VAR_4->gb);
    }
    return 0;
}
