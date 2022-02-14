
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned short* VAR_0 ;

unsigned short FUNC_0(const char* VAR_1, int VAR_2)
{
    unsigned short VAR_3 = 0;
    for (int VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        VAR_3 = (VAR_3 << 8) ^ VAR_0[((VAR_3 >> 8) ^ VAR_1[VAR_4]) & 0x00FF];
    }
    return VAR_3;
}
