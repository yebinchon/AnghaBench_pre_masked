
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static inline void FUNC_0(const uint8_t *VAR_0, uint8_t *VAR_1, int VAR_2)
{
    unsigned VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3 += 3) {
        register uint8_t VAR_4 = VAR_0[VAR_3 + 2];
        VAR_1[VAR_3 + 1] = VAR_0[VAR_3 + 1];
        VAR_1[VAR_3 + 2] = VAR_0[VAR_3 + 0];
        VAR_1[VAR_3 + 0] = VAR_4;
    }
}
