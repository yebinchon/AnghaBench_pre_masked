
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static int FUNC_0(const uint8_t *VAR_0, const uint8_t *VAR_1)
{
    int VAR_2;
    int VAR_3 = (VAR_0[3] & 0xC0) == 0x80 &&
               (VAR_0[4] & 0xC0) != 0x40 &&
               ((VAR_0[4] & 0xC0) == 0x00 ||
                (VAR_0[4] & 0xC0) >> 2 == (VAR_0[6] & 0xF0));

    for (VAR_0 += 3; VAR_0 < VAR_1 && *VAR_0 == 0xFF; VAR_0++) ;
    if ((*VAR_0 & 0xC0) == 0x40)
        VAR_0 += 2;

    if ((*VAR_0 & 0xF0) == 0x20)
        VAR_2 = VAR_0[0] & VAR_0[2] & VAR_0[4] & 1;
    else if ((*VAR_0 & 0xF0) == 0x30)
        VAR_2 = VAR_0[0] & VAR_0[2] & VAR_0[4] & VAR_0[5] & VAR_0[7] & VAR_0[9] & 1;
    else
        VAR_2 = *VAR_0 == 0x0F;

    return VAR_2 || VAR_3;
}
