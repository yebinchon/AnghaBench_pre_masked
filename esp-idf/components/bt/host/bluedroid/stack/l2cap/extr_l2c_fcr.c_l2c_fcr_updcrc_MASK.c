
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned short* VAR_0 ;

__attribute__((used)) static unsigned short FUNC_0(unsigned short VAR_1, unsigned char *VAR_2, int VAR_3)
{
    register unsigned short VAR_4 = VAR_1;
    register unsigned char *VAR_5 = VAR_2;
    register int VAR_6 = VAR_3;

    while (VAR_6--) {
        VAR_4 = ((VAR_4 >> 8) & 0xff) ^ VAR_0[(VAR_4 & 0xff) ^ *VAR_5++];
    }

    return (VAR_4);
}
