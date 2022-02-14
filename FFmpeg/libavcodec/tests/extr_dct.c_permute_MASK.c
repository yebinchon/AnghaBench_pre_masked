
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;
typedef enum idct_permutation_type { ____Placeholder_idct_permutation_type } idct_permutation_type ;





 scalar_t__ FUNC_0 (int *,int const*,int) ;

__attribute__((used)) static void FUNC_1(int16_t VAR_0[64], const int16_t VAR_1[64],
                    enum idct_permutation_type VAR_2)
{
    int VAR_3;






    switch (VAR_2) {
    case 130:
        for (VAR_3 = 0; VAR_3 < 64; VAR_3++)
            VAR_0[(VAR_3 & 0x38) | ((VAR_3 & 6) >> 1) | ((VAR_3 & 1) << 2)] = VAR_1[VAR_3];
        break;
    case 129:
        for (VAR_3 = 0; VAR_3 < 64; VAR_3++)
            VAR_0[(VAR_3 & 0x24) | ((VAR_3 & 3) << 3) | ((VAR_3 >> 3) & 3)] = VAR_1[VAR_3];
        break;
    case 128:
        for (VAR_3 = 0; VAR_3 < 64; VAR_3++)
            VAR_0[(VAR_3>>3) | ((VAR_3<<3)&0x38)] = VAR_1[VAR_3];
        break;
    default:
        for (VAR_3 = 0; VAR_3 < 64; VAR_3++)
            VAR_0[VAR_3] = VAR_1[VAR_3];
        break;
    }
}
