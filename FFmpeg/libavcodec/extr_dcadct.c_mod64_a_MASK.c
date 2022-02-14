
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int const,int const) ;

__attribute__((used)) static void FUNC_1(const int *VAR_0, int *VAR_1)
{
    static const int VAR_2[32] = {
          4195568, 4205700, 4226086, 4256977,
          4298755, 4351949, 4417251, 4495537,
          4587901, 4695690, 4820557, 4964534,
          5130115, 5320382, 5539164, 5791261,
         -6082752, -6421430, -6817439, -7284203,
         -7839855, -8509474, -9328732, -10350140,
        -11654242, -13371208, -15725922, -19143224,
        -24533560, -34264200, -57015280, -170908480
    };

    int VAR_3, VAR_4;

    for (VAR_3 = 0; VAR_3 < 16; VAR_3++)
        VAR_1[VAR_3] = FUNC_0(VAR_2[VAR_3], VAR_0[VAR_3] + VAR_0[16 + VAR_3]);

    for (VAR_3 = 16, VAR_4 = 15; VAR_3 < 32; VAR_3++, VAR_4--)
        VAR_1[VAR_3] = FUNC_0(VAR_2[VAR_3], VAR_0[VAR_4] - VAR_0[16 + VAR_4]);
}
