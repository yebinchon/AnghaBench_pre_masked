
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int *,int const*,int) ;

__attribute__((used)) static void FUNC_1(const uint32_t *VAR_0, uint32_t *VAR_1,
                              int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    const int VAR_7 = VAR_4 * VAR_2;
    const uint32_t *VAR_8,
                   *VAR_9 = VAR_0 + VAR_7,
                   *VAR_10 = VAR_1 + VAR_7;
    const uint32_t *VAR_11 = VAR_9 + VAR_6 * VAR_2;
    uint32_t *VAR_12;

    for (; VAR_9 < VAR_11; VAR_9 += VAR_2, VAR_10 += VAR_2) {
        VAR_8 = VAR_9 + VAR_3;
        VAR_12 = (uint32_t *)VAR_10 + VAR_3;

        FUNC_0(VAR_12, VAR_8, VAR_5 * sizeof(uint32_t));
    }
}
