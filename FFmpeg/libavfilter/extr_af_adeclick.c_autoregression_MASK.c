
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (double const*,int,int,double*,int) ;
 int FUNC_1 (double*,int ,int) ;
 double FUNC_2 (double) ;

__attribute__((used)) static double FUNC_3(const double *VAR_0, int VAR_1,
                             int VAR_2, double *VAR_3, double *VAR_4, double *VAR_5)
{
    double VAR_6;
    int VAR_7, VAR_8;

    FUNC_1(VAR_5, 0, VAR_1 * sizeof(*VAR_5));

    FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4, 1. / VAR_2);


    VAR_3[0] = VAR_5[0] = -VAR_4[1] / VAR_4[0];
    VAR_6 = VAR_4[0] * (1. - VAR_3[0] * VAR_3[0]);
    for (VAR_7 = 1; VAR_7 < VAR_1; VAR_7++) {
        double VAR_9 = 0.;

        for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
            VAR_9 += VAR_5[VAR_8] * VAR_4[VAR_7 - VAR_8];
        VAR_9 += VAR_4[VAR_7 + 1];

        VAR_3[VAR_7] = -VAR_9 / VAR_6;
        VAR_6 *= (1. - VAR_3[VAR_7] * VAR_3[VAR_7]);
        for (VAR_8 = VAR_7 - 1; VAR_8 >= 0; VAR_8--)
            VAR_3[VAR_8] = VAR_5[VAR_8] + VAR_3[VAR_7] * VAR_5[VAR_7 - VAR_8 - 1];
        for (VAR_8 = 0; VAR_8 <= VAR_7; VAR_8++)
            VAR_5[VAR_8] = VAR_3[VAR_8];
    }

    VAR_3[0] = 1.;
    for (VAR_7 = 1; VAR_7 <= VAR_1; VAR_7++)
        VAR_3[VAR_7] = VAR_5[VAR_7 - 1];

    return FUNC_2(VAR_6);
}
