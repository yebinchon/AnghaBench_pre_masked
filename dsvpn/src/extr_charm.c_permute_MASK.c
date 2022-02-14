
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int* VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int*,int,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(uint32_t VAR_2[12])
{
    uint32_t VAR_3[4], VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

    for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
        for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
            VAR_3[VAR_9] = FUNC_0(VAR_2[VAR_9] ^ VAR_2[VAR_9 + 4] ^ VAR_2[VAR_9 + 8], 18);
            VAR_3[VAR_9] ^= FUNC_0(VAR_3[VAR_9], 9);
        }
        for (VAR_9 = 0; VAR_9 < 12; VAR_9++) {
            VAR_2[VAR_9] ^= VAR_3[(VAR_9 - 1) & 3];
        }
        FUNC_1(VAR_2, 7, 4);
        FUNC_1(VAR_2, 7, 5);
        FUNC_1(VAR_2, 7, 6);
        VAR_2[0] ^= VAR_0[VAR_8];
        for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
            VAR_4 = VAR_2[VAR_9];
            VAR_5 = VAR_2[VAR_9 + 4];
            VAR_6 = FUNC_0(VAR_2[VAR_9 + 8], 21);
            VAR_2[VAR_9 + 8] = FUNC_0((VAR_5 & ~VAR_4) ^ VAR_6, 24);
            VAR_2[VAR_9 + 4] = FUNC_0((VAR_4 & ~VAR_6) ^ VAR_5, 31);
            VAR_2[VAR_9] ^= VAR_6 & ~VAR_5;
        }
        FUNC_1(VAR_2, 8, 10);
        FUNC_1(VAR_2, 9, 11);
    }
}
