
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int int32_t ;
struct TYPE_13__ {int table; } ;
typedef TYPE_4__ VLC ;
struct TYPE_16__ {int bits_per_raw_sample; TYPE_6__* priv_data; } ;
struct TYPE_12__ {int table; } ;
struct TYPE_11__ {int table; } ;
struct TYPE_15__ {TYPE_4__* studio_intra_tab; TYPE_3__ studio_chroma_dc; TYPE_2__ studio_luma_dc; scalar_t__ rgb; } ;
struct TYPE_10__ {int* permutated; } ;
struct TYPE_14__ {int dct_precision; int* intra_matrix; int* chroma_intra_matrix; int* last_dc; int intra_dc_precision; int qscale; int gb; TYPE_8__* avctx; scalar_t__ mpeg_quant; TYPE_1__ intra_scantable; } ;
typedef TYPE_5__ MpegEncContext ;
typedef TYPE_6__ Mpeg4DecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t** VAR_3 ;
 int FUNC_0 (int,int const,int const) ;
 int FUNC_1 (TYPE_8__*,int ,char*) ;
 int FUNC_2 (TYPE_8__*,int *,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,int ,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int*,int ,int) ;

__attribute__((used)) static int FUNC_7(MpegEncContext *VAR_4, int32_t VAR_5[64], int VAR_6)
{
    Mpeg4DecContext *VAR_7 = VAR_4->avctx->priv_data;

    int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13 = 1, VAR_14 = 0, VAR_15 = 0,
        VAR_16, VAR_17, VAR_18;
    VLC *VAR_19 = &VAR_7->studio_intra_tab[0];
    uint8_t *const VAR_20 = VAR_4->intra_scantable.permutated;
    const uint16_t *VAR_21;
    uint32_t VAR_22;
    const int VAR_23 = -1 * (1 << (VAR_4->avctx->bits_per_raw_sample + 6));
    const int VAR_24 = ((1 << (VAR_4->avctx->bits_per_raw_sample + 6)) - 1);
    int VAR_25 = 3 - VAR_4->dct_precision;

    VAR_18 = 1;

    FUNC_6(VAR_5, 0, 64 * sizeof(int32_t));

    if (VAR_6 < 4) {
        VAR_8 = 0;
        VAR_9 = FUNC_4(&VAR_4->gb, VAR_7->studio_luma_dc.table, VAR_2, 2);
        VAR_21 = VAR_4->intra_matrix;
    } else {
        VAR_8 = (VAR_6 & 1) + 1;
        if (VAR_7->rgb)
            VAR_9 = FUNC_4(&VAR_4->gb, VAR_7->studio_luma_dc.table, VAR_2, 2);
        else
            VAR_9 = FUNC_4(&VAR_4->gb, VAR_7->studio_chroma_dc.table, VAR_2, 2);
        VAR_21 = VAR_4->chroma_intra_matrix;
    }

    if (VAR_9 < 0) {
        FUNC_1(VAR_4->avctx, VAR_1, "illegal dct_dc_size vlc\n");
        return VAR_0;
    } else if (VAR_9 == 0) {
        VAR_10 = 0;
    } else {
        VAR_10 = FUNC_5(&VAR_4->gb, VAR_9);

        if (VAR_9 > 8) {
            if(!FUNC_2(VAR_4->avctx, &VAR_4->gb, "dct_dc_size > 8"))
                return VAR_0;
        }

    }

    VAR_4->last_dc[VAR_8] += VAR_10;

    if (VAR_4->mpeg_quant)
        VAR_5[0] = VAR_4->last_dc[VAR_8] * (8 >> VAR_4->intra_dc_precision);
    else
        VAR_5[0] = VAR_4->last_dc[VAR_8] * (8 >> VAR_4->intra_dc_precision) * (8 >> VAR_4->dct_precision);


    VAR_5[0] = FUNC_0(VAR_5[0], VAR_23, VAR_24);
    VAR_18 ^= VAR_5[0];


    while (1) {
        VAR_14 = FUNC_4(&VAR_4->gb, VAR_19->table, VAR_2, 2);

        if (VAR_14 < 0) {
            FUNC_1(VAR_4->avctx, VAR_1, "illegal ac coefficient group vlc\n");
            return VAR_0;
        }

        VAR_16 = VAR_3[VAR_14][0];
        VAR_19 = &VAR_7->studio_intra_tab[VAR_3[VAR_14][1]];

        if (VAR_14 == 0) {

            break;
        } else if (VAR_14 >= 1 && VAR_14 <= 6) {

            VAR_15 = 1 << VAR_16;
            if (VAR_16)
                VAR_15 += FUNC_3(&VAR_4->gb, VAR_16);
            VAR_13 += VAR_15;
            continue;
        } else if (VAR_14 >= 7 && VAR_14 <= 12) {

            VAR_11 = FUNC_3(&VAR_4->gb, VAR_16);
            VAR_17 = VAR_11 & 1;
            VAR_11 >>= 1;
            VAR_15 = (1 << (VAR_16 - 1)) + VAR_11;
            VAR_13 += VAR_15;
            if (VAR_13 > 63)
                return VAR_0;
            VAR_12 = VAR_20[VAR_13++];
            VAR_5[VAR_12] = VAR_17 ? 1 : -1;
        } else if (VAR_14 >= 13 && VAR_14 <= 20) {

            if (VAR_13 > 63)
                return VAR_0;
            VAR_12 = VAR_20[VAR_13++];
            VAR_5[VAR_12] = FUNC_5(&VAR_4->gb, VAR_16);
        } else if (VAR_14 == 21) {

            if (VAR_13 > 63)
                return VAR_0;
            VAR_12 = VAR_20[VAR_13++];
            VAR_16 = VAR_4->avctx->bits_per_raw_sample + VAR_4->dct_precision + 4;
            VAR_22 = FUNC_3(&VAR_4->gb, VAR_16);
            if (VAR_22 >> (VAR_16-1))
                VAR_5[VAR_12] = -1 * (( VAR_22 ^ ((1 << VAR_16) -1)) + 1);
            else
                VAR_5[VAR_12] = VAR_22;
        }
        VAR_5[VAR_12] = ((VAR_5[VAR_12] * VAR_21[VAR_12] * VAR_4->qscale) * (1 << VAR_25)) / 16;
        VAR_5[VAR_12] = FUNC_0(VAR_5[VAR_12], VAR_23, VAR_24);
        VAR_18 ^= VAR_5[VAR_12];
    }

    VAR_5[63] ^= VAR_18 & 1;

    return 0;
}
