
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int (* me_cmp_func ) (int *,int *,int *,int,int) ;
typedef double int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 double FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int) ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void FUNC_4(const char *VAR_6,
                 me_cmp_func VAR_7, me_cmp_func VAR_8)
{
    int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    uint8_t *VAR_14;
    int64_t VAR_15;
    FUNC_3("testing '%s'\n", VAR_6);


    for(VAR_13=0;VAR_13<20;VAR_13++) {

        FUNC_2(VAR_4, VAR_2 * VAR_0);
        FUNC_2(VAR_5, VAR_2 * VAR_0);

        for(VAR_10=0;VAR_10<VAR_0-17;VAR_10++) {
            for(VAR_9=0;VAR_9<VAR_2-17;VAR_9++) {
                VAR_14 = VAR_5 + VAR_10 * VAR_2 + VAR_9;
                VAR_11 = VAR_7(((void*)0), VAR_4, VAR_14, VAR_2, 8);
                VAR_12 = VAR_8(((void*)0), VAR_4, VAR_14, VAR_2, 8);
                if (VAR_11 != VAR_12) {
                    FUNC_3("error: mmx=%d c=%d\n", VAR_11, VAR_12);
                }
            }
        }
    }
    FUNC_1();


    VAR_15 = FUNC_0();
    VAR_11 = 0;
    for(VAR_13=0;VAR_13<VAR_1;VAR_13++) {
        for(VAR_10=0;VAR_10<VAR_0-17;VAR_10++) {
            for(VAR_9=0;VAR_9<VAR_2-17;VAR_9++) {
                VAR_14 = VAR_5 + VAR_10 * VAR_2 + VAR_9;
                VAR_11 += VAR_7(((void*)0), VAR_4, VAR_14, VAR_2, 8);
            }
        }
    }
    FUNC_1();
    VAR_3 = VAR_11;
    VAR_15 = FUNC_0() - VAR_15;

    FUNC_3("  %0.0f kop/s\n",
           (double)VAR_1 * (VAR_2 - 16) * (VAR_0 - 16) /
           (double)(VAR_15 / 1000.0));
}
