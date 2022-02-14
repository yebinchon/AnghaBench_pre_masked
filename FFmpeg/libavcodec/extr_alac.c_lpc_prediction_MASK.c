
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef void* int32_t ;
typedef int int16_t ;


 int FUNC_0 (int*,void**,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(int32_t *VAR_0, uint32_t *VAR_1,
                           int VAR_2, int VAR_3, int16_t *VAR_4,
                           int VAR_5, int VAR_6)
{
    int VAR_7;
    uint32_t *VAR_8 = VAR_1;


    *VAR_1 = *VAR_0;

    if (VAR_2 <= 1)
        return;

    if (!VAR_5) {
        FUNC_0(&VAR_1[1], &VAR_0[1],
               (VAR_2 - 1) * sizeof(*VAR_1));
        return;
    }

    if (VAR_5 == 31) {

        for (VAR_7 = 1; VAR_7 < VAR_2; VAR_7++) {
            VAR_1[VAR_7] = FUNC_1(VAR_1[VAR_7 - 1] + VAR_0[VAR_7],
                                        VAR_3);
        }
        return;
    }


    for (VAR_7 = 1; VAR_7 <= VAR_5 && VAR_7 < VAR_2; VAR_7++)
        VAR_1[VAR_7] = FUNC_1(VAR_1[VAR_7 - 1] + VAR_0[VAR_7], VAR_3);



    for (; VAR_7 < VAR_2; VAR_7++) {
        int VAR_9;
        int VAR_10 = 0;
        unsigned VAR_11 = VAR_0[VAR_7];
        int VAR_12;
        int VAR_13 = *VAR_8++;


        for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
            VAR_10 += (VAR_8[VAR_9] - VAR_13) * VAR_4[VAR_9];
        VAR_10 = (VAR_10 + (1LL << (VAR_6 - 1))) >> VAR_6;
        VAR_10 += VAR_13 + VAR_11;
        VAR_1[VAR_7] = FUNC_1(VAR_10, VAR_3);


        VAR_12 = FUNC_2(VAR_11);
        if (VAR_12) {
            for (VAR_9 = 0; VAR_9 < VAR_5 && (int)(VAR_11 * VAR_12) > 0; VAR_9++) {
                int VAR_14;
                VAR_10 = VAR_13 - VAR_8[VAR_9];
                VAR_14 = FUNC_2(VAR_10) * VAR_12;
                VAR_4[VAR_9] -= VAR_14;
                VAR_10 *= VAR_14;
                VAR_11 -= (VAR_10 >> VAR_6) * (VAR_9 + 1);
            }
        }
    }
}
