
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, const void *VAR_1, size_t VAR_2)
{
    uint32_t *VAR_3 = (uint32_t *)VAR_0;
    const uint32_t *VAR_4 = (const uint32_t *)VAR_1;
    FUNC_0(VAR_2 % 8 == 0);
    for (int VAR_5 = 0; VAR_5 < VAR_2 / 4; VAR_5 += 2) {
        VAR_3[VAR_5] = VAR_4[VAR_5+1];
        VAR_3[VAR_5+1] = VAR_4[VAR_5];
    }
    asm volatile ("memw");
}
