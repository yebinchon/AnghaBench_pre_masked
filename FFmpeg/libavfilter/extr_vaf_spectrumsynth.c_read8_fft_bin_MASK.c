
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef double uint8_t ;
struct TYPE_9__ {int scale; TYPE_3__** fft_data; TYPE_2__* phase; TYPE_1__* magnitude; } ;
struct TYPE_8__ {float re; float im; } ;
struct TYPE_7__ {int* linesize; scalar_t__* data; } ;
struct TYPE_6__ {int* linesize; scalar_t__* data; } ;
typedef TYPE_4__ SpectrumSynthContext ;




 double const VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 float FUNC_1 (float) ;
 float FUNC_2 (int) ;
 float FUNC_3 (float) ;

__attribute__((used)) static void FUNC_4(SpectrumSynthContext *VAR_2,
                          int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    const int VAR_7 = VAR_2->magnitude->linesize[0];
    const int VAR_8 = VAR_2->phase->linesize[0];
    const uint8_t *VAR_9 = (uint8_t *)(VAR_2->magnitude->data[0] + VAR_4 * VAR_7);
    const uint8_t *VAR_10 = (uint8_t *)(VAR_2->phase->data[0] + VAR_4 * VAR_8);
    float VAR_11, VAR_12;

    switch (VAR_2->scale) {
    case 129:
        VAR_11 = VAR_9[VAR_3] / (double)VAR_1;
        break;
    case 128:
        VAR_11 = FUNC_2(((VAR_9[VAR_3] / (double)VAR_1) - 1.) * 6.);
        break;
    default:
        FUNC_0(0);
    }
    VAR_12 = ((VAR_10[VAR_3] / (double)VAR_1) * 2. - 1.) * VAR_0;

    VAR_2->fft_data[VAR_6][VAR_5].re = VAR_11 * FUNC_1(VAR_12);
    VAR_2->fft_data[VAR_6][VAR_5].im = VAR_11 * FUNC_3(VAR_12);
}
