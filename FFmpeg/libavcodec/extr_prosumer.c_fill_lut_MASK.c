
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int*,int*) ;
 int* VAR_0 ;

__attribute__((used)) static void FUNC_3(uint32_t *VAR_1)
{
    for (int VAR_2 = 1; VAR_2 < FUNC_0(VAR_0); VAR_2 += 2) {
        uint32_t VAR_3 = VAR_0[VAR_2];
        uint32_t VAR_4 = FUNC_1(VAR_2>>1);
        uint32_t VAR_5, VAR_6;

        VAR_5 = (VAR_4 << 16) | VAR_0[VAR_2-1];
        VAR_6 = 4 * (3 - VAR_4);
        if (VAR_6 <= 0) {
            VAR_1[2 * VAR_3] = VAR_5;
            VAR_1[2 * VAR_3 + 1] = 0;
        } else {
            for (int VAR_7 = 0; VAR_7 < 1 << VAR_6; VAR_7++) {
                uint32_t VAR_8 = 0xFFFFFFFFu;
                VAR_5 &= 0xFFFFFFu;
                if ((VAR_5 & 0xFF00u) != 0x8000u)
                    FUNC_2(VAR_7, VAR_6, &VAR_5, &VAR_8);
                VAR_1[2 * VAR_3 + 2 * VAR_7] = VAR_5;
                VAR_1[2 * VAR_3 + 2 * VAR_7 + 1] = VAR_8;
            }
        }
    }

    for (int VAR_9 = 0; VAR_9 < 32; VAR_9 += 2) {
        VAR_1[VAR_9 ] = 0x68000;
        VAR_1[VAR_9+1] = 0;
    }
}
