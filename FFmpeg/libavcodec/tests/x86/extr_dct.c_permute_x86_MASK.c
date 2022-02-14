
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;
typedef enum idct_permutation_type { ____Placeholder_idct_permutation_type } idct_permutation_type ;




 size_t* VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static int FUNC_0(int16_t VAR_2[64], const int16_t VAR_3[64],
                       enum idct_permutation_type VAR_4)
{
    int VAR_5;

    switch (VAR_4) {
    case 129:
        for (VAR_5 = 0; VAR_5 < 64; VAR_5++)
            VAR_2[VAR_0[VAR_5]] = VAR_3[VAR_5];
        return 1;
    case 128:
        for (VAR_5 = 0; VAR_5 < 64; VAR_5++)
            VAR_2[(VAR_5 & 0x38) | VAR_1[VAR_5 & 7]] = VAR_3[VAR_5];
        return 1;
    }

    return 0;
}
