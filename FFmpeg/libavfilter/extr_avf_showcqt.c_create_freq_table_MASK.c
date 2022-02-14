
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double* FUNC_0 (int,int) ;
 double FUNC_1 (double) ;
 double FUNC_2 (double) ;

__attribute__((used)) static double *FUNC_3(double VAR_0, double VAR_1, int VAR_2)
{
    double VAR_3, VAR_4;
    double VAR_5 = 1.0 / VAR_2;
    double *VAR_6;
    int VAR_7;

    VAR_6 = FUNC_0(VAR_2, sizeof(*VAR_6));
    if (!VAR_6)
        return ((void*)0);

    VAR_3 = FUNC_2(VAR_0);
    VAR_4 = FUNC_2(VAR_1);
    for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
        double VAR_8 = VAR_3 + (VAR_7 + 0.5) * (VAR_4 - VAR_3) * VAR_5;
        VAR_6[VAR_7] = FUNC_1(VAR_8);
    }
    return VAR_6;
}
