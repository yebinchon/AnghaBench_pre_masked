
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int const VAR_0 ;

int FUNC_0(const uint8_t *VAR_1)
{
    int VAR_2 = ((VAR_1[6] & 0x7f) << 21) +
              ((VAR_1[7] & 0x7f) << 14) +
              ((VAR_1[8] & 0x7f) << 7) +
              (VAR_1[9] & 0x7f) +
              VAR_0;
    if (VAR_1[5] & 0x10)
        VAR_2 += VAR_0;
    return VAR_2;
}
