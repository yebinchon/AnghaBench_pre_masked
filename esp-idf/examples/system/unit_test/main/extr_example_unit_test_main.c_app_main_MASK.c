
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int numbers ;


 int* FUNC_0 (int const,int) ;
 int const FUNC_1 () ;
 int FUNC_2 (int*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int*,int const) ;

void FUNC_5(void)
{
    const int VAR_0 = 32;
    const int VAR_1 = 100;

    FUNC_3("In main application. Collecting %d random numbers from 1 to %d:\n", VAR_0, VAR_1);
    int *VAR_2 = FUNC_0(VAR_0, sizeof(VAR_2[0]));
    for (int VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
        VAR_2[VAR_3] = 1 + FUNC_1() % (VAR_1 - 1);
        FUNC_3("%4d ", VAR_2[VAR_3]);
        if ((VAR_3 + 1) % 10 == 0) {
            FUNC_3("\n");
        }
    }

    int VAR_4 = FUNC_4(VAR_2, VAR_0);
    FUNC_3("\nMean: %d\n", VAR_4);
    FUNC_2(VAR_2);
}
