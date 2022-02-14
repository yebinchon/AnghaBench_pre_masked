
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pos; int num_coefs; int* coef; } ;
typedef TYPE_1__ TonalComponent ;
typedef int GetBitContext ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 float* VAR_2 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 float* VAR_3 ;
 int FUNC_3 (int *,int,int,int*,int) ;

__attribute__((used)) static int FUNC_4(GetBitContext *VAR_4,
                                   TonalComponent *VAR_5, int VAR_6)
{
    int VAR_7, VAR_8, VAR_9, VAR_10;
    int VAR_11, VAR_12, VAR_13;
    int VAR_14[4], VAR_15[8];
    int VAR_16 = 0;

    VAR_11 = FUNC_1(VAR_4, 5);


    if (VAR_11 == 0)
        return 0;

    VAR_12 = FUNC_1(VAR_4, 2);
    if (VAR_12 == 2)
        return VAR_0;

    VAR_13 = VAR_12 & 1;

    for (VAR_7 = 0; VAR_7 < VAR_11; VAR_7++) {
        int VAR_17, VAR_18;

        for (VAR_8 = 0; VAR_8 <= VAR_6; VAR_8++)
            VAR_14[VAR_8] = FUNC_2(VAR_4);

        VAR_17 = FUNC_1(VAR_4, 3);

        VAR_18 = FUNC_1(VAR_4, 3);
        if (VAR_18 <= 1)
            return VAR_0;

        if (VAR_12 == 3)
            VAR_13 = FUNC_2(VAR_4);

        for (VAR_8 = 0; VAR_8 < (VAR_6 + 1) * 4; VAR_8++) {
            int VAR_19;

            if (VAR_14[VAR_8 >> 2] == 0)
                continue;

            VAR_19 = FUNC_1(VAR_4, 3);

            for (VAR_9 = 0; VAR_9 < VAR_19; VAR_9++) {
                TonalComponent *VAR_20 = &VAR_5[VAR_16];
                int VAR_21, VAR_22, VAR_23;
                float VAR_24;

                VAR_21 = FUNC_1(VAR_4, 6);
                if (VAR_16 >= 64)
                    return VAR_0;

                VAR_20->pos = VAR_8 * 64 + FUNC_1(VAR_4, 6);

                VAR_23 = VAR_1 - VAR_20->pos;
                VAR_22 = VAR_17 + 1;
                VAR_22 = FUNC_0(VAR_23, VAR_22);

                VAR_24 = VAR_2[VAR_21] *
                               VAR_3[VAR_18];

                FUNC_3(VAR_4, VAR_18, VAR_13,
                                           VAR_15, VAR_22);

                VAR_20->num_coefs = VAR_22;


                for (VAR_10 = 0; VAR_10 < VAR_22; VAR_10++)
                    VAR_20->coef[VAR_10] = VAR_15[VAR_10] * VAR_24;

                VAR_16++;
            }
        }
    }

    return VAR_16;
}
