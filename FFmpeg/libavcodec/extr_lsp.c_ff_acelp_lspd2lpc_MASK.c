
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (double const*,double*,int) ;

void FUNC_2(const double *VAR_1, float *VAR_2, int VAR_3)
{
    double VAR_4[VAR_0+1], VAR_5[VAR_0+1];
    float *VAR_6 = VAR_2 + (VAR_3 << 1) - 1;

    FUNC_0(VAR_3 <= VAR_0);

    FUNC_1(VAR_1, VAR_4, VAR_3);
    FUNC_1(VAR_1 + 1, VAR_5, VAR_3);

    while (VAR_3--) {
        double VAR_7 = VAR_4[VAR_3+1] + VAR_4[VAR_3];
        double VAR_8 = VAR_5[VAR_3+1] - VAR_5[VAR_3];

        VAR_2 [ VAR_3] = 0.5*(VAR_7+VAR_8);
        VAR_6[-VAR_3] = 0.5*(VAR_7-VAR_8);
    }
}
