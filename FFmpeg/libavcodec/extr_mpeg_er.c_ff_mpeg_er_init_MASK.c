
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int mb_height; int mb_stride; int error_status_table; int er_temp_buffer; TYPE_1__* opaque; int decode_mb; int * dc_val; int mbintra_table; int mbskip_table; int b8_stride; int mb_width; int mb_num; int mb_index2xy; int avctx; } ;
struct TYPE_4__ {int mb_height; int mb_stride; int * dc_val; int mbintra_table; int mbskip_table; int b8_stride; int mb_width; int mb_num; int mb_index2xy; int avctx; TYPE_2__ er; } ;
typedef TYPE_1__ MpegEncContext ;
typedef TYPE_2__ ERContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_1 ;

int FUNC_5(MpegEncContext *VAR_2)
{
    ERContext *VAR_3 = &VAR_2->er;
    int VAR_4 = VAR_2->mb_height * VAR_2->mb_stride;
    int VAR_5;

    VAR_3->avctx = VAR_2->avctx;

    VAR_3->mb_index2xy = VAR_2->mb_index2xy;
    VAR_3->mb_num = VAR_2->mb_num;
    VAR_3->mb_width = VAR_2->mb_width;
    VAR_3->mb_height = VAR_2->mb_height;
    VAR_3->mb_stride = VAR_2->mb_stride;
    VAR_3->b8_stride = VAR_2->b8_stride;

    VAR_3->er_temp_buffer = FUNC_3(VAR_2->mb_height * VAR_2->mb_stride * (4*sizeof(int) + 1));
    VAR_3->error_status_table = FUNC_4(VAR_4);
    if (!VAR_3->er_temp_buffer || !VAR_3->error_status_table)
        goto fail;

    VAR_3->mbskip_table = VAR_2->mbskip_table;
    VAR_3->mbintra_table = VAR_2->mbintra_table;

    for (VAR_5 = 0; VAR_5 < FUNC_1(VAR_2->dc_val); VAR_5++)
        VAR_3->dc_val[VAR_5] = VAR_2->dc_val[VAR_5];

    VAR_3->decode_mb = VAR_1;
    VAR_3->opaque = VAR_2;

    return 0;
fail:
    FUNC_2(&VAR_3->er_temp_buffer);
    FUNC_2(&VAR_3->error_status_table);
    return FUNC_0(VAR_0);
}
