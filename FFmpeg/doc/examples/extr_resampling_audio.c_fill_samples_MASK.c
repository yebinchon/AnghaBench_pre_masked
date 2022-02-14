
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 double FUNC_0 (double const) ;

__attribute__((used)) static void FUNC_1(double *VAR_1, int VAR_2, int VAR_3, int VAR_4, double *VAR_5)
{
    int VAR_6, VAR_7;
    double VAR_8 = 1.0 / VAR_4, *VAR_9 = VAR_1;
    const double VAR_10 = 2 * VAR_0 * 440.0;


    for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
        *VAR_9 = FUNC_0(VAR_10 * *VAR_5);
        for (VAR_7 = 1; VAR_7 < VAR_3; VAR_7++)
            VAR_9[VAR_7] = VAR_9[0];
        VAR_9 += VAR_3;
        *VAR_5 += VAR_8;
    }
}
