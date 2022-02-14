
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int **,int,int,int) ;
 int VAR_1 ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char**,int ) ;

int FUNC_7(int VAR_2, char *VAR_3[])
{
    FILE *VAR_4[2];
    int VAR_5 = 1;
    int VAR_6= VAR_2 < 5 ? 0 : FUNC_0(VAR_3[4]);
    int VAR_7 = VAR_2 < 6 ? 0 : FUNC_0(VAR_3[5]);
    int VAR_8 = VAR_6 + (VAR_2 < 7 ? 0 : FUNC_0(VAR_3[6]));
    int VAR_9;
    int VAR_10 = -1;
    int VAR_11 = 0;

    if (VAR_8 > VAR_6)
        VAR_6 -= VAR_8 - VAR_6;

    if (VAR_2 > 3) {
        if (!FUNC_5(VAR_3[3], "u8")) {
            VAR_5 = 1;
        } else if (!FUNC_5(VAR_3[3], "s16")) {
            VAR_5 = 2;
        } else if (!FUNC_5(VAR_3[3], "f32")) {
            VAR_5 = 4;
        } else if (!FUNC_5(VAR_3[3], "f64")) {
            VAR_5 = 8;
        } else {
            char *VAR_12;
            VAR_5 = FUNC_6(VAR_3[3], &VAR_12, 0);
            if (*VAR_12 || VAR_5 < 1 || VAR_5 > 2) {
                FUNC_2(VAR_1, "Unsupported sample format: %s\nSupported: u8, s16, f32, f64\n", VAR_3[3]);
                return 1;
            }
        }
    }

    if (VAR_2 < 3) {
        FUNC_3("tiny_psnr <file1> <file2> [<elem size>|u8|s16|f32|f64 [<shift> [<skip bytes> [<shift search range>]]]]\n");
        FUNC_3("WAV headers are skipped automatically.\n");
        return 1;
    }

    VAR_4[0] = FUNC_1(VAR_3[1], "rb");
    VAR_4[1] = FUNC_1(VAR_3[2], "rb");
    if (!VAR_4[0] || !VAR_4[1]) {
        FUNC_2(VAR_1, "Could not open input files.\n");
        return 1;
    }

    for (VAR_9 = VAR_6; VAR_9 <= VAR_8; VAR_9++) {
        int VAR_13 = FUNC_4(VAR_4, VAR_5, VAR_9, VAR_7);
        if (VAR_13 > VAR_10 || (VAR_9 < 0 && VAR_13 == VAR_10)) {
            VAR_10 = VAR_13;
            VAR_11 = VAR_9;
        }
    }
    if (VAR_10 < 0)
        return 2;

    if (VAR_8 > VAR_6)
        FUNC_3("Best PSNR is %3d.%02d for shift %i\n", (int)(VAR_10 / VAR_0), (int)(VAR_10 % VAR_0), VAR_11);
    return 0;
}
