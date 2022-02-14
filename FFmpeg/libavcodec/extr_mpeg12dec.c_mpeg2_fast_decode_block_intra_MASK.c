
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int int16_t ;
struct TYPE_8__ {int* permutated; } ;
struct TYPE_10__ {int qscale; int* intra_matrix; int* chroma_intra_matrix; int* last_dc; int intra_dc_precision; int* block_last_index; int gb; scalar_t__ intra_vlc_format; TYPE_1__ intra_scantable; } ;
struct TYPE_9__ {int * rl_vlc; } ;
typedef TYPE_2__ RLTable ;
typedef TYPE_3__ MpegEncContext ;


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
 int FUNC_8 (TYPE_3__*,int) ;
 int FUNC_9 (int *,int) ;
 TYPE_2__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline int FUNC_10(MpegEncContext *VAR_5,
                                                int16_t *VAR_6, int VAR_7)
{
    int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    int VAR_14;
    RLTable *VAR_15;
    uint8_t *const VAR_16 = VAR_5->intra_scantable.permutated;
    const uint16_t *VAR_17;
    const int VAR_18 = VAR_5->qscale;


    if (VAR_7 < 4) {
        VAR_17 = VAR_5->intra_matrix;
        VAR_14 = 0;
    } else {
        VAR_17 = VAR_5->chroma_intra_matrix;
        VAR_14 = (VAR_7 & 1) + 1;
    }
    VAR_10 = FUNC_9(&VAR_5->gb, VAR_14);
    if (VAR_10 >= 0xffff)
        return VAR_0;
    VAR_9 = VAR_5->last_dc[VAR_14];
    VAR_9 += VAR_10;
    VAR_5->last_dc[VAR_14] = VAR_9;
    VAR_6[0] = VAR_9 << (3 - VAR_5->intra_dc_precision);
    VAR_11 = 0;
    if (VAR_5->intra_vlc_format)
        VAR_15 = &VAR_3;
    else
        VAR_15 = &VAR_2;

    {
        FUNC_3(VAR_4, &VAR_5->gb);

        for (;;) {
            FUNC_7(VAR_4, &VAR_5->gb);
            FUNC_1(VAR_8, VAR_13, VAR_4, &VAR_5->gb, VAR_15->rl_vlc[0],
                       VAR_1, 2, 0);

            if (VAR_8 >= 64 || VAR_11 > 63) {
                break;
            } else if (VAR_8 != 0) {
                VAR_11 += VAR_13;
                VAR_12 = VAR_16[VAR_11];
                VAR_8 = (VAR_8 * VAR_18 * VAR_17[VAR_12]) >> 4;
                VAR_8 = (VAR_8 ^ FUNC_4(VAR_4, &VAR_5->gb, 1)) -
                        FUNC_4(VAR_4, &VAR_5->gb, 1);
                FUNC_2(VAR_4, &VAR_5->gb, 1);
            } else {

                VAR_13 = FUNC_5(VAR_4, &VAR_5->gb, 6) + 1;
                FUNC_2(VAR_4, &VAR_5->gb, 6);
                FUNC_7(VAR_4, &VAR_5->gb);
                VAR_8 = FUNC_4(VAR_4, &VAR_5->gb, 12);
                FUNC_6(VAR_4, &VAR_5->gb, 12);
                VAR_11 += VAR_13;
                VAR_12 = VAR_16[VAR_11];
                if (VAR_8 < 0) {
                    VAR_8 = (-VAR_8 * VAR_18 * VAR_17[VAR_12]) >> 4;
                    VAR_8 = -VAR_8;
                } else {
                    VAR_8 = (VAR_8 * VAR_18 * VAR_17[VAR_12]) >> 4;
                }
            }

            VAR_6[VAR_12] = VAR_8;
        }
        FUNC_0(VAR_4, &VAR_5->gb);
    }

    FUNC_8(VAR_5, VAR_11);

    VAR_5->block_last_index[VAR_7] = VAR_11;
    return 0;
}
