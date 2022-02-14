
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef scalar_t__ int32_t ;
typedef int int16_t ;
struct TYPE_7__ {int* permutated; } ;
struct TYPE_9__ {int* inter_matrix; int qscale; int* block_last_index; int gb; TYPE_1__ intra_scantable; } ;
struct TYPE_8__ {int * rl_vlc; } ;
typedef TYPE_2__ RLTable ;
typedef TYPE_3__ MpegEncContext ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int,int,int ,int *,int ,int ,int,int ) ;
 int FUNC_3 (int ,int *,int) ;
 int VAR_0 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (int ,int *,int) ;
 int FUNC_7 (int ,int *,int) ;
 int VAR_1 ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (TYPE_3__*,int) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline int FUNC_10(MpegEncContext *VAR_4,
                                           int16_t *VAR_5, int VAR_6)
{
    int VAR_7, VAR_8, VAR_9, VAR_10;
    RLTable *VAR_11 = &VAR_2;
    uint8_t *const VAR_12 = VAR_4->intra_scantable.permutated;
    const uint16_t *VAR_13 = VAR_4->inter_matrix;
    const int VAR_14 = VAR_4->qscale;

    {
        FUNC_4(VAR_3, &VAR_4->gb);
        VAR_8 = -1;

        FUNC_8(VAR_3, &VAR_4->gb);
        if (((int32_t) FUNC_1(VAR_3, &VAR_4->gb)) < 0) {
            VAR_7 = (3 * VAR_14 * VAR_13[0]) >> 5;
            VAR_7 = (VAR_7 - 1) | 1;
            if (FUNC_1(VAR_3, &VAR_4->gb) & 0x40000000)
                VAR_7 = -VAR_7;
            VAR_5[0] = VAR_7;
            VAR_8++;
            FUNC_7(VAR_3, &VAR_4->gb, 2);
            if (((int32_t) FUNC_1(VAR_3, &VAR_4->gb)) <= (int32_t) 0xBFFFFFFF)
                goto end;
        }

        for (;;) {
            FUNC_2(VAR_7, VAR_10, VAR_3, &VAR_4->gb, VAR_11->rl_vlc[0],
                       VAR_1, 2, 0);

            if (VAR_7 != 0) {
                VAR_8 += VAR_10;
                if (VAR_8 > VAR_0)
                    break;
                VAR_9 = VAR_12[VAR_8];
                VAR_7 = ((VAR_7 * 2 + 1) * VAR_14 * VAR_13[VAR_9]) >> 5;
                VAR_7 = (VAR_7 - 1) | 1;
                VAR_7 = (VAR_7 ^ FUNC_5(VAR_3, &VAR_4->gb, 1)) -
                        FUNC_5(VAR_3, &VAR_4->gb, 1);
                FUNC_7(VAR_3, &VAR_4->gb, 1);
            } else {

                VAR_10 = FUNC_6(VAR_3, &VAR_4->gb, 6) + 1;
                FUNC_3(VAR_3, &VAR_4->gb, 6);
                FUNC_8(VAR_3, &VAR_4->gb);
                VAR_7 = FUNC_5(VAR_3, &VAR_4->gb, 8);
                FUNC_7(VAR_3, &VAR_4->gb, 8);
                if (VAR_7 == -128) {
                    VAR_7 = FUNC_6(VAR_3, &VAR_4->gb, 8) - 256;
                    FUNC_7(VAR_3, &VAR_4->gb, 8);
                } else if (VAR_7 == 0) {
                    VAR_7 = FUNC_6(VAR_3, &VAR_4->gb, 8);
                    FUNC_7(VAR_3, &VAR_4->gb, 8);
                }
                VAR_8 += VAR_10;
                if (VAR_8 > VAR_0)
                    break;
                VAR_9 = VAR_12[VAR_8];
                if (VAR_7 < 0) {
                    VAR_7 = -VAR_7;
                    VAR_7 = ((VAR_7 * 2 + 1) * VAR_14 * VAR_13[VAR_9]) >> 5;
                    VAR_7 = (VAR_7 - 1) | 1;
                    VAR_7 = -VAR_7;
                } else {
                    VAR_7 = ((VAR_7 * 2 + 1) * VAR_14 * VAR_13[VAR_9]) >> 5;
                    VAR_7 = (VAR_7 - 1) | 1;
                }
            }

            VAR_5[VAR_9] = VAR_7;
            if (((int32_t) FUNC_1(VAR_3, &VAR_4->gb)) <= (int32_t) 0xBFFFFFFF)
                break;
            FUNC_8(VAR_3, &VAR_4->gb);
        }
end:
        FUNC_3(VAR_3, &VAR_4->gb, 2);
        FUNC_0(VAR_3, &VAR_4->gb);
    }

    FUNC_9(VAR_4, VAR_8);

    VAR_4->block_last_index[VAR_6] = VAR_8;
    return 0;
}
