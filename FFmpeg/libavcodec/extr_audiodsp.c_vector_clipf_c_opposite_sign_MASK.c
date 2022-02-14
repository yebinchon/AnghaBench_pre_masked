
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;


 unsigned int FUNC_0 (unsigned int const,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_1(float *VAR_0, const float *VAR_1,
                                         float *VAR_2, float *VAR_3, int VAR_4)
{
    int VAR_5;
    uint32_t VAR_6 = *(uint32_t *) VAR_2;
    uint32_t VAR_7 = *(uint32_t *) VAR_3;
    uint32_t VAR_8 = VAR_7 ^ (1U << 31);
    uint32_t *VAR_9 = (uint32_t *) VAR_0;
    const uint32_t *VAR_10 = (const uint32_t *) VAR_1;

    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5 += 8) {
        VAR_9[VAR_5 + 0] = FUNC_0(VAR_10[VAR_5 + 0], VAR_6, VAR_7, VAR_8);
        VAR_9[VAR_5 + 1] = FUNC_0(VAR_10[VAR_5 + 1], VAR_6, VAR_7, VAR_8);
        VAR_9[VAR_5 + 2] = FUNC_0(VAR_10[VAR_5 + 2], VAR_6, VAR_7, VAR_8);
        VAR_9[VAR_5 + 3] = FUNC_0(VAR_10[VAR_5 + 3], VAR_6, VAR_7, VAR_8);
        VAR_9[VAR_5 + 4] = FUNC_0(VAR_10[VAR_5 + 4], VAR_6, VAR_7, VAR_8);
        VAR_9[VAR_5 + 5] = FUNC_0(VAR_10[VAR_5 + 5], VAR_6, VAR_7, VAR_8);
        VAR_9[VAR_5 + 6] = FUNC_0(VAR_10[VAR_5 + 6], VAR_6, VAR_7, VAR_8);
        VAR_9[VAR_5 + 7] = FUNC_0(VAR_10[VAR_5 + 7], VAR_6, VAR_7, VAR_8);
    }
}
