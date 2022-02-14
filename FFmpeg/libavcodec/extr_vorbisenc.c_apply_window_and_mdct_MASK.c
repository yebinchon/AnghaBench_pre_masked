
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {float** win; int* log2_blocksize; int channels; float* samples; scalar_t__ coeffs; TYPE_3__* mdct; TYPE_2__* fdsp; } ;
typedef TYPE_1__ vorbis_enc_context ;
struct TYPE_7__ {int (* mdct_calc ) (TYPE_3__*,scalar_t__,float*) ;} ;
struct TYPE_6__ {int (* vector_fmul_scalar ) (float*,float*,int,int) ;int (* vector_fmul_reverse ) (float*,float*,float const*,int) ;int (* vector_fmul ) (float*,float*,float const*,int) ;} ;
typedef TYPE_2__ AVFloatDSPContext ;


 int FUNC_0 (float*,float*,float const*,int) ;
 int FUNC_1 (float*,float*,int,int) ;
 int FUNC_2 (float*,float*,float const*,int) ;
 int FUNC_3 (float*,float*,int,int) ;
 int FUNC_4 (TYPE_3__*,scalar_t__,float*) ;

__attribute__((used)) static int FUNC_5(vorbis_enc_context *VAR_0)
{
    int VAR_1;
    const float * VAR_2 = VAR_0->win[1];
    int VAR_3 = 1 << (VAR_0->log2_blocksize[1] - 1);
    float VAR_4 = (float)(1 << VAR_0->log2_blocksize[1]) / 4.0;
    AVFloatDSPContext *VAR_5 = VAR_0->fdsp;

    for (VAR_1 = 0; VAR_1 < VAR_0->channels; VAR_1++) {
        float *VAR_6 = VAR_0->samples + VAR_1 * VAR_3 * 2;

        VAR_5->vector_fmul(VAR_6, VAR_6, VAR_2, VAR_3);
        VAR_5->vector_fmul_scalar(VAR_6, VAR_6, 1/VAR_4, VAR_3);

        VAR_6 += VAR_3;

        VAR_5->vector_fmul_reverse(VAR_6, VAR_6, VAR_2, VAR_3);
        VAR_5->vector_fmul_scalar(VAR_6, VAR_6, 1/VAR_4, VAR_3);

        VAR_0->mdct[1].mdct_calc(&VAR_0->mdct[1], VAR_0->coeffs + VAR_1 * VAR_3,
                     VAR_0->samples + VAR_1 * VAR_3 * 2);
    }
    return 1;
}
