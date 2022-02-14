
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,int) ;

int FUNC_4(const char *VAR_0)
{
    int VAR_1 = 0;
    char *VAR_2 = FUNC_1(VAR_0);
    char *VAR_3 = VAR_2;
    char VAR_4 = '\0';

    if (!VAR_0 || !VAR_2) {
        return -1;
    }

    if (!FUNC_2(VAR_2, "/", 1) || !FUNC_2(VAR_2, "\\", 1)) {
        VAR_3++;
    } else if (!FUNC_2(VAR_2, "./", 2) || !FUNC_2(VAR_2, ".\\", 2)) {
        VAR_3 += 2;
    }

    for ( ; *VAR_3 != '\0'; ++VAR_3) {
        if (*VAR_3 == '/' || *VAR_3 == '\\') {
            VAR_4 = *VAR_3;
            *VAR_3 = '\0';
            VAR_1 = FUNC_3(VAR_2, 0755);
            *VAR_3 = VAR_4;
        }
    }

    if ((*(VAR_3 - 1) != '/') || (*(VAR_3 - 1) != '\\')) {
        VAR_1 = FUNC_3(VAR_2, 0755);
    }

    FUNC_0(VAR_2);
    return VAR_1;
}
