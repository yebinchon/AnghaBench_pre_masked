
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nb_channels; int fft_offset; int subframe_size; float** fft_buffer; } ;
typedef TYPE_1__ QDMCContext ;


 float* VAR_0 ;
 float* VAR_1 ;

__attribute__((used)) static void FUNC_0(QDMCContext *VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
    float VAR_8, VAR_9, VAR_10;
    int VAR_11;

    if (VAR_2->nb_channels == 1)
        VAR_5 = 0;

    VAR_8 = VAR_0[VAR_6 & 0x3F];
    VAR_9 = VAR_8 * VAR_1[ (VAR_7 << 6) & 0x1FF];
    VAR_10 = VAR_8 * VAR_1[((VAR_7 << 6) + 128) & 0x1FF];
    VAR_11 = VAR_2->fft_offset + VAR_4 + VAR_2->subframe_size * VAR_3;
    VAR_2->fft_buffer[ VAR_5][VAR_11 ] += VAR_9;
    VAR_2->fft_buffer[2 + VAR_5][VAR_11 ] += VAR_10;
    VAR_2->fft_buffer[ VAR_5][VAR_11 + 1] -= VAR_9;
    VAR_2->fft_buffer[2 + VAR_5][VAR_11 + 1] -= VAR_10;
}
