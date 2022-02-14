
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double** covariance; int indep_count; double** coeff; double* variance; } ;
typedef TYPE_1__ LLSModel ;


 int VAR_0 ;
 double FUNC_0 (double) ;

void FUNC_1(LLSModel *VAR_1, double VAR_2, unsigned short VAR_3)
{
    int VAR_4, VAR_5, VAR_6;
    double (*VAR_7)[VAR_0] = (void *) &VAR_1->covariance[1][0];
    double (*VAR_8) [VAR_0] = (void *) &VAR_1->covariance[1][1];
    double *VAR_9 = VAR_1->covariance[0];
    int VAR_10 = VAR_1->indep_count;

    for (VAR_4 = 0; VAR_4 < VAR_10; VAR_4++) {
        for (VAR_5 = VAR_4; VAR_5 < VAR_10; VAR_5++) {
            double VAR_11 = VAR_8[VAR_4][VAR_5];

            for (VAR_6 = 0; VAR_6 <= VAR_4-1; VAR_6++)
                VAR_11 -= VAR_7[VAR_4][VAR_6] * VAR_7[VAR_5][VAR_6];

            if (VAR_4 == VAR_5) {
                if (VAR_11 < VAR_2)
                    VAR_11 = 1.0;
                VAR_7[VAR_4][VAR_4] = FUNC_0(VAR_11);
            } else {
                VAR_7[VAR_5][VAR_4] = VAR_11 / VAR_7[VAR_4][VAR_4];
            }
        }
    }

    for (VAR_4 = 0; VAR_4 < VAR_10; VAR_4++) {
        double VAR_12 = VAR_9[VAR_4 + 1];

        for (VAR_6 = 0; VAR_6 <= VAR_4-1; VAR_6++)
            VAR_12 -= VAR_7[VAR_4][VAR_6] * VAR_1->coeff[0][VAR_6];

        VAR_1->coeff[0][VAR_4] = VAR_12 / VAR_7[VAR_4][VAR_4];
    }

    for (VAR_5 = VAR_10 - 1; VAR_5 >= VAR_3; VAR_5--) {
        for (VAR_4 = VAR_5; VAR_4 >= 0; VAR_4--) {
            double VAR_13 = VAR_1->coeff[0][VAR_4];

            for (VAR_6 = VAR_4 + 1; VAR_6 <= VAR_5; VAR_6++)
                VAR_13 -= VAR_7[VAR_6][VAR_4] * VAR_1->coeff[VAR_5][VAR_6];

            VAR_1->coeff[VAR_5][VAR_4] = VAR_13 / VAR_7[VAR_4][VAR_4];
        }

        VAR_1->variance[VAR_5] = VAR_9[0];

        for (VAR_4 = 0; VAR_4 <= VAR_5; VAR_4++) {
            double VAR_14 = VAR_1->coeff[VAR_5][VAR_4] * VAR_8[VAR_4][VAR_4] - 2 * VAR_9[VAR_4 + 1];

            for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
                VAR_14 += 2 * VAR_1->coeff[VAR_5][VAR_6] * VAR_8[VAR_6][VAR_4];

            VAR_1->variance[VAR_5] += VAR_1->coeff[VAR_5][VAR_4] * VAR_14;
        }
    }
}
