
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {double sample_floor; double auto_floor; } ;
struct TYPE_5__ {double* noisy_data; double* sfm_results; double sfm_threshold; } ;
typedef TYPE_1__ DeNoiseChannel ;
typedef TYPE_2__ AudioFFTDeNoiseContext ;


 double FUNC_0 (double) ;

__attribute__((used)) static void FUNC_1(AudioFFTDeNoiseContext *VAR_0,
                          DeNoiseChannel *VAR_1,
                          int VAR_2, int VAR_3)
{
    double VAR_4 = 0.0, VAR_5 = 1.0;
    int VAR_6 = 0, VAR_7 = 0;

    for (int VAR_8 = VAR_2; VAR_8 < VAR_3; VAR_8++) {
        if (VAR_1->noisy_data[VAR_8] > VAR_0->sample_floor) {
            VAR_7++;
            VAR_4 += VAR_1->noisy_data[VAR_8];
            VAR_5 *= VAR_1->noisy_data[VAR_8];
            if (VAR_5 > 1.0E100) {
                VAR_5 *= 1.0E-100;
                VAR_6++;
            } else if (VAR_5 < 1.0E-100) {
                VAR_5 *= 1.0E100;
                VAR_6--;
            }
        }
    }
    if (VAR_7 > 1) {
        VAR_4 /= VAR_7;
        VAR_1->sfm_results[0] = VAR_4;
        VAR_5 = FUNC_0(VAR_5) + 230.2585 * VAR_6;
        VAR_5 /= VAR_7;
        VAR_4 = FUNC_0(VAR_4);
        VAR_1->sfm_results[1] = VAR_4;
        VAR_1->sfm_results[2] = VAR_4 - VAR_5;
    } else {
        VAR_1->sfm_results[0] = VAR_0->auto_floor;
        VAR_1->sfm_results[1] = VAR_1->sfm_threshold;
        VAR_1->sfm_results[2] = VAR_1->sfm_threshold;
    }
}
