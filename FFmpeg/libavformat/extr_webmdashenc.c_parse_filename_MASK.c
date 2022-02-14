
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (char*,char*) ;
 int FUNC_2 (char**) ;
 char* FUNC_3 (int) ;
 char* FUNC_4 (char*) ;
 char* FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*,int) ;

__attribute__((used)) static int FUNC_7(char *VAR_2, char **VAR_3,
                          char **VAR_4, char **VAR_5) {
    char *VAR_6 = ((void*)0);
    char *VAR_7 = ((void*)0);
    char *VAR_8 = ((void*)0);
    char *VAR_9 = FUNC_4(VAR_2);
    int VAR_10 = 0;

    if (!VAR_9) {
        VAR_10 = FUNC_0(VAR_1);
        goto end;
    }
    VAR_8 = FUNC_5(VAR_9, "_");
    while (VAR_8) {
        VAR_6 = VAR_8 + 1;
        VAR_8 = FUNC_5(VAR_8 + 1, "_");
    }
    if (!VAR_6) {
        VAR_10 = VAR_0;
        goto end;
    }
    VAR_7 = FUNC_5(VAR_6, ".");
    if (!VAR_7) {
        VAR_10 = VAR_0;
        goto end;
    }
    *(VAR_6 - 1) = 0;
    if (VAR_3) {
        *VAR_3 = FUNC_3(VAR_7 - VAR_6 + 1);
        if (!(*VAR_3)) {
            VAR_10 = FUNC_0(VAR_1);
            goto end;
        }
        FUNC_6(*VAR_3, VAR_6, VAR_7 - VAR_6 + 1);
    }
    if (VAR_4) {
        *VAR_4 = FUNC_1("%s_$RepresentationID$.hdr",
                                              VAR_9);
        if (!(*VAR_4)) {
            VAR_10 = FUNC_0(VAR_1);
            goto end;
        }
    }
    if (VAR_5) {
        *VAR_5 = FUNC_1("%s_$RepresentationID$_$Number$.chk",
                                     VAR_9);
        if (!(*VAR_5)) {
            VAR_10 = FUNC_0(VAR_1);
            goto end;
        }
    }

end:
    FUNC_2(&VAR_9);
    return VAR_10;
}
