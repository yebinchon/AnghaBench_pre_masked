
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;



int FUNC_0(const uint8_t *VAR_0, const char *VAR_1)
{
    return VAR_0[0] == VAR_1[0] &&
            VAR_0[1] == VAR_1[1] &&
            VAR_0[2] == VAR_1[2] &&
            VAR_0[3] != 0xff &&
            VAR_0[4] != 0xff &&
           (VAR_0[6] & 0x80) == 0 &&
           (VAR_0[7] & 0x80) == 0 &&
           (VAR_0[8] & 0x80) == 0 &&
           (VAR_0[9] & 0x80) == 0;
}
