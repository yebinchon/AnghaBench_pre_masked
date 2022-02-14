
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double* y; int y_size; } ;
typedef TYPE_1__ DeclickChannel ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (double**,int *,int) ;
 int FUNC_2 (double*,int) ;

__attribute__((used)) static int FUNC_3(DeclickChannel *VAR_1, double *VAR_2,
                            double *VAR_3, int VAR_4, double *VAR_5)
{
    int VAR_6, VAR_7, VAR_8;
    double *VAR_9;

    VAR_8 = FUNC_2(VAR_2, VAR_4);
    if (VAR_8 < 0)
        return VAR_8;

    FUNC_1(&VAR_1->y, &VAR_1->y_size, VAR_4 * sizeof(*VAR_1->y));
    VAR_9 = VAR_1->y;
    if (!VAR_9)
        return FUNC_0(VAR_0);

    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
        const int VAR_10 = VAR_6 * VAR_4;
        double VAR_11;

        VAR_11 = VAR_3[VAR_6];
        for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
            VAR_11 -= VAR_2[VAR_10 + VAR_7] * VAR_9[VAR_7];
        VAR_9[VAR_6] = VAR_11;
    }

    for (VAR_6 = VAR_4 - 1; VAR_6 >= 0; VAR_6--) {
        VAR_5[VAR_6] = VAR_9[VAR_6] / VAR_2[VAR_6 * VAR_4 + VAR_6];
        for (VAR_7 = VAR_6 + 1; VAR_7 < VAR_4; VAR_7++)
            VAR_5[VAR_6] -= VAR_2[VAR_7 * VAR_4 + VAR_6] * VAR_5[VAR_7];
    }

    return 0;
}
