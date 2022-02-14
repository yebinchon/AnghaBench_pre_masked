
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double* band_centre; } ;
typedef TYPE_1__ AudioFFTDeNoiseContext ;


 int FUNC_0 (double) ;

__attribute__((used)) static int FUNC_1(AudioFFTDeNoiseContext *VAR_0, int VAR_1)
{
    if (VAR_1 == -1)
        return FUNC_0(VAR_0->band_centre[0] / 1.5);

    return VAR_0->band_centre[VAR_1];
}
