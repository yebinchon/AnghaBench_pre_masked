
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (double const*,double*,int) ;

void FUNC_1(const double *VAR_1, float *VAR_2, int VAR_3)
{
    int VAR_4 = VAR_3 >> 1;
    double VAR_5[VAR_0 + 1];
    double VAR_6[VAR_0 + 1];
    double *VAR_7 = VAR_5 + 1;
    int VAR_8,VAR_9;

    VAR_7[-1] = 0.0;

    FUNC_0(VAR_1 , VAR_6, VAR_4 );
    FUNC_0(VAR_1 + 1, VAR_7, VAR_4 - 1);

    for (VAR_8 = 1, VAR_9 = VAR_3 - 1; VAR_8 < VAR_4; VAR_8++, VAR_9--) {
        double VAR_10 = VAR_6[VAR_8] * (1 + VAR_1[VAR_3 - 1]);
        double VAR_11 = (VAR_7[VAR_8] - VAR_7[VAR_8-2]) * (1 - VAR_1[VAR_3 - 1]);
        VAR_2[VAR_8-1] = (VAR_10 + VAR_11) * 0.5;
        VAR_2[VAR_9-1] = (VAR_10 - VAR_11) * 0.5;
    }

    VAR_2[VAR_4 - 1] = (1.0 + VAR_1[VAR_3 - 1]) *
        VAR_6[VAR_4] * 0.5;

    VAR_2[VAR_3 - 1] = VAR_1[VAR_3 - 1];
}
