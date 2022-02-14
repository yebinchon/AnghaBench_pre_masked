
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVLFG ;


 int VAR_0 ;
 int VAR_1 ;
 int** VAR_2 ;
 int FUNC_0 (int *,double*) ;
 int FUNC_1 (double**) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,char*,int,...) ;
 double* FUNC_5 (double,int) ;
 int FUNC_6 (int ,char*) ;
 double FUNC_7 (int) ;
 int FUNC_8 (char*,double,double,double,double,...) ;
 double FUNC_9 (double) ;
 int VAR_3 ;

int FUNC_10(void)
{
    int VAR_4 = 0;
    int VAR_5, VAR_6;
    AVLFG VAR_7;
    FUNC_3(&VAR_7, 0xdeadbeef);
    for (VAR_6 = 0; VAR_6 < 10000; VAR_6++) {
        for (VAR_5 = 0; VAR_5 < 624; VAR_5++) {

            VAR_4 += FUNC_2(&VAR_7);
        }
    }
    FUNC_4(((void*)0), VAR_0, "final value:%X\n", VAR_4);


    {
        double VAR_8 = 1000;
        double VAR_9 = 53;
        double VAR_10 = 0.0, VAR_11 = 0.0, VAR_12 = 0;
        double VAR_13, VAR_14 = -1, VAR_15 = 1000;
        double *VAR_16 = FUNC_5(VAR_15, sizeof(double));

        if (!VAR_16) {
            FUNC_6(VAR_3, "failed to allocate memory!\n");
            return 1;
        }

        FUNC_3(&VAR_7, 42);
        for (VAR_5 = 0; VAR_5 < VAR_15; VAR_5 += 2) {
            double VAR_17[2];
            FUNC_0(&VAR_7, VAR_17);
            VAR_16[VAR_5 ] = VAR_17[0] * VAR_9 + VAR_8;
            VAR_16[VAR_5+1] = VAR_17[1] * VAR_9 + VAR_8;
            VAR_10 += VAR_16[VAR_5] + VAR_16[VAR_5+1];
            VAR_11 += VAR_16[VAR_5] * VAR_16[VAR_5] + VAR_16[VAR_5+1] * VAR_16[VAR_5+1];
            FUNC_8("PRN%d : %f\n"
                   "PRN%d : %f\n",
                   VAR_5, VAR_16[VAR_5], VAR_5+1, VAR_16[VAR_5+1]);
        }
        VAR_10 /= VAR_15;
        VAR_11 /= (VAR_15 - 1);
        VAR_11 -= (VAR_15 * 1.0 / (VAR_15 - 1))*VAR_10*VAR_10;
        VAR_11 = FUNC_9(VAR_11);
        VAR_13 = (VAR_8 - VAR_10) / (VAR_9 / FUNC_9(VAR_15));
        {
            int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22 = 0;

            if (VAR_13 < 0.0) {
                VAR_22 = !VAR_22;
                VAR_13 = VAR_13 * -1.0;
            }

            VAR_20 = (int)(VAR_13 * 100);
            VAR_21 = ((int)VAR_13 * 100);
            VAR_18 = VAR_13 * 10;
            VAR_19 = (VAR_21 > 0) ? VAR_20 % VAR_21 : VAR_20;
            VAR_19 = VAR_19 % 10;
            if (VAR_18 > 30 || VAR_19 > 9) {
                FUNC_4(((void*)0), VAR_1, "error: out of bounds! tried to access"
                                          "Z_TABLE[%d][%d]\n", VAR_18, VAR_19);
                goto SKIP;
            }
            VAR_14 = VAR_22 ? 1 - VAR_2[VAR_18][VAR_19] : VAR_2[VAR_18][VAR_19];
        }

SKIP: for (VAR_5 = 0; VAR_5 < VAR_15; ++VAR_5) {

            if ( VAR_5 < (VAR_15 - 1)) {
                double VAR_23;
                VAR_23 = FUNC_7((VAR_5 + 2.0 - (3.0/8.0)) / (VAR_15 + (1.0/4.0)));
                VAR_23 -= FUNC_7((VAR_5 + 1.0 - (3.0/8.0)) / (VAR_15 + (1.0/4.0)));

                VAR_12 += ((VAR_16[VAR_5 + 1] - VAR_16[VAR_5]) / VAR_23);
            }
        }
        VAR_12 = 1.0 - VAR_12 / ((VAR_15 - 1.0) * VAR_11);

        FUNC_8("sample mean  : %f\n"
               "true mean    : %f\n"
               "sample stddev: %f\n"
               "true stddev  : %f\n"
               "z-score      : %f\n"
               "p-value      : %f\n"
               "QH[normality]: %f\n",
               VAR_10, VAR_8, VAR_11, VAR_9, VAR_13, VAR_14, VAR_12);

        FUNC_1(&VAR_16);
    }
    return 0;
}
