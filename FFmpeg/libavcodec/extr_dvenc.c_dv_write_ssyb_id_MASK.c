
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static inline int FUNC_0(uint8_t VAR_0, uint8_t VAR_1, uint8_t *VAR_2)
{
    if (VAR_0 == 0 || VAR_0 == 6) {
        VAR_2[0] = (VAR_1 << 7) |
                 (0 << 4) |
                 0x0f;
    } else if (VAR_0 == 11) {
        VAR_2[0] = (VAR_1 << 7) |
                 0x7f;
    } else {
        VAR_2[0] = (VAR_1 << 7) |
                 (0 << 4) |
                 0x0f;
    }
    VAR_2[1] = 0xf0 |
             (VAR_0 & 0x0f);
    VAR_2[2] = 0xff;
    return 3;
}
