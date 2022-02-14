
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_11__ {int* in_linesize; int in_ss_h; int* out_linesize; int out_ss_h; TYPE_2__* out; TYPE_1__* in; } ;
typedef TYPE_4__ ThreadData ;
struct TYPE_13__ {TYPE_5__* priv; } ;
struct TYPE_10__ {int (* multiply3x3 ) (int **,int,int,int,int ) ;} ;
struct TYPE_12__ {int rgb_stride; scalar_t__ dither; int * yuv_offset; int rgb2yuv_coeffs; int (* rgb2yuv ) (int **,int*,int **,int,int,int,int ,int ) ;int dither_scratch; int (* rgb2yuv_fsb ) (int **,int*,int **,int,int,int,int ,int ,int ) ;int delin_lut; int lrgb2lrgb_coeffs; TYPE_3__ dsp; int lrgb2lrgb_passthrough; int lin_lut; int rgb2rgb_passthrough; int yuv2rgb_coeffs; int (* yuv2rgb ) (int **,int,int **,int*,int,int,int ,int ) ;int yuv2yuv_coeffs; int (* yuv2yuv ) (int **,int*,int **,int*,int,int,int ,int *) ;scalar_t__ yuv2yuv_fastmode; int ** rgb; } ;
struct TYPE_9__ {int ** data; } ;
struct TYPE_8__ {int height; int width; int ** data; } ;
typedef TYPE_5__ ColorSpaceContext ;
typedef TYPE_6__ AVFilterContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int **,int,int,int,int ) ;
 int FUNC_1 (int **,int*,int **,int*,int,int,int ,int *) ;
 int FUNC_2 (int **,int,int **,int*,int,int,int ,int ) ;
 int FUNC_3 (int **,int,int,int,int ) ;
 int FUNC_4 (int **,int*,int **,int,int,int,int ,int ,int ) ;
 int FUNC_5 (int **,int*,int **,int,int,int,int ,int ) ;

__attribute__((used)) static int FUNC_6(AVFilterContext *VAR_1, void *VAR_2, int VAR_3, int VAR_4)
{
    const ThreadData *VAR_5 = VAR_2;
    ColorSpaceContext *VAR_6 = VAR_1->priv;
    uint8_t *VAR_7[3], *VAR_8[3];
    int16_t *VAR_9[3];
    int VAR_10 = (VAR_5->in->height + 1) >> 1;
    int VAR_11 = 2 * (VAR_3 * VAR_10 / VAR_4), VAR_12 = 2 * ((VAR_3 + 1) * VAR_10 / VAR_4);
    int VAR_13 = VAR_5->in->width, VAR_14 = VAR_12 - VAR_11;

    VAR_7[0] = VAR_5->in->data[0] + VAR_5->in_linesize[0] * VAR_11;
    VAR_7[1] = VAR_5->in->data[1] + VAR_5->in_linesize[1] * (VAR_11 >> VAR_5->in_ss_h);
    VAR_7[2] = VAR_5->in->data[2] + VAR_5->in_linesize[2] * (VAR_11 >> VAR_5->in_ss_h);
    VAR_8[0] = VAR_5->out->data[0] + VAR_5->out_linesize[0] * VAR_11;
    VAR_8[1] = VAR_5->out->data[1] + VAR_5->out_linesize[1] * (VAR_11 >> VAR_5->out_ss_h);
    VAR_8[2] = VAR_5->out->data[2] + VAR_5->out_linesize[2] * (VAR_11 >> VAR_5->out_ss_h);
    VAR_9[0] = VAR_6->rgb[0] + VAR_6->rgb_stride * VAR_11;
    VAR_9[1] = VAR_6->rgb[1] + VAR_6->rgb_stride * VAR_11;
    VAR_9[2] = VAR_6->rgb[2] + VAR_6->rgb_stride * VAR_11;





    if (VAR_6->yuv2yuv_fastmode) {



        VAR_6->yuv2yuv(VAR_8, VAR_5->out_linesize, VAR_7, VAR_5->in_linesize, VAR_13, VAR_14,
                   VAR_6->yuv2yuv_coeffs, VAR_6->yuv_offset);
    } else {
        VAR_6->yuv2rgb(VAR_9, VAR_6->rgb_stride, VAR_7, VAR_5->in_linesize, VAR_13, VAR_14,
                   VAR_6->yuv2rgb_coeffs, VAR_6->yuv_offset[0]);
        if (!VAR_6->rgb2rgb_passthrough) {
            FUNC_0(VAR_9, VAR_6->rgb_stride, VAR_13, VAR_14, VAR_6->lin_lut);
            if (!VAR_6->lrgb2lrgb_passthrough)
                VAR_6->dsp.multiply3x3(VAR_9, VAR_6->rgb_stride, VAR_13, VAR_14, VAR_6->lrgb2lrgb_coeffs);
            FUNC_0(VAR_9, VAR_6->rgb_stride, VAR_13, VAR_14, VAR_6->delin_lut);
        }
        if (VAR_6->dither == VAR_0) {
            VAR_6->rgb2yuv_fsb(VAR_8, VAR_5->out_linesize, VAR_9, VAR_6->rgb_stride, VAR_13, VAR_14,
                           VAR_6->rgb2yuv_coeffs, VAR_6->yuv_offset[1], VAR_6->dither_scratch);
        } else {
            VAR_6->rgb2yuv(VAR_8, VAR_5->out_linesize, VAR_9, VAR_6->rgb_stride, VAR_13, VAR_14,
                       VAR_6->rgb2yuv_coeffs, VAR_6->yuv_offset[1]);
        }
    }

    return 0;
}
