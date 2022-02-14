
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int ,char*,char const*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

void FUNC_2(const void *VAR_1, size_t VAR_2, const char *VAR_3)
{

    FUNC_1(VAR_2 <= 128);
    const uint8_t *VAR_4 = (const uint8_t *)VAR_1;
    char VAR_5[VAR_2 * 2 + 1];
    VAR_5[VAR_2 * 2] = 0;
    for (int VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
        for (int VAR_7 = 0; VAR_7 < 2; VAR_7++) {
            uint8_t VAR_8 = (VAR_4[VAR_6] >> (VAR_7 ? 0 : 4)) & 0x0F;
            if (VAR_8 < 10) {
                VAR_5[VAR_6 * 2 + VAR_7] = '0' + VAR_8;
            } else {
                VAR_5[VAR_6 * 2 + VAR_7] = 'a' + VAR_8 - 10;
            }
        }
    }
    FUNC_0(VAR_0, "%s: %s", VAR_3, VAR_5);

}
