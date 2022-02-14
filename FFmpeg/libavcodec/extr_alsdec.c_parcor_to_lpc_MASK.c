
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int const,int) ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_0, const int32_t *VAR_1, int32_t *VAR_2)
{
    int VAR_3, VAR_4;

    for (VAR_3 = 0, VAR_4 = VAR_0 - 1; VAR_3 < VAR_4; VAR_3++, VAR_4--) {
        unsigned VAR_5 = ((FUNC_0(VAR_1[VAR_0], VAR_2[VAR_4]) + (1 << 19)) >> 20);
        VAR_2[VAR_4] += ((FUNC_0(VAR_1[VAR_0], VAR_2[VAR_3]) + (1 << 19)) >> 20);
        VAR_2[VAR_3] += VAR_5;
    }
    if (VAR_3 == VAR_4)
        VAR_2[VAR_3] += ((FUNC_0(VAR_1[VAR_0], VAR_2[VAR_4]) + (1 << 19)) >> 20);

    VAR_2[VAR_0] = VAR_1[VAR_0];
}
