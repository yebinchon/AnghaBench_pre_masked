
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_14__ {float re; float im; } ;
struct TYPE_13__ {int (* fft_calc ) (TYPE_2__*,TYPE_3__*) ;int (* fft_permute ) (TYPE_2__*,TYPE_3__*) ;} ;
struct TYPE_12__ {int fft_offset; int frame_size; float* buffer_ptr; float* buffer; size_t nb_channels; size_t buffer_offset; int subframe_size; float** fft_buffer; TYPE_3__** cmplx; TYPE_2__ fft_ctx; } ;
typedef TYPE_1__ QDMCContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (float,int ,int ) ;
 int FUNC_3 (float*,float*,int) ;
 int FUNC_4 (float*,int ,int) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_9 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_10(QDMCContext *VAR_3, GetBitContext *VAR_4, int16_t *VAR_5)
{
    int VAR_6, VAR_7, VAR_8, VAR_9;

    if (FUNC_7(VAR_3, VAR_4))
        return VAR_0;

    VAR_3->fft_offset = VAR_3->frame_size - VAR_3->fft_offset;
    VAR_3->buffer_ptr = &VAR_3->buffer[VAR_3->nb_channels * VAR_3->buffer_offset];

    VAR_6 = FUNC_5(VAR_3, VAR_4);
    if (VAR_6 < 0)
        return VAR_6;

    VAR_6 = FUNC_6(VAR_3, VAR_4);
    if (VAR_6 < 0)
        return VAR_6;

    for (VAR_9 = 0; VAR_9 < 32; VAR_9++) {
        float *VAR_10;

        for (VAR_7 = 0; VAR_7 < VAR_3->nb_channels; VAR_7++)
            FUNC_0(VAR_3, VAR_7, VAR_9);

        FUNC_1(VAR_3, VAR_9);

        for (VAR_7 = 0; VAR_7 < VAR_3->nb_channels; VAR_7++) {
            for (VAR_8 = 0; VAR_8 < VAR_3->subframe_size; VAR_8++) {
                VAR_3->cmplx[VAR_7][VAR_8].re = VAR_3->fft_buffer[VAR_7 + 2][VAR_3->fft_offset + VAR_9 * VAR_3->subframe_size + VAR_8];
                VAR_3->cmplx[VAR_7][VAR_8].im = VAR_3->fft_buffer[VAR_7 + 0][VAR_3->fft_offset + VAR_9 * VAR_3->subframe_size + VAR_8];
                VAR_3->cmplx[VAR_7][VAR_3->subframe_size + VAR_8].re = 0;
                VAR_3->cmplx[VAR_7][VAR_3->subframe_size + VAR_8].im = 0;
            }
        }

        for (VAR_7 = 0; VAR_7 < VAR_3->nb_channels; VAR_7++) {
            VAR_3->fft_ctx.fft_permute(&VAR_3->fft_ctx, VAR_3->cmplx[VAR_7]);
            VAR_3->fft_ctx.fft_calc(&VAR_3->fft_ctx, VAR_3->cmplx[VAR_7]);
        }

        VAR_10 = &VAR_3->buffer_ptr[VAR_3->nb_channels * VAR_9 * VAR_3->subframe_size];
        for (VAR_8 = 0; VAR_8 < 2 * VAR_3->subframe_size; VAR_8++) {
            for (VAR_7 = 0; VAR_7 < VAR_3->nb_channels; VAR_7++) {
                *VAR_10++ += VAR_3->cmplx[VAR_7][VAR_8].re;
            }
        }

        VAR_10 = &VAR_3->buffer_ptr[VAR_9 * VAR_3->subframe_size * VAR_3->nb_channels];
        for (VAR_8 = 0; VAR_8 < VAR_3->nb_channels * VAR_3->subframe_size; VAR_8++) {
            VAR_5[VAR_8] = FUNC_2(VAR_10[VAR_8], VAR_2, VAR_1);
        }
        VAR_5 += VAR_3->subframe_size * VAR_3->nb_channels;

        for (VAR_7 = 0; VAR_7 < VAR_3->nb_channels; VAR_7++) {
            FUNC_4(VAR_3->fft_buffer[VAR_7+0] + VAR_3->fft_offset + VAR_9 * VAR_3->subframe_size, 0, 4 * VAR_3->subframe_size);
            FUNC_4(VAR_3->fft_buffer[VAR_7+2] + VAR_3->fft_offset + VAR_9 * VAR_3->subframe_size, 0, 4 * VAR_3->subframe_size);
        }
        FUNC_4(VAR_3->buffer + VAR_3->nb_channels * (VAR_9 * VAR_3->subframe_size + VAR_3->frame_size + VAR_3->buffer_offset), 0, 4 * VAR_3->subframe_size * VAR_3->nb_channels);
    }

    VAR_3->buffer_offset += VAR_3->frame_size;
    if (VAR_3->buffer_offset >= 32768 - VAR_3->frame_size) {
        FUNC_3(VAR_3->buffer, &VAR_3->buffer[VAR_3->nb_channels * VAR_3->buffer_offset], 4 * VAR_3->frame_size * VAR_3->nb_channels);
        VAR_3->buffer_offset = 0;
    }

    return 0;
}
