
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int sha256_buf ;
typedef int XtExcFrame ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (char*,int) ;
 int * VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static void FUNC_6(XtExcFrame *VAR_2, int VAR_3)
{
    int *VAR_4 = (int *)VAR_2;
    int VAR_5, VAR_6;
    const char *VAR_7[] = {
        "PC      ", "PS      ", "A0      ", "A1      ", "A2      ", "A3      ", "A4      ", "A5      ",
        "A6      ", "A7      ", "A8      ", "A9      ", "A10     ", "A11     ", "A12     ", "A13     ",
        "A14     ", "A15     ", "SAR     ", "EXCCAUSE", "EXCVADDR", "LBEG    ", "LEND    ", "LCOUNT  "
    };




    if (!VAR_0) {
        FUNC_4("Core");
        FUNC_2(VAR_3);
        FUNC_4(" register dump:\r\n");

        for (VAR_5 = 0; VAR_5 < 24; VAR_5 += 4) {
            for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
                if (VAR_7[VAR_5 + VAR_6][0] != 0) {
                    FUNC_4(VAR_7[VAR_5 + VAR_6]);
                    FUNC_4(": 0x");
                    FUNC_3(VAR_4[VAR_5 + VAR_6 + 1]);
                    FUNC_4("  ");
                }
            }
            FUNC_4("\r\n");
        }

        if (FUNC_5()

            && VAR_1 != VAR_2

            ) {

            uint32_t VAR_8;
            FUNC_4("Core");
            FUNC_2(VAR_3);
            FUNC_4(" was running in ISR context:\r\n");

            __asm__("rsr.epc1 %0" : "=a"(VAR_8));
            FUNC_4("EPC1    : 0x");
            FUNC_3(VAR_8);

            __asm__("rsr.epc2 %0" : "=a"(VAR_8));
            FUNC_4("  EPC2    : 0x");
            FUNC_3(VAR_8);

            __asm__("rsr.epc3 %0" : "=a"(VAR_8));
            FUNC_4("  EPC3    : 0x");
            FUNC_3(VAR_8);

            __asm__("rsr.epc4 %0" : "=a"(VAR_8));
            FUNC_4("  EPC4    : 0x");
            FUNC_3(VAR_8);

            FUNC_4("\r\n");
        }

    }

    FUNC_4("\r\nELF file SHA256: ");
    char VAR_9[65];
    FUNC_1(VAR_9, sizeof(VAR_9));
    FUNC_4(VAR_9);
    FUNC_4("\r\n");


    FUNC_0(VAR_2, 100);

    FUNC_4("\r\n");
}
