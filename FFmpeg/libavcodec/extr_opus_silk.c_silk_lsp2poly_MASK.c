
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int const,int,int) ;

__attribute__((used)) static void FUNC_1(const int32_t VAR_0[16], int32_t VAR_1[16], int VAR_2)
{
    int VAR_3, VAR_4;

    VAR_1[0] = 65536;
    VAR_1[1] = -VAR_0[0];

    for (VAR_3 = 1; VAR_3 < VAR_2; VAR_3++) {
        VAR_1[VAR_3 + 1] = VAR_1[VAR_3 - 1] * 2 - FUNC_0(VAR_0[2 * VAR_3], VAR_1[VAR_3], 16);
        for (VAR_4 = VAR_3; VAR_4 > 1; VAR_4--)
            VAR_1[VAR_4] += VAR_1[VAR_4 - 2] - FUNC_0(VAR_0[2 * VAR_3], VAR_1[VAR_4 - 1], 16);

        VAR_1[1] -= VAR_0[2 * VAR_3];
    }
}
