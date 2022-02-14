
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double* matrix; double* vector; int vector_size; int matrix_size; } ;
typedef TYPE_1__ DeclickChannel ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 size_t FUNC_1 (int) ;
 int FUNC_2 (double*,int,int,double*,int) ;
 int FUNC_3 (double**,int *,int) ;
 int FUNC_4 (TYPE_1__*,double*,double*,int,double*) ;
 scalar_t__ FUNC_5 (int*,int,int) ;

__attribute__((used)) static int FUNC_6(DeclickChannel *VAR_1, const double *VAR_2, int VAR_3,
                         double *VAR_4, int *VAR_5, int VAR_6,
                         double *VAR_7, double *VAR_8)
{
    double *VAR_9, *VAR_10;
    int VAR_11, VAR_12;

    FUNC_3(&VAR_1->matrix, &VAR_1->matrix_size, VAR_6 * VAR_6 * sizeof(*VAR_1->matrix));
    VAR_10 = VAR_1->matrix;
    if (!VAR_10)
        return FUNC_0(VAR_0);

    FUNC_3(&VAR_1->vector, &VAR_1->vector_size, VAR_6 * sizeof(*VAR_1->vector));
    VAR_9 = VAR_1->vector;
    if (!VAR_9)
        return FUNC_0(VAR_0);

    FUNC_2(VAR_4, VAR_3, VAR_3 + 1, VAR_7, 1.);

    for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
        const int VAR_13 = VAR_11 * VAR_6;

        for (VAR_12 = VAR_11; VAR_12 < VAR_6; VAR_12++) {
            if (FUNC_1(VAR_5[VAR_12] - VAR_5[VAR_11]) <= VAR_3) {
                VAR_10[VAR_12 * VAR_6 + VAR_11] = VAR_10[VAR_13 + VAR_12] = VAR_7[FUNC_1(VAR_5[VAR_12] - VAR_5[VAR_11])];
            } else {
                VAR_10[VAR_12 * VAR_6 + VAR_11] = VAR_10[VAR_13 + VAR_12] = 0;
            }
        }
    }

    for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
        double VAR_14 = 0.;

        for (VAR_12 = -VAR_3; VAR_12 <= VAR_3; VAR_12++)
            if (FUNC_5(VAR_5, VAR_5[VAR_11] - VAR_12, VAR_6))
                VAR_14 -= VAR_2[VAR_5[VAR_11] - VAR_12] * VAR_7[FUNC_1(VAR_12)];

        VAR_9[VAR_11] = VAR_14;
    }

    return FUNC_4(VAR_1, VAR_10, VAR_9, VAR_6, VAR_8);
}
