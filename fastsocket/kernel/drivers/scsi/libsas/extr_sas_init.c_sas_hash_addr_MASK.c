
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



void FUNC_0(u8 *VAR_0, const u8 *VAR_1)
{
        const u32 VAR_2 = 0x00DB2777;
        u32 VAR_3 = 0;
        int VAR_4;

        for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
                int VAR_5;
                for (VAR_5 = 7; VAR_5 >= 0; VAR_5--) {
                        VAR_3 <<= 1;
                        if ((1 << VAR_5) & VAR_1[VAR_4]) {
                                if (!(VAR_3 & 0x01000000))
                                        VAR_3 ^= VAR_2;
                        } else if (VAR_3 & 0x01000000)
                                VAR_3 ^= VAR_2;
                }
        }

        VAR_0[0] = (VAR_3 >> 16) & 0xFF;
        VAR_0[1] = (VAR_3 >> 8) & 0xFF ;
        VAR_0[2] = VAR_3 & 0xFF;
}
