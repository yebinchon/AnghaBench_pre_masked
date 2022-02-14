
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int const,int const) ;

__attribute__((used)) static void FUNC_1(const int *VAR_0, int *VAR_1)
{
    static const int VAR_2[32] = {
         1048892, 1051425, 1056522, 1064244,
         1074689, 1087987, 1104313, 1123884,
         1146975, 1173922, 1205139, 1241133,
         1282529, 1330095, 1384791, 1447815,
        -1520688, -1605358, -1704360, -1821051,
        -1959964, -2127368, -2332183, -2587535,
        -2913561, -3342802, -3931480, -4785806,
        -6133390, -8566050, -14253820, -42727120
    };

    int VAR_3, VAR_4;

    for (VAR_3 = 0; VAR_3 < 16; VAR_3++)
        VAR_1[VAR_3] = FUNC_0(VAR_2[VAR_3], VAR_0[VAR_3] + VAR_0[16 + VAR_3]);

    for (VAR_3 = 16, VAR_4 = 15; VAR_3 < 32; VAR_3++, VAR_4--)
        VAR_1[VAR_3] = FUNC_0(VAR_2[VAR_3], VAR_0[VAR_4] - VAR_0[16 + VAR_4]);
}
