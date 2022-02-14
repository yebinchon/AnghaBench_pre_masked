
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int out ;
struct TYPE_14__ {int (* vector_fmul_scalar ) (float*,float*,float,int) ;} ;
struct TYPE_13__ {int start_pos; int stop_pos; scalar_t__ has_stop_point; scalar_t__ has_start_point; } ;
struct TYPE_12__ {size_t amp_sf; int amp_index; int freq_index; int phase_index; } ;
struct TYPE_11__ {int amplitude_mode; TYPE_3__* waves; } ;
struct TYPE_10__ {size_t start_index; int num_wavs; } ;
typedef TYPE_1__ Atrac3pWavesData ;
typedef TYPE_2__ Atrac3pWaveSynthParams ;
typedef TYPE_3__ Atrac3pWaveParam ;
typedef TYPE_4__ Atrac3pWaveEnvelope ;
typedef TYPE_5__ AVFloatDSPContext ;


 int FUNC_0 (int ) ;
 int* VAR_0 ;
 float* VAR_1 ;
 int FUNC_1 (float*,int ,int) ;
 double* VAR_2 ;
 int FUNC_2 (float*,float*,float,int) ;

__attribute__((used)) static void FUNC_3(Atrac3pWaveSynthParams *VAR_3,
                        Atrac3pWavesData *VAR_4,
                        Atrac3pWaveEnvelope *VAR_5,
                        AVFloatDSPContext *VAR_6,
                        int VAR_7, int VAR_8, float *VAR_9)
{
    int VAR_10, VAR_11, VAR_12, VAR_13;
    double VAR_14;
    Atrac3pWaveParam *VAR_15 = &VAR_3->waves[VAR_4->start_index];

    for (VAR_11 = 0; VAR_11 < VAR_4->num_wavs; VAR_11++, VAR_15++) {

        VAR_14 = VAR_0[VAR_15->amp_sf] *
              (!VAR_3->amplitude_mode
               ? (VAR_15->amp_index + 1) / 15.13f
               : 1.0f);

        VAR_12 = VAR_15->freq_index;
        VAR_13 = FUNC_0(VAR_15->phase_index) - (VAR_8 ^ 128) * VAR_12 & 2047;


        for (VAR_10 = 0; VAR_10 < 128; VAR_10++) {
            VAR_9[VAR_10] += VAR_2[VAR_13] * VAR_14;
            VAR_13 = (VAR_13 + VAR_12) & 2047;
        }
    }


    if (VAR_7)
        VAR_6->vector_fmul_scalar(VAR_9, VAR_9, -1.0f, 128);


    if (VAR_5->has_start_point) {
        VAR_13 = (VAR_5->start_pos << 2) - VAR_8;
        if (VAR_13 > 0 && VAR_13 <= 128) {
            FUNC_1(VAR_9, 0, VAR_13 * sizeof(*VAR_9));
            if (!VAR_5->has_stop_point ||
                VAR_5->start_pos != VAR_5->stop_pos) {
                VAR_9[VAR_13 + 0] *= VAR_1[0];
                VAR_9[VAR_13 + 1] *= VAR_1[32];
                VAR_9[VAR_13 + 2] *= VAR_1[64];
                VAR_9[VAR_13 + 3] *= VAR_1[96];
            }
        }
    }


    if (VAR_5->has_stop_point) {
        VAR_13 = ((VAR_5->stop_pos + 1) << 2) - VAR_8;
        if (VAR_13 > 0 && VAR_13 <= 128) {
            VAR_9[VAR_13 - 4] *= VAR_1[96];
            VAR_9[VAR_13 - 3] *= VAR_1[64];
            VAR_9[VAR_13 - 2] *= VAR_1[32];
            VAR_9[VAR_13 - 1] *= VAR_1[0];
            FUNC_1(&VAR_9[VAR_13], 0, (128 - VAR_13) * sizeof(VAR_9[VAR_13]));
        }
    }
}
