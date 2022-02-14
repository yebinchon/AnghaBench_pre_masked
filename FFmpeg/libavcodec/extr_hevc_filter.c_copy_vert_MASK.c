
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int ptrdiff_t ;



__attribute__((used)) static void FUNC_0(uint8_t *VAR_0, const uint8_t *VAR_1,
                      int VAR_2, int VAR_3,
                      ptrdiff_t VAR_4, ptrdiff_t VAR_5)
{
    int VAR_6;
    if (VAR_2 == 0) {
        for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
            *VAR_0 = *VAR_1;
            VAR_0 += VAR_4;
            VAR_1 += VAR_5;
        }
    } else {
        for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
            *(uint16_t *)VAR_0 = *(uint16_t *)VAR_1;
            VAR_0 += VAR_4;
            VAR_1 += VAR_5;
        }
    }
}
