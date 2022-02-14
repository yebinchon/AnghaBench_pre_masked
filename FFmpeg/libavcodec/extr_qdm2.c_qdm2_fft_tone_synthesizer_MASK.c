
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {float re; float im; } ;
struct TYPE_14__ {int cutoff; double level; int phase; int phase_shift; int duration; scalar_t__ time_index; int table; TYPE_9__* complex; } ;
struct TYPE_13__ {float re; float im; } ;
struct TYPE_10__ {TYPE_9__** complex; } ;
struct TYPE_12__ {int channels; int fft_size; int* fft_coefs_min_index; int* fft_coefs_max_index; int fft_tone_end; int fft_tone_start; int frequency_range; TYPE_2__* fft_coefs; TYPE_1__ fft; scalar_t__ superblocktype_2_3; TYPE_5__* fft_tones; } ;
struct TYPE_11__ {int sub_packet; int channel; scalar_t__ exp; double const phase; int offset; } ;
typedef TYPE_3__ QDM2Context ;
typedef TYPE_4__ QDM2Complex ;
typedef TYPE_5__ FFTTone ;


 double VAR_0 ;
 float FUNC_0 (double const) ;
 double** VAR_1 ;
 int ** VAR_2 ;
 int FUNC_1 (TYPE_9__*,int ,int) ;
 int FUNC_2 (TYPE_3__*,TYPE_5__*) ;
 float FUNC_3 (double const) ;

__attribute__((used)) static void FUNC_4(QDM2Context *VAR_3, int VAR_4)
{
    int VAR_5, VAR_6, VAR_7;
    const double VAR_8 = 0.25 * VAR_0;

    for (VAR_7 = 0; VAR_7 < VAR_3->channels; VAR_7++) {
        FUNC_1(VAR_3->fft.complex[VAR_7], 0, VAR_3->fft_size * sizeof(QDM2Complex));
    }



    if (VAR_3->fft_coefs_min_index[4] >= 0)
        for (VAR_5 = VAR_3->fft_coefs_min_index[4]; VAR_5 < VAR_3->fft_coefs_max_index[4]; VAR_5++) {
            float VAR_9;
            QDM2Complex VAR_10;

            if (VAR_3->fft_coefs[VAR_5].sub_packet != VAR_4)
                break;

            VAR_7 = (VAR_3->channels == 1) ? 0 : VAR_3->fft_coefs[VAR_5].channel;
            VAR_9 = (VAR_3->fft_coefs[VAR_5].exp < 0) ? 0.0 : VAR_1[VAR_3->superblocktype_2_3 ? 0 : 1][VAR_3->fft_coefs[VAR_5].exp & 63];

            VAR_10.re = VAR_9 * FUNC_0(VAR_3->fft_coefs[VAR_5].phase * VAR_8);
            VAR_10.im = VAR_9 * FUNC_3(VAR_3->fft_coefs[VAR_5].phase * VAR_8);
            VAR_3->fft.complex[VAR_7][VAR_3->fft_coefs[VAR_5].offset + 0].re += VAR_10.re;
            VAR_3->fft.complex[VAR_7][VAR_3->fft_coefs[VAR_5].offset + 0].im += VAR_10.im;
            VAR_3->fft.complex[VAR_7][VAR_3->fft_coefs[VAR_5].offset + 1].re -= VAR_10.re;
            VAR_3->fft.complex[VAR_7][VAR_3->fft_coefs[VAR_5].offset + 1].im -= VAR_10.im;
        }


    for (VAR_5 = VAR_3->fft_tone_end; VAR_5 != VAR_3->fft_tone_start; ) {
        FUNC_2(VAR_3, &VAR_3->fft_tones[VAR_3->fft_tone_start]);
        VAR_3->fft_tone_start = (VAR_3->fft_tone_start + 1) % 1000;
    }


    for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
        if (VAR_3->fft_coefs_min_index[VAR_5] >= 0) {
            for (VAR_6 = VAR_3->fft_coefs_min_index[VAR_5]; VAR_6 < VAR_3->fft_coefs_max_index[VAR_5]; VAR_6++) {
                int VAR_11, VAR_12;
                FFTTone VAR_13;

                if (VAR_3->fft_coefs[VAR_6].sub_packet != VAR_4)
                    break;

                VAR_12 = (4 - VAR_5);
                VAR_11 = VAR_3->fft_coefs[VAR_6].offset >> VAR_12;
                VAR_7 = (VAR_3->channels == 1) ? 0 : VAR_3->fft_coefs[VAR_6].channel;

                if (VAR_11 < VAR_3->frequency_range) {
                    if (VAR_11 < 2)
                        VAR_13.cutoff = VAR_11;
                    else
                        VAR_13.cutoff = (VAR_11 >= 60) ? 3 : 2;

                    VAR_13.level = (VAR_3->fft_coefs[VAR_6].exp < 0) ? 0.0 : VAR_1[VAR_3->superblocktype_2_3 ? 0 : 1][VAR_3->fft_coefs[VAR_6].exp & 63];
                    VAR_13.complex = &VAR_3->fft.complex[VAR_7][VAR_11];
                    VAR_13.table = VAR_2[VAR_5][VAR_3->fft_coefs[VAR_6].offset - (VAR_11 << VAR_12)];
                    VAR_13.phase = 64 * VAR_3->fft_coefs[VAR_6].phase - (VAR_11 << 8) - 128;
                    VAR_13.phase_shift = (2 * VAR_3->fft_coefs[VAR_6].offset + 1) << (7 - VAR_12);
                    VAR_13.duration = VAR_5;
                    VAR_13.time_index = 0;

                    FUNC_2(VAR_3, &VAR_13);
                }
            }
            VAR_3->fft_coefs_min_index[VAR_5] = VAR_6;
        }
}
