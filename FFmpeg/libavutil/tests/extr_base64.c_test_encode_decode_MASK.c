
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,unsigned int) ;
 int FUNC_1 (char*,int,int const*,unsigned int) ;
 scalar_t__ FUNC_2 (int *,int const*,unsigned int) ;
 int FUNC_3 (char*,...) ;
 char* FUNC_4 (char*,char) ;
 scalar_t__ FUNC_5 (char*,char const*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(const uint8_t *VAR_2, unsigned int VAR_3,
                              const char *VAR_4)
{
    char VAR_5[VAR_1];
    uint8_t VAR_6[VAR_0];
    int VAR_7, VAR_8 = VAR_0;

    if (!FUNC_1(VAR_5, VAR_1, VAR_2, VAR_3)) {
        FUNC_3("Failed: cannot encode the input data\n");
        return 1;
    }
    if (VAR_4 && FUNC_5(VAR_5, VAR_4)) {
        FUNC_3("Failed: encoded string differs from reference\n"
               "Encoded:\n%s\nReference:\n%s\n", VAR_5, VAR_4);
        return 1;
    }

    if ((VAR_7 = FUNC_0(VAR_6, VAR_5, VAR_8)) != VAR_3) {
        FUNC_3("Failed: cannot decode the encoded string\n"
               "Encoded:\n%s\n", VAR_5);
        return 1;
    }
    if ((VAR_7 = FUNC_0(VAR_6, VAR_5, VAR_3)) != VAR_3) {
        FUNC_3("Failed: cannot decode with minimal buffer\n"
               "Encoded:\n%s\n", VAR_5);
        return 1;
    }
    if (FUNC_2(VAR_6, VAR_2, VAR_3)) {
        FUNC_3("Failed: encoded/decoded data differs from original data\n");
        return 1;
    }
    if (FUNC_0(((void*)0), VAR_5, 0) != 0) {
        FUNC_3("Failed: decode to NULL buffer\n");
        return 1;
    }
    if (FUNC_6(VAR_5)) {
        char *VAR_9 = FUNC_4(VAR_5, '=');
        if (!VAR_9)
            VAR_9 = VAR_5 + FUNC_6(VAR_5) - 1;
        *VAR_9 = '%';
        if (FUNC_0(((void*)0), VAR_5, 0) >= 0) {
            FUNC_3("Failed: error detection\n");
            return 1;
        }
    }

    FUNC_3("Passed!\n");
    return 0;
}
