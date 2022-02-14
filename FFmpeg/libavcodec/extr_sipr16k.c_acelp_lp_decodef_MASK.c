
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (double const*,float*,int) ;

__attribute__((used)) static void FUNC_1(float *VAR_1, float *VAR_2,
                             const double *VAR_3, const double *VAR_4)
{
    double VAR_5[VAR_0];
    int VAR_6;


    for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
        VAR_5[VAR_6] = (VAR_3[VAR_6] + VAR_4[VAR_6]) * 0.5;

    FUNC_0(VAR_5, VAR_1, VAR_0 >> 1);


    FUNC_0(VAR_3, VAR_2, VAR_0 >> 1);
}
