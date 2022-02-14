
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double* band_centre; int sample_rate; } ;
typedef TYPE_1__ AudioFFTDeNoiseContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (double) ;

__attribute__((used)) static int FUNC_2(AudioFFTDeNoiseContext *VAR_0, int VAR_1)
{
    int VAR_2;

    if (VAR_1 == 15) {
        VAR_2 = FUNC_1(VAR_0->band_centre[14] * 1.224745);
    } else {
        VAR_2 = FUNC_1(VAR_0->band_centre[VAR_1] / 1.224745);
    }

    return FUNC_0(VAR_2, VAR_0->sample_rate / 2);
}
