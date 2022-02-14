
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static inline void FUNC_0(const uint8_t *VAR_0, uint8_t *VAR_1,
                                  int VAR_2)
{
    uint8_t *VAR_3 = VAR_1;
    const uint8_t *VAR_4 = VAR_0;
    const uint8_t *VAR_5 = VAR_4 + VAR_2;

    while (VAR_4 < VAR_5) {
        *VAR_3++ = *VAR_4++;
        *VAR_3++ = *VAR_4++;
        *VAR_3++ = *VAR_4++;
        *VAR_3++ = 255;

    }
}
