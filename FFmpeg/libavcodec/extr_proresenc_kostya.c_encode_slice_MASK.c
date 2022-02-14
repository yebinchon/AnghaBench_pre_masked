
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint16_t ;
typedef int ptrdiff_t ;
struct TYPE_13__ {int width; int height; TYPE_1__* priv_data; } ;
struct TYPE_12__ {int* linesize; scalar_t__* data; int top_field_first; } ;
struct TYPE_11__ {int pictures_per_frame; int cur_picture_idx; int** quants; int** quants_chroma; int* custom_q; int* custom_chroma_q; int* quant_mat; int* quant_chroma_mat; int num_planes; int chroma_factor; int * blocks; int alpha_bits; int emu_buf; scalar_t__ force_quant; } ;
typedef int PutBitContext ;
typedef TYPE_1__ ProresContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int *,int,int ,int) ;
 int FUNC_3 (TYPE_1__*,int *,int const*,int,int,int ,int,int,int*) ;
 int FUNC_4 (TYPE_1__*,int const*,int,int,int,int,int,int ,int,int ) ;
 int FUNC_5 (TYPE_1__*,int const*,int,int,int,int,int,int ,int ,int,int,int) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_4, const AVFrame *VAR_5,
                        PutBitContext *VAR_6,
                        int VAR_7[4], int VAR_8, int VAR_9, int VAR_10,
                        int VAR_11)
{
    ProresContext *VAR_12 = VAR_4->priv_data;
    int VAR_13, VAR_14, VAR_15;
    int VAR_16 = 0;
    const uint16_t *VAR_17;
    int VAR_18 = FUNC_1(VAR_11);
    int VAR_19, VAR_20, VAR_21;
    ptrdiff_t VAR_22;
    int VAR_23, VAR_24;
    uint16_t *VAR_25;
    uint16_t *VAR_26;

    if (VAR_12->pictures_per_frame == 1)
        VAR_21 = 0;
    else
        VAR_21 = VAR_12->cur_picture_idx ^ !VAR_5->top_field_first;

    if (VAR_12->force_quant) {
        VAR_25 = VAR_12->quants[0];
        VAR_26 = VAR_12->quants_chroma[0];
    } else if (VAR_10 < VAR_3) {
        VAR_25 = VAR_12->quants[VAR_10];
        VAR_26 = VAR_12->quants_chroma[VAR_10];
    } else {
        VAR_25 = VAR_12->custom_q;
        VAR_26 = VAR_12->custom_chroma_q;
        for (VAR_13 = 0; VAR_13 < 64; VAR_13++) {
            VAR_25[VAR_13] = VAR_12->quant_mat[VAR_13] * VAR_10;
            VAR_26[VAR_13] = VAR_12->quant_chroma_mat[VAR_13] * VAR_10;
        }
    }

    for (VAR_13 = 0; VAR_13 < VAR_12->num_planes; VAR_13++) {
        VAR_24 = (VAR_13 == 1 || VAR_13 == 2);
        VAR_23 = VAR_18 + 2;
        if (VAR_24)
            VAR_23 += VAR_12->chroma_factor - 3;
        if (!VAR_24 || VAR_12->chroma_factor == VAR_2) {
            VAR_14 = VAR_8 << 4;
            VAR_15 = VAR_9 << 4;
            VAR_19 = 4;
            VAR_20 = VAR_4->width;
        } else {
            VAR_14 = VAR_8 << 3;
            VAR_15 = VAR_9 << 4;
            VAR_19 = 2;
            VAR_20 = VAR_4->width >> 1;
        }

        VAR_22 = VAR_5->linesize[VAR_13] * VAR_12->pictures_per_frame;
        VAR_17 = (const uint16_t*)(VAR_5->data[VAR_13] + VAR_15 * VAR_22 +
                                VAR_21 * VAR_5->linesize[VAR_13]) + VAR_14;

        if (VAR_13 < 3) {
            FUNC_5(VAR_12, VAR_17, VAR_22, VAR_14, VAR_15,
                           VAR_20, VAR_4->height / VAR_12->pictures_per_frame,
                           VAR_12->blocks[0], VAR_12->emu_buf,
                           VAR_11, VAR_19, VAR_24);
            if (!VAR_24) {
                VAR_7[VAR_13] = FUNC_3(VAR_12, VAR_6, VAR_17, VAR_22,
                                              VAR_11, VAR_12->blocks[0],
                                              VAR_19, VAR_23,
                                              VAR_25);
            } else {
                VAR_7[VAR_13] = FUNC_3(VAR_12, VAR_6, VAR_17, VAR_22,
                                              VAR_11, VAR_12->blocks[0],
                                              VAR_19, VAR_23,
                                              VAR_26);
            }
        } else {
            FUNC_4(VAR_12, VAR_17, VAR_22, VAR_14, VAR_15,
                           VAR_20, VAR_4->height / VAR_12->pictures_per_frame,
                           VAR_12->blocks[0], VAR_11, VAR_12->alpha_bits);
            VAR_7[VAR_13] = FUNC_2(VAR_12, VAR_6, VAR_11,
                                          VAR_12->blocks[0], VAR_10);
        }
        VAR_16 += VAR_7[VAR_13];
        if (FUNC_6(VAR_6) < 0) {
            FUNC_0(VAR_4, VAR_1,
                   "Underestimated required buffer size.\n");
            return VAR_0;
        }
    }
    return VAR_16;
}
