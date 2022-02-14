
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char const*,unsigned long*,unsigned long*) ;
 char* FUNC_1 (char*,int const) ;
 int FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (char*,char*,int const) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char const*,char*) ;
 int FUNC_6 (int ,char*,...) ;
 int const FUNC_7 (char*,int,int const,int *) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int *,unsigned long,int ) ;
 int FUNC_10 (char const*,int ) ;
 int FUNC_11 (char*,...) ;
 int VAR_2 ;

int FUNC_12(int VAR_3, char* VAR_4[]) {
    if (VAR_3 != 2) {
        FUNC_11("Usage: %s <my.AppImage>\n", VAR_4[0]);
        FUNC_11("\n");
        FUNC_11("Calculate AppImage MD5 digest, and compare it to embedded value (if available)\n");
    }

    const char* VAR_5 = VAR_4[1];
    if (!FUNC_10(VAR_5, VAR_0)) {
        FUNC_6(VAR_2, "No such file or directory: %s\n", VAR_5);
        return 1;
    }

    static const int VAR_6 = 16;


    char VAR_7[VAR_6];

    if (!FUNC_2(VAR_5, VAR_7)) {
        FUNC_6(VAR_2, "Could not calculate MD5 digest\n");
        return 1;
    }


    char* VAR_8 = FUNC_1(VAR_7, VAR_6);
    FUNC_11("calculated: %s\n", VAR_8);
    FUNC_8(VAR_8);

    unsigned long VAR_9 = 0, VAR_10 = 0;

    static const char VAR_11[] = ".digest_md5";

    if (!FUNC_0(VAR_5, VAR_11, &VAR_9, &VAR_10) || VAR_9 == 0 || VAR_10 == 0) {
        FUNC_6(VAR_2, "Could not find %s section in file\n", VAR_11);
        return 1;
    }

    if (VAR_10 < VAR_6) {
        FUNC_6(VAR_2,
            "Invalid section length for section %s: expected %d bytes, found %lu bytes\n",
            VAR_11, VAR_6, VAR_10
        );
        return 1;
    }

    char VAR_12[VAR_6];
    FILE* VAR_13 = FUNC_5(VAR_5, "r");

    if (VAR_13 == ((void*)0)) {
        FUNC_6(VAR_2, "Failed to open AppImage for writing");
        return 1;
    }

    if (FUNC_9(VAR_13, VAR_9, VAR_1) != 0) {
        FUNC_6(VAR_2, "Failed to read embedded digest: failed to seek to offset\n");
        FUNC_4(VAR_13);
        return 1;
    }

    if (FUNC_7(VAR_12, sizeof(char), VAR_6, VAR_13) != VAR_6) {
        FUNC_6(VAR_2, "Failed to read embedded digest: read invalid amount of bytes from file\n");
        FUNC_4(VAR_13);
        return 1;
    }

    FUNC_4(VAR_13);

    char* VAR_14 = FUNC_1(VAR_12, VAR_6);
    FUNC_11("  embedded: %s\n", VAR_14);
    FUNC_8(VAR_14);

    if (FUNC_3(VAR_7, VAR_12, VAR_6)) {
        FUNC_11("Digests match\n");
        return 0;
    } else {
        FUNC_11("Digests don't match!");
        return 1;
    }
}
