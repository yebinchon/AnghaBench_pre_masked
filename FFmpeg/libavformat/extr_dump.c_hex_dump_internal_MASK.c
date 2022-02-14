
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int FILE ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, FILE *VAR_1, int VAR_2,
                              const uint8_t *VAR_3, int VAR_4)
{
    int VAR_5, VAR_6, VAR_7, VAR_8;

    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6 += 16) {
        VAR_5 = VAR_4 - VAR_6;
        if (VAR_5 > 16)
            VAR_5 = 16;
        FUNC_0("%08x ", VAR_6);
        for (VAR_7 = 0; VAR_7 < 16; VAR_7++) {
            if (VAR_7 < VAR_5)
                FUNC_0(" %02x", VAR_3[VAR_6 + VAR_7]);
            else
                FUNC_0("   ");
        }
        FUNC_0(" ");
        for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
            VAR_8 = VAR_3[VAR_6 + VAR_7];
            if (VAR_8 < ' ' || VAR_8 > '~')
                VAR_8 = '.';
            FUNC_0("%c", VAR_8);
        }
        FUNC_0("\n");
    }
}
