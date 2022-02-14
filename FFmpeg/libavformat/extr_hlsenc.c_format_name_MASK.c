
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char**) ;
 char* FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 char* FUNC_5 (char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char**,char*,char,int) ;
 int FUNC_8 (char**,char*,char,char const*) ;
 int FUNC_9 (char const*,char*) ;

__attribute__((used)) static int FUNC_10(const char *VAR_4, char **VAR_5, int VAR_6, const char *VAR_7)
{
    const char *VAR_8, *VAR_9;
    char *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
    int VAR_12 = 0;

    VAR_10 = FUNC_3(VAR_4);
    if (!VAR_10) {
        VAR_12 = FUNC_0(VAR_2);
        goto fail;
    }

    if (!FUNC_4(VAR_4, "%v")) {
        *VAR_5 = VAR_10;
        return VAR_12;
    }

    if (!VAR_7) {
        if (FUNC_7(VAR_5, VAR_10, 'v', VAR_6) < 1) {
            VAR_12 = FUNC_0(VAR_1);
            goto fail;
        }
    } else {
        if (FUNC_8(VAR_5, VAR_10, 'v', VAR_7) < 1) {
            VAR_12 = FUNC_0(VAR_1);
            goto fail;
        }
    }

    VAR_8 = FUNC_5(VAR_10);
    VAR_9 = FUNC_1(VAR_10);


    if (FUNC_4(VAR_9, "%v") && VAR_8 && !FUNC_9(VAR_8, "file")) {
        VAR_11 = FUNC_3(*VAR_5);
        VAR_9 = FUNC_1(VAR_11);
        if (FUNC_6(VAR_9) == -1 && VAR_3 != VAR_0) {
            VAR_12 = FUNC_0(VAR_3);
            goto fail;
        }
    }

fail:
    FUNC_2(&VAR_10);
    FUNC_2(&VAR_11);
    return VAR_12;
}
