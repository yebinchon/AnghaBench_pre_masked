
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int DWORD ;


 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,int*,int) ;

__attribute__((used)) static void FUNC_2(uint8_t *VAR_0, uint32_t *VAR_1, DWORD *VAR_2, uint32_t VAR_3)
{
    uint32_t VAR_4;
    int VAR_5 = 0;
    int VAR_6;
    uint32_t VAR_7;

    while ((VAR_7 = FUNC_0(VAR_2, VAR_3)) >= 1) {
        if (VAR_2[0] & 0x01) {
            VAR_4 = (VAR_2[0] & 0x03);


            if (VAR_4 == 1) {
                VAR_2[0] = VAR_2[0] & 0xFFFFFFFE;
            } else {
                VAR_2[0] = VAR_2[0] + 1;
                if (VAR_2[0] == 0) {
                    VAR_6 = 1;
                    do {
                        VAR_2[VAR_6]++;
                    } while (VAR_2[VAR_6++] == 0);
                }
            }
        } else {
            VAR_4 = 0;
        }

        FUNC_1(VAR_2, VAR_2, VAR_3);
        VAR_0[VAR_5 / 4] |= (VAR_4) << ((VAR_5 % 4) * 2);
        VAR_5++;
    }

    *VAR_1 = VAR_5;
}
