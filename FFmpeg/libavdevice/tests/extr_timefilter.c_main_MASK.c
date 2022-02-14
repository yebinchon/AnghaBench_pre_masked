
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TimeFilter ;
typedef int AVLFG ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,double,double) ;
 double FUNC_5 (int *,double,double) ;
 int FUNC_6 (char*,...) ;

int FUNC_7(void)
{
    AVLFG VAR_2;
    double VAR_3, VAR_4;

    double VAR_5[1000];
    double VAR_6[1000];
    double VAR_7[1000];
    for (VAR_3 = 0; VAR_3 < 40; VAR_3 = 2 * VAR_3 + 1) {
        for (VAR_4 = 0; VAR_4 < 10; VAR_4 = 2 * VAR_4 + 1) {
            double VAR_8 = 1000000000;
            double VAR_9 = VAR_3 ? 1 : 100000;
            double VAR_10 = 1;
            int VAR_11, VAR_12;

            FUNC_1(&VAR_2, 123);
            for (VAR_12 = 0; VAR_12 < 1000; VAR_12++) {
                VAR_7[VAR_12] = 10 + VAR_12 + (FUNC_0(&VAR_2) < VAR_0/2 ? 0 : 0.999);
                VAR_5[VAR_12] = VAR_7[VAR_12] + VAR_4 * VAR_12 / (1000);
                VAR_6[VAR_12] = VAR_5[VAR_12] + VAR_3 * (FUNC_0(&VAR_2) - VAR_0 / 2) / (VAR_0 * 10LL);
                if(VAR_12 && VAR_6[VAR_12]<VAR_6[VAR_12-1])
                    VAR_6[VAR_12]=VAR_6[VAR_12-1]+0.001;
            }

            do {
                double VAR_13, VAR_14;
                VAR_11 = 0;
                for (VAR_13 = VAR_9 * 0.8; VAR_13 <= VAR_9 * 1.21; VAR_13 += VAR_9 * 0.05) {
                    for (VAR_14 = VAR_10 * 0.8; VAR_14 <= VAR_10 * 1.21; VAR_14 += VAR_10 * 0.05) {
                        double VAR_15 = 0;
                        TimeFilter *VAR_16 = FUNC_4(1, VAR_13, VAR_14);
                        if (!VAR_16) {
                            FUNC_6("Could not allocate memory for timefilter.\n");
                            FUNC_2(1);
                        }
                        for (VAR_12 = 0; VAR_12 < 1000; VAR_12++) {
                            double VAR_17;
                            VAR_17 = FUNC_5(VAR_16, VAR_6[VAR_12], VAR_12 ? (VAR_7[VAR_12] - VAR_7[VAR_12-1]) : 1);
                            if(VAR_17 < 0 || VAR_17 > 1000000000)
                                FUNC_6("filter is unstable\n");
                            VAR_15 += (VAR_17 - VAR_5[VAR_12]) * (VAR_17 - VAR_5[VAR_12]);
                        }
                        FUNC_3(VAR_16);
                        if (VAR_15 < VAR_8) {
                            VAR_8 = VAR_15;
                            VAR_9 = VAR_13;
                            VAR_10 = VAR_14;
                            VAR_11 = 1;
                        }
                    }
                }
            } while (VAR_11);
            FUNC_6(" [%12f %11f %9f]", VAR_9, VAR_10, VAR_8);
        }
        FUNC_6("\n");
    }
    return 0;
}
