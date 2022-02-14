
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double* band_centre; } ;
typedef TYPE_1__ AudioFFTDeNoiseContext ;


 double VAR_0 ;
 double FUNC_0 (double) ;
 int FUNC_1 (double) ;

__attribute__((used)) static int FUNC_2(AudioFFTDeNoiseContext *VAR_1,
                          int VAR_2, double VAR_3,
                          double VAR_4, double VAR_5)
{
    double VAR_6, VAR_7, VAR_8;

    VAR_6 = VAR_3 / VAR_1->band_centre[VAR_2];
    VAR_6 = 10.0 * FUNC_0(1.0 + VAR_6 * VAR_6) / VAR_0;
    VAR_7 = VAR_4 / VAR_1->band_centre[VAR_2];
    VAR_7 = 10.0 * FUNC_0(1.0 + VAR_7 * VAR_7) / VAR_0;
    VAR_8 = VAR_1->band_centre[VAR_2] / VAR_5;
    VAR_8 = 10.0 * FUNC_0(1.0 + VAR_8 * VAR_8) / VAR_0;

    return FUNC_1(-VAR_6 + VAR_7 - VAR_8);
}
