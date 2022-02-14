
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int FILE ;


 int FUNC_0 (int*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,char*,...) ;
 scalar_t__ FUNC_6 (char*,char*) ;

int FUNC_7(int VAR_2, char** VAR_3)
{
    FILE * VAR_4;
    uint8_t VAR_5[VAR_0];
    char VAR_6[VAR_1];
    size_t VAR_7;
    char VAR_8[VAR_1];
    char VAR_9[VAR_1];
    unsigned int VAR_10;
    int VAR_11;

    if (VAR_2 < 2) {
        return 1;
    }
    for (VAR_11 = 1; VAR_11 < VAR_2; VAR_11++) {

        VAR_4 = FUNC_3(VAR_3[VAR_11], "rb");
        if (VAR_4 == ((void*)0)) {
            return 2;
        }
        FUNC_4("Trying %s\n", VAR_3[VAR_11]);
        if (FUNC_2(VAR_6, VAR_1, VAR_4) == ((void*)0)) {
            break;
        }
        if (VAR_6[0] == '#') {
            if (FUNC_5(VAR_6, "# %[^,], %[^,]", VAR_8, VAR_9) != 2) {
                FUNC_4("Wrong mode %s\n", VAR_6);
                return 1;
            }
            if (FUNC_6(VAR_8, "CS_ARCH_X86") == 0 && FUNC_6(VAR_9, "CS_MODE_32") == 0) {
                VAR_5[0] = 0;
            } else if (FUNC_6(VAR_8, "CS_ARCH_X86") == 0 && FUNC_6(VAR_9, "CS_MODE_64") == 0) {
                VAR_5[0] = 1;
            } else if (FUNC_6(VAR_8, "CS_ARCH_ARM") == 0 && FUNC_6(VAR_9, "CS_MODE_ARM") == 0) {
                VAR_5[0] = 2;
            } else if (FUNC_6(VAR_8, "CS_ARCH_ARM") == 0 && FUNC_6(VAR_9, "CS_MODE_THUMB") == 0) {
                VAR_5[0] = 3;
            } else if (FUNC_6(VAR_8, "CS_ARCH_ARM") == 0 && FUNC_6(VAR_9, "CS_MODE_ARM+CS_MODE_V8") == 0) {
                VAR_5[0] = 4;
            } else if (FUNC_6(VAR_8, "CS_ARCH_ARM") == 0 && FUNC_6(VAR_9, "CS_MODE_THUMB+CS_MODE_V8") == 0) {
                VAR_5[0] = 5;
            } else if (FUNC_6(VAR_8, "CS_ARCH_ARM") == 0 && FUNC_6(VAR_9, "CS_MODE_THUMB+CS_MODE_MCLASS") == 0) {
                VAR_5[0] = 6;
            } else if (FUNC_6(VAR_8, "CS_ARCH_ARM64") == 0 && FUNC_6(VAR_9, "0") == 0) {
                VAR_5[0] = 7;
            } else if (FUNC_6(VAR_8, "CS_ARCH_MIPS") == 0 && FUNC_6(VAR_9, "CS_MODE_MIPS32+CS_MODE_BIG_ENDIAN") == 0) {
                VAR_5[0] = 8;
            } else if (FUNC_6(VAR_8, "CS_ARCH_MIPS") == 0 && FUNC_6(VAR_9, "CS_MODE_MIPS32+CS_MODE_MICRO") == 0) {
                VAR_5[0] = 9;
            } else if (FUNC_6(VAR_8, "CS_ARCH_MIPS") == 0 && FUNC_6(VAR_9, "CS_MODE_MIPS64") == 0) {
                VAR_5[0] = 10;
            } else if (FUNC_6(VAR_8, "CS_ARCH_MIPS") == 0 && FUNC_6(VAR_9, "CS_MODE_MIPS32") == 0) {
                VAR_5[0] = 11;
            } else if (FUNC_6(VAR_8, "CS_ARCH_MIPS") == 0 && FUNC_6(VAR_9, "CS_MODE_MIPS64+CS_MODE_BIG_ENDIAN") == 0) {
                VAR_5[0] = 12;
            } else if (FUNC_6(VAR_8, "CS_ARCH_MIPS") == 0 && FUNC_6(VAR_9, "CS_MODE_MIPS32+CS_MODE_MICRO+CS_MODE_BIG_ENDIAN") == 0) {
                VAR_5[0] = 13;
            } else if (FUNC_6(VAR_8, "CS_ARCH_MIPS") == 0 && FUNC_6(VAR_9, "CS_MODE_MIPS32+CS_MODE_BIG_ENDIAN+CS_MODE_MICRO") == 0) {
                VAR_5[0] = 13;
            } else if (FUNC_6(VAR_8, "CS_ARCH_PPC") == 0 && FUNC_6(VAR_9, "CS_MODE_BIG_ENDIAN") == 0) {
                VAR_5[0] = 14;
            } else if (FUNC_6(VAR_8, "CS_ARCH_SPARC") == 0 && FUNC_6(VAR_9, "CS_MODE_BIG_ENDIAN") == 0) {
                VAR_5[0] = 15;
            } else if (FUNC_6(VAR_8, "CS_ARCH_SPARC") == 0 && FUNC_6(VAR_9, "CS_MODE_BIG_ENDIAN + CS_MODE_V9") == 0) {
                VAR_5[0] = 16;
            } else if (FUNC_6(VAR_8, "CS_ARCH_SYSZ") == 0 && FUNC_6(VAR_9, "0") == 0) {
                VAR_5[0] = 17;
            } else if (FUNC_6(VAR_8, "CS_ARCH_XCORE") == 0 && FUNC_6(VAR_9, "0") == 0) {
                VAR_5[0] = 18;
            } else if (FUNC_6(VAR_8, "CS_ARCH_MIPS") == 0 && FUNC_6(VAR_9, "CS_MODE_MIPS32R6+CS_MODE_BIG_ENDIAN") == 0) {
                VAR_5[0] = 19;
            } else if (FUNC_6(VAR_8, "CS_ARCH_MIPS") == 0 && FUNC_6(VAR_9, "CS_MODE_MIPS32R6+CS_MODE_MICRO+CS_MODE_BIG_ENDIAN") == 0) {
                VAR_5[0] = 20;
            } else if (FUNC_6(VAR_8, "CS_ARCH_MIPS") == 0 && FUNC_6(VAR_9, "CS_MODE_MIPS32R6") == 0) {
                VAR_5[0] = 21;
            } else if (FUNC_6(VAR_8, "CS_ARCH_MIPS") == 0 && FUNC_6(VAR_9, "CS_MODE_MIPS32R6+CS_MODE_MICRO") == 0) {
                VAR_5[0] = 22;
            } else if (FUNC_6(VAR_8, "CS_ARCH_M68K") == 0 && FUNC_6(VAR_9, "0") == 0) {
                VAR_5[0] = 23;
            } else if (FUNC_6(VAR_8, "CS_ARCH_M680X") == 0 && FUNC_6(VAR_9, "CS_MODE_M680X_6809") == 0) {
                VAR_5[0] = 24;
            } else if (FUNC_6(VAR_8, "CS_ARCH_EVM") == 0 && FUNC_6(VAR_9, "0") == 0) {
                VAR_5[0] = 25;
            } else {
                FUNC_4("Unknown mode\n");

                return 1;
            }
        } else {
            FUNC_4("No mode\n");

            return 1;
        }

        while(1) {
            if (FUNC_2(VAR_6, VAR_1, VAR_4) == ((void*)0)) {
                break;
            }
            VAR_7 = 1;


            while (FUNC_5(VAR_6+(VAR_7-1)*5, "0x%02x", &VAR_10) == 1) {
                VAR_5[VAR_7] = VAR_10;
                VAR_7++;
                if (VAR_6[(VAR_7-1)*5-1] != ',') {

                    break;
                } else if (VAR_1 < (VAR_7-1)*5) {
                    FUNC_4("Line overflow\n");
                    return 1;
                }
            }

            FUNC_0(VAR_5, VAR_7);
        }
        FUNC_1(VAR_4);
    }
    return 0;
}
