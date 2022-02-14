
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {float re; double im; } ;
struct TYPE_12__ {scalar_t__* extended_data; } ;
struct TYPE_11__ {int window_length; float* window; int fft_length2; int* noise_band_edge; int sample_floor; int fft_length; } ;
struct TYPE_10__ {int* noise_band_norm; double* noise_band_avr; double* noise_band_avi; double* noise_band_var; double* noisy_data; TYPE_7__* fft_data; int fft; } ;
typedef TYPE_1__ DeNoiseChannel ;
typedef TYPE_2__ AudioFFTDeNoiseContext ;
typedef TYPE_3__ AVFrame ;


 int FUNC_0 (int ,TYPE_7__*) ;
 int FUNC_1 (int ,TYPE_7__*) ;
 double FUNC_2 (double,int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_7__*,int ) ;

__attribute__((used)) static void FUNC_5(AudioFFTDeNoiseContext *VAR_0,
                               DeNoiseChannel *VAR_1,
                               AVFrame *VAR_2, int VAR_3)
{
    float *VAR_4 = (float *)VAR_2->extended_data[VAR_3];
    double VAR_5, VAR_6 = 0.0, VAR_7 = 0.0, VAR_8 = 0.0;
    int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

    for (int VAR_14 = 0; VAR_14 < VAR_0->window_length; VAR_14++) {
        VAR_1->fft_data[VAR_14].re = VAR_0->window[VAR_14] * VAR_4[VAR_14] * (1LL << 24);
        VAR_1->fft_data[VAR_14].im = 0.0;
    }

    for (int VAR_15 = VAR_0->window_length; VAR_15 < VAR_0->fft_length2; VAR_15++) {
        VAR_1->fft_data[VAR_15].re = 0.0;
        VAR_1->fft_data[VAR_15].im = 0.0;
    }

    FUNC_1(VAR_1->fft, VAR_1->fft_data);
    FUNC_0(VAR_1->fft, VAR_1->fft_data);

    FUNC_4(VAR_1->fft_data, VAR_0->fft_length);

    VAR_9 = VAR_0->noise_band_edge[0];
    VAR_10 = VAR_9;
    VAR_11 = 0;
    VAR_12 = VAR_10;
    VAR_13 = FUNC_3(VAR_0->fft_length2, VAR_0->noise_band_edge[15]);
    VAR_1->fft_data[VAR_0->fft_length2].re = VAR_1->fft_data[0].im;
    VAR_1->fft_data[0].im = 0.0;
    VAR_1->fft_data[VAR_0->fft_length2].im = 0.0;

    for (int VAR_16 = VAR_10; VAR_16 <= VAR_13; VAR_16++) {
        if ((VAR_16 == VAR_10) && (VAR_16 < VAR_13)) {
            if (VAR_10 > VAR_9) {
                VAR_1->noise_band_norm[VAR_11 - 1] += VAR_10 - VAR_9;
                VAR_1->noise_band_avr[VAR_11 - 1] += VAR_7;
                VAR_1->noise_band_avi[VAR_11 - 1] += VAR_8;
                VAR_1->noise_band_var[VAR_11 - 1] += VAR_6;
            }
            VAR_11++;
            VAR_9 = VAR_10;
            VAR_10 = VAR_0->noise_band_edge[VAR_11];
            if (VAR_11 == 15) {
                VAR_10++;
            }
            VAR_6 = 0.0;
            VAR_7 = 0.0;
            VAR_8 = 0.0;
        }
        VAR_7 += VAR_1->fft_data[VAR_12].re;
        VAR_8 += VAR_1->fft_data[VAR_12].im;
        VAR_5 = VAR_1->fft_data[VAR_12].re * VAR_1->fft_data[VAR_12].re +
               VAR_1->fft_data[VAR_12].im * VAR_1->fft_data[VAR_12].im;

        VAR_5 = FUNC_2(VAR_5, VAR_0->sample_floor);

        VAR_1->noisy_data[VAR_16] = VAR_5;
        VAR_6 += VAR_5;
        VAR_12++;
    }

    VAR_1->noise_band_norm[VAR_11 - 1] += VAR_10 - VAR_9;
    VAR_1->noise_band_avr[VAR_11 - 1] += VAR_7;
    VAR_1->noise_band_avi[VAR_11 - 1] += VAR_8;
    VAR_1->noise_band_var[VAR_11 - 1] += VAR_6;
}
