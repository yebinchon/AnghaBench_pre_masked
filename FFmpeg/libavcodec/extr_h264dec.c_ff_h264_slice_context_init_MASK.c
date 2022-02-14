
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_9__ {int quarter_sample; int mb_num; int mb_width; int mb_height; int mb_stride; int b8_stride; int* mb_index2xy; int* error_status_table; int** dc_val; int er_temp_buffer; TYPE_2__* opaque; int decode_mb; int avctx; } ;
struct TYPE_8__ {int mb_height; int mb_stride; int mb_width; int mb_num; int avctx; TYPE_1__* slice_ctx; } ;
struct TYPE_7__ {int* dc_val_base; int ** ref_cache; TYPE_3__ er; } ;
typedef TYPE_1__ H264SliceContext ;
typedef TYPE_2__ H264Context ;
typedef TYPE_3__ ERContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int*,int,int ) ;
 int FUNC_2 (int ,int ,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int* VAR_5 ;

int FUNC_4(H264Context *VAR_6, H264SliceContext *VAR_7)
{
    ERContext *VAR_8 = &VAR_7->er;
    int VAR_9 = VAR_6->mb_height * VAR_6->mb_stride;
    int VAR_10 = (2 * VAR_6->mb_width + 1) * (2 * VAR_6->mb_height + 1);
    int VAR_11 = VAR_6->mb_stride * (VAR_6->mb_height + 1);
    int VAR_12 = VAR_10 + 2 * VAR_11;
    int VAR_13, VAR_14, VAR_15;

    VAR_7->ref_cache[0][VAR_5[5] + 1] =
    VAR_7->ref_cache[0][VAR_5[7] + 1] =
    VAR_7->ref_cache[0][VAR_5[13] + 1] =
    VAR_7->ref_cache[1][VAR_5[5] + 1] =
    VAR_7->ref_cache[1][VAR_5[7] + 1] =
    VAR_7->ref_cache[1][VAR_5[13] + 1] = VAR_2;

    if (VAR_7 != VAR_6->slice_ctx) {
        FUNC_3(VAR_8, 0, sizeof(*VAR_8));
    } else
    if (VAR_0) {


        VAR_8->avctx = VAR_6->avctx;
        VAR_8->decode_mb = VAR_4;
        VAR_8->opaque = VAR_6;
        VAR_8->quarter_sample = 1;

        VAR_8->mb_num = VAR_6->mb_num;
        VAR_8->mb_width = VAR_6->mb_width;
        VAR_8->mb_height = VAR_6->mb_height;
        VAR_8->mb_stride = VAR_6->mb_stride;
        VAR_8->b8_stride = VAR_6->mb_width * 2 + 1;


        FUNC_1(VAR_6->avctx, VAR_8->mb_index2xy,
                          (VAR_6->mb_num + 1) * sizeof(int), VAR_3);

        for (VAR_14 = 0; VAR_14 < VAR_6->mb_height; VAR_14++)
            for (VAR_13 = 0; VAR_13 < VAR_6->mb_width; VAR_13++)
                VAR_8->mb_index2xy[VAR_13 + VAR_14 * VAR_6->mb_width] = VAR_13 + VAR_14 * VAR_6->mb_stride;

        VAR_8->mb_index2xy[VAR_6->mb_height * VAR_6->mb_width] = (VAR_6->mb_height - 1) *
                                                      VAR_6->mb_stride + VAR_6->mb_width;

        FUNC_1(VAR_6->avctx, VAR_8->error_status_table,
                          VAR_9 * sizeof(uint8_t), VAR_3);

        FUNC_2(VAR_6->avctx, VAR_8->er_temp_buffer,
                         VAR_6->mb_height * VAR_6->mb_stride * (4*sizeof(int) + 1), VAR_3);

        FUNC_1(VAR_6->avctx, VAR_7->dc_val_base,
                          VAR_12 * sizeof(int16_t), VAR_3);
        VAR_8->dc_val[0] = VAR_7->dc_val_base + VAR_6->mb_width * 2 + 2;
        VAR_8->dc_val[1] = VAR_7->dc_val_base + VAR_10 + VAR_6->mb_stride + 1;
        VAR_8->dc_val[2] = VAR_8->dc_val[1] + VAR_11;
        for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15++)
            VAR_7->dc_val_base[VAR_15] = 1024;
    }

    return 0;

fail:
    return FUNC_0(VAR_1);
}
