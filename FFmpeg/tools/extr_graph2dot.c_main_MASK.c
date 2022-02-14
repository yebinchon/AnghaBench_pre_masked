
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line {int data; struct line* next; } ;
typedef int int64_t ;
typedef int FILE ;
typedef int AVFilterGraph ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int * FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,char*,int *,int *,int *) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int,int *) ;
 int * FUNC_7 (char const*,char*) ;
 int FUNC_8 (int ,char*,...) ;
 char FUNC_9 (int,char**,char*) ;
 int FUNC_10 (char*,int ,size_t) ;
 char* VAR_2 ;
 int FUNC_11 (int *,int *) ;
 int VAR_3 ;
 int FUNC_12 (char const*,char*) ;
 char* FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 () ;

int FUNC_16(int VAR_4, char **VAR_5)
{
    const char *VAR_6 = ((void*)0);
    const char *VAR_7 = ((void*)0);
    FILE *VAR_8 = ((void*)0);
    FILE *VAR_9 = ((void*)0);
    char *VAR_10 = ((void*)0);
    AVFilterGraph *VAR_11 = FUNC_2(sizeof(AVFilterGraph));
    char VAR_12;

    FUNC_0(VAR_0);

    while ((VAR_12 = FUNC_9(VAR_4, VAR_5, "hi:o:")) != -1) {
        switch (VAR_12) {
        case 'h':
            FUNC_15();
            return 0;
        case 'i':
            VAR_7 = VAR_2;
            break;
        case 'o':
            VAR_6 = VAR_2;
            break;
        case '?':
            return 1;
        }
    }

    if (!VAR_7 || !FUNC_12(VAR_7, "-"))
        VAR_7 = "/dev/stdin";
    VAR_9 = FUNC_7(VAR_7, "r");
    if (!VAR_9) {
        FUNC_8(VAR_3, "Failed to open input file '%s': %s\n",
                VAR_7, FUNC_13(VAR_1));
        return 1;
    }

    if (!VAR_6 || !FUNC_12(VAR_6, "-"))
        VAR_6 = "/dev/stdout";
    VAR_8 = FUNC_7(VAR_6, "w");
    if (!VAR_8) {
        FUNC_8(VAR_3, "Failed to open output file '%s': %s\n",
                VAR_6, FUNC_13(VAR_1));
        return 1;
    }


    {
        int64_t VAR_13 = 0;
        struct line *VAR_14, *VAR_15, *VAR_16;
        char *VAR_17;
        VAR_15 = VAR_16 = FUNC_1(sizeof(struct line));
        if (!VAR_15) {
            FUNC_8(VAR_3, "Memory allocation failure\n");
            return 1;
        }

        while (FUNC_6(VAR_15->data, sizeof(VAR_15->data), VAR_9)) {
            struct line *VAR_18 = FUNC_1(sizeof(struct line));
            if (!VAR_18) {
                FUNC_8(VAR_3, "Memory allocation failure\n");
                return 1;
            }
            VAR_13 += FUNC_14(VAR_15->data);
            VAR_15->next = VAR_18;
            VAR_15 = VAR_18;
        }
        VAR_15->next = ((void*)0);

        VAR_10 = FUNC_1(VAR_13 + 1);
        if (!VAR_10) {
            FUNC_8(VAR_3, "Memory allocation failure\n");
            return 1;
        }
        VAR_17 = VAR_10;
        for (VAR_14 = VAR_16; VAR_14->next; VAR_14 = VAR_14->next) {
            size_t VAR_19 = FUNC_14(VAR_14->data);
            FUNC_10(VAR_17, VAR_14->data, VAR_19);
            VAR_17 += VAR_19;
        }
        *VAR_17 = '\0';
    }

    if (FUNC_4(VAR_11, VAR_10, ((void*)0), ((void*)0), ((void*)0)) < 0) {
        FUNC_8(VAR_3, "Failed to parse the graph description\n");
        return 1;
    }

    if (FUNC_3(VAR_11, ((void*)0)) < 0)
        return 1;

    FUNC_11(VAR_8, VAR_11);
    FUNC_5(VAR_8);

    return 0;
}
