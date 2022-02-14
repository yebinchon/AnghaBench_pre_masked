
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;
typedef int real ;
typedef long long pthread_t ;
typedef int FILE ;
typedef int CREC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (long long*) ;
 int FUNC_4 (int *,int ,int ) ;
 long long FUNC_5 (int *) ;
 int VAR_4 ;
 int FUNC_6 () ;
 char* VAR_5 ;
 long long* VAR_6 ;
 struct tm* FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (long long*,int *,int ,void*) ;
 int FUNC_10 (long long,int *) ;
 int FUNC_11 (int) ;
 int VAR_10 ;
 int FUNC_12 (char*,int,char*,struct tm*) ;
 int FUNC_13 (int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

int FUNC_14() {
    long long VAR_15, VAR_16;
    int VAR_17;
    int VAR_18;
    FILE *VAR_19;
    real VAR_20 = 0;

    FUNC_2(VAR_10, "TRAINING MODEL\n");

    VAR_19 = FUNC_1(VAR_5, "rb");
    if (VAR_19 == ((void*)0)) {FUNC_2(VAR_10,"Unable to open cooccurrence file %s.\n",VAR_5); return 1;}
    FUNC_4(VAR_19, 0, VAR_0);
    VAR_16 = FUNC_5(VAR_19);
    VAR_8 = VAR_16/(sizeof(CREC));
    FUNC_0(VAR_19);
    FUNC_2(VAR_10,"Read %lld lines.\n", VAR_8);
    if (VAR_12 > 1) FUNC_2(VAR_10,"Initializing parameters...");
    FUNC_6();
    if (VAR_12 > 1) FUNC_2(VAR_10,"done.\n");
    if (VAR_12 > 0) FUNC_2(VAR_10,"vector size: %d\n", VAR_11);
    if (VAR_12 > 0) FUNC_2(VAR_10,"vocab size: %lld\n", VAR_13);
    if (VAR_12 > 0) FUNC_2(VAR_10,"x_max: %lf\n", VAR_14);
    if (VAR_12 > 0) FUNC_2(VAR_10,"alpha: %lf\n", VAR_1);
    pthread_t *VAR_21 = (pthread_t *)FUNC_8(VAR_9 * sizeof(pthread_t));
    VAR_6 = (long long *) FUNC_8(VAR_9 * sizeof(long long));

    time_t VAR_22;
    struct tm *VAR_23;
    char VAR_24[80];

    for (VAR_18 = 0; VAR_18 < VAR_7; VAR_18++) {
        VAR_20 = 0;
        for (VAR_15 = 0; VAR_15 < VAR_9 - 1; VAR_15++) VAR_6[VAR_15] = VAR_8 / VAR_9;
        VAR_6[VAR_15] = VAR_8 / VAR_9 + VAR_8 % VAR_9;
        long long *VAR_25 = (long long*)FUNC_8(sizeof(long long) * VAR_9);
        for (VAR_15 = 0; VAR_15 < VAR_9; VAR_15++) VAR_25[VAR_15] = VAR_15;
        for (VAR_15 = 0; VAR_15 < VAR_9; VAR_15++) FUNC_9(&VAR_21[VAR_15], ((void*)0), VAR_4, (void *)&VAR_25[VAR_15]);
        for (VAR_15 = 0; VAR_15 < VAR_9; VAR_15++) FUNC_10(VAR_21[VAR_15], ((void*)0));
        for (VAR_15 = 0; VAR_15 < VAR_9; VAR_15++) VAR_20 += VAR_3[VAR_15];
        FUNC_3(VAR_25);

        FUNC_13(&VAR_22);
        VAR_23 = FUNC_7(&VAR_22);
        FUNC_12(VAR_24,80,"%x - %I:%M.%S%p", VAR_23);
        FUNC_2(VAR_10, "%s, iter: %03d, cost: %lf\n", VAR_24, VAR_18+1, VAR_20/VAR_8);

        if (VAR_2 > 0 && (VAR_18 + 1) % VAR_2 == 0) {
            FUNC_2(VAR_10,"    saving itermediate parameters for iter %03d...", VAR_18+1);
            VAR_17 = FUNC_11(VAR_18+1);
            if (VAR_17 != 0)
                return VAR_17;
            FUNC_2(VAR_10,"done.\n");
        }

    }
    FUNC_3(VAR_21);
    FUNC_3(VAR_6);
    return FUNC_11(0);
}
