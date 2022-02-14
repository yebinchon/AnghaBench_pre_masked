
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef double real ;
struct TYPE_3__ {int word1; int word2; int val; } ;
typedef int FILE ;
typedef TYPE_1__ CREC ;


 int VAR_0 ;
 double* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (double) ;
 scalar_t__* VAR_3 ;
 double VAR_4 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_1__*,int,int,int *) ;
 int FUNC_6 (double*) ;
 int FUNC_7 (int *,long long,int ) ;
 double* VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_8 (double) ;
 scalar_t__ FUNC_9 (double) ;
 long long* VAR_7 ;
 double FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;
 long long VAR_8 ;
 long long VAR_9 ;
 double FUNC_12 (int,int ) ;
 int FUNC_13 (int *) ;
 double FUNC_14 (double) ;
 int VAR_10 ;
 int VAR_11 ;
 long long VAR_12 ;
 int VAR_13 ;

void *FUNC_15(void *VAR_14) {
    long long VAR_15, VAR_16 ,VAR_17, VAR_18;
    long long VAR_19 = *(long long*)VAR_14;
    CREC VAR_20;
    real VAR_21, VAR_22, VAR_23, VAR_24;
    FILE *VAR_25;
    VAR_25 = FUNC_3(VAR_6, "rb");
    FUNC_7(VAR_25, (VAR_8 / VAR_9 * VAR_19) * (sizeof(CREC)), VAR_0);
    VAR_3[VAR_19] = 0;

    real* VAR_26 = (real*)FUNC_11(VAR_11 * sizeof(real));
    real* VAR_27 = (real*)FUNC_11(VAR_11 * sizeof(real));
    for (VAR_15 = 0; VAR_15 < VAR_7[VAR_19]; VAR_15++) {
        FUNC_5(&VAR_20, sizeof(CREC), 1, VAR_25);
        if (FUNC_2(VAR_25)) break;
        if (VAR_20.word1 < 1 || VAR_20.word2 < 1) { continue; }


        VAR_17 = (VAR_20.word1 - 1LL) * (VAR_11 + 1);
        VAR_18 = ((VAR_20.word2 - 1LL) + VAR_12) * (VAR_11 + 1);


        VAR_21 = 0;
        for (VAR_16 = 0; VAR_16 < VAR_11; VAR_16++) VAR_21 += VAR_1[VAR_16 + VAR_17] * VAR_1[VAR_16 + VAR_18];
        VAR_21 += VAR_1[VAR_11 + VAR_17] + VAR_1[VAR_11 + VAR_18] - FUNC_10(VAR_20.val);
        VAR_22 = (VAR_20.val > VAR_13) ? VAR_21 : FUNC_12(VAR_20.val / VAR_13, VAR_2) * VAR_21;


        if (FUNC_9(VAR_21) || FUNC_9(VAR_22) || FUNC_8(VAR_21) || FUNC_8(VAR_22)) {
            FUNC_4(VAR_10,"Caught NaN in diff for kdiff for thread. Skipping update");
            continue;
        }

        VAR_3[VAR_19] += 0.5 * VAR_22 * VAR_21;


        VAR_22 *= VAR_4;
        real VAR_28 = 0;
        real VAR_29 = 0;
        for (VAR_16 = 0; VAR_16 < VAR_11; VAR_16++) {

            VAR_23 = VAR_22 * VAR_1[VAR_16 + VAR_18];
            VAR_24 = VAR_22 * VAR_1[VAR_16 + VAR_17];

            VAR_26[VAR_16] = VAR_23 / FUNC_14(VAR_5[VAR_16 + VAR_17]);
            VAR_27[VAR_16] = VAR_24 / FUNC_14(VAR_5[VAR_16 + VAR_18]);
            VAR_28 += VAR_26[VAR_16];
            VAR_29 += VAR_27[VAR_16];
            VAR_5[VAR_16 + VAR_17] += VAR_23 * VAR_23;
            VAR_5[VAR_16 + VAR_18] += VAR_24 * VAR_24;
        }
        if (!FUNC_9(VAR_28) && !FUNC_8(VAR_28) && !FUNC_9(VAR_29) && !FUNC_8(VAR_29)) {
            for (VAR_16 = 0; VAR_16 < VAR_11; VAR_16++) {
                VAR_1[VAR_16 + VAR_17] -= VAR_26[VAR_16];
                VAR_1[VAR_16 + VAR_18] -= VAR_27[VAR_16];
            }
        }


        VAR_1[VAR_11 + VAR_17] -= FUNC_0(VAR_22 / FUNC_14(VAR_5[VAR_11 + VAR_17]));
        VAR_1[VAR_11 + VAR_18] -= FUNC_0(VAR_22 / FUNC_14(VAR_5[VAR_11 + VAR_18]));
        VAR_22 *= VAR_22;
        VAR_5[VAR_11 + VAR_17] += VAR_22;
        VAR_5[VAR_11 + VAR_18] += VAR_22;

    }
    FUNC_6(VAR_26);
    FUNC_6(VAR_27);

    FUNC_1(VAR_25);
    FUNC_13(((void*)0));
}
