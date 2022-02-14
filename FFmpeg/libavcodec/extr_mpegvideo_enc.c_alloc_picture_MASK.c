
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int uvlinesize; int linesize; int b8_stride; int mb_height; int mb_width; int mb_stride; int out_format; int chroma_y_shift; int chroma_x_shift; int sc; int me; int avctx; } ;
typedef int Picture ;
typedef TYPE_1__ MpegEncContext ;


 int FUNC_0 (int ,int *,int *,int *,int,int,int ,int ,int ,int ,int ,int ,int ,int *,int *) ;

__attribute__((used)) static int FUNC_1(MpegEncContext *VAR_0, Picture *VAR_1, int VAR_2)
{
    return FUNC_0(VAR_0->avctx, VAR_1, &VAR_0->me, &VAR_0->sc, VAR_2, 1,
                            VAR_0->chroma_x_shift, VAR_0->chroma_y_shift, VAR_0->out_format,
                            VAR_0->mb_stride, VAR_0->mb_width, VAR_0->mb_height, VAR_0->b8_stride,
                            &VAR_0->linesize, &VAR_0->uvlinesize);
}
