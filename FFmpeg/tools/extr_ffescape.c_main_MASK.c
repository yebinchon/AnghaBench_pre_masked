
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVEscapeMode { ____Placeholder_AVEscapeMode } AVEscapeMode ;
typedef int FILE ;
typedef int AVBPrint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 long VAR_8 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,char**) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char**,char*,char*,int,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,int ,char*,...) ;
 int VAR_9 ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char const*,char*) ;
 int FUNC_9 (int *,char*,char const*,...) ;
 int FUNC_10 (int,char**,char*) ;
 char const* VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int FUNC_11 (char const*,char*) ;
 int FUNC_12 (int ) ;
 long FUNC_13 (char const*,char**,int) ;
 int FUNC_14 () ;

int FUNC_15(int VAR_13, char **VAR_14)
{
    AVBPrint VAR_15;
    char *VAR_16, *VAR_17;
    const char *VAR_18 = ((void*)0), *VAR_19 = ((void*)0);
    FILE *VAR_20 = ((void*)0), *VAR_21 = ((void*)0);
    const char *VAR_22 = "=> ";
    enum AVEscapeMode VAR_23 = VAR_3;
    int VAR_24 = 0;
    int VAR_25 = 1;
    int VAR_26 = 0;
    char *VAR_27 = ((void*)0);
    int VAR_28;

    while ((VAR_28 = FUNC_10(VAR_13, VAR_14, "ef:hi:l:o:m:p:s:")) != -1) {
        switch (VAR_28) {
        case 'e':
            VAR_26 = 1;
            break;
        case 'h':
            FUNC_14();
            return 0;
        case 'i':
            VAR_19 = VAR_10;
            break;
        case 'f':
            if (!FUNC_11(VAR_10, "whitespace")) VAR_24 |= VAR_2;
            else if (!FUNC_11(VAR_10, "strict")) VAR_24 |= VAR_1;
            else {
                FUNC_6(((void*)0), VAR_6,
                       "Invalid value '%s' for option -f, "
                       "valid arguments are 'whitespace', and 'strict'\n", VAR_10);
                return 1;
            }
            break;
        case 'l':
        {
            char *VAR_29;
            long int VAR_30 = FUNC_13(VAR_10, &VAR_29, 10);
            if (*VAR_29 || VAR_30 > VAR_8 || VAR_30 < 0) {
                FUNC_6(((void*)0), VAR_6,
                        "Invalid value '%s' for option -l, argument must be a non negative integer\n",
                        VAR_10);
                return 1;
            }
            VAR_25 = VAR_30;
            break;
        }
        case 'm':
            if (!FUNC_11(VAR_10, "auto")) VAR_23 = VAR_3;
            else if (!FUNC_11(VAR_10, "backslash")) VAR_23 = VAR_4;
            else if (!FUNC_11(VAR_10, "quote")) VAR_23 = VAR_5;
            else {
                FUNC_6(((void*)0), VAR_6,
                       "Invalid value '%s' for option -m, "
                       "valid arguments are 'backslash', and 'quote'\n", VAR_10);
                return 1;
            }
            break;
        case 'o':
            VAR_18 = VAR_10;
            break;
        case 'p':
            VAR_22 = VAR_10;
            break;
        case 's':
            VAR_27 = VAR_10;
            break;
        case '?':
            return 1;
        }
    }

    if (!VAR_19 || !FUNC_11(VAR_19, "-")) {
        VAR_19 = "stdin";
        VAR_21 = VAR_11;
    } else {
        VAR_21 = FUNC_8(VAR_19, "r");
    }
    if (!VAR_21) {
        FUNC_6(((void*)0), VAR_6, "Impossible to open input file '%s': %s\n", VAR_19, FUNC_12(VAR_9));
        return 1;
    }

    if (!VAR_18 || !FUNC_11(VAR_18, "-")) {
        VAR_18 = "stdout";
        VAR_20 = VAR_12;
    } else {
        VAR_20 = FUNC_8(VAR_18, "w");
    }
    if (!VAR_20) {
        FUNC_6(((void*)0), VAR_6, "Impossible to open output file '%s': %s\n", VAR_18, FUNC_12(VAR_9));
        return 1;
    }


    FUNC_2(&VAR_15, 1, VAR_0);
    while ((VAR_28 = FUNC_7(VAR_21)) != VAR_7)
        FUNC_0(&VAR_15, VAR_28, 1);
    FUNC_0(&VAR_15, 0, 1);

    if (!FUNC_3(&VAR_15)) {
        FUNC_6(((void*)0), VAR_6, "Could not allocate a buffer for the source string\n");
        FUNC_1(&VAR_15, ((void*)0));
        return 1;
    }
    FUNC_1(&VAR_15, &VAR_16);

    if (VAR_26)
        FUNC_9(VAR_20, "%s", VAR_16);


    VAR_17 = VAR_16;
    while (VAR_25--) {
        if (FUNC_4(&VAR_17, VAR_16, VAR_27, VAR_23, VAR_24) < 0) {
            FUNC_6(((void*)0), VAR_6, "Could not escape string\n");
            return 1;
        }
        FUNC_5(VAR_16);
        VAR_16 = VAR_17;
    }

    FUNC_9(VAR_20, "%s%s", VAR_22, VAR_17);
    FUNC_5(VAR_17);
    return 0;
}
