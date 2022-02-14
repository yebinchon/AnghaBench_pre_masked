
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;
 char* FUNC_2 (char*) ;

__attribute__((used)) static char *FUNC_3(char *VAR_1) {
    FUNC_0(*VAR_1 == '/');
    char VAR_2[VAR_0];
    char *VAR_3 = VAR_2;
    *VAR_3++ = '/';
    for (;;) {
        if (*VAR_1 == '/') {
            VAR_1++;
            continue;
        }
        if (!FUNC_1("./", VAR_1, 2)) {
            VAR_1 += 2;
            continue;
        }
        if (!FUNC_1("../", VAR_1, 3)) {
            VAR_1 += 3;
            if (VAR_3 == VAR_2 + 1)
                continue;
            for (VAR_3--; VAR_3[-1] != '/'; VAR_3--);
            continue;
        }
        while (*VAR_1 != '/' && *VAR_1 != '\0')
            *VAR_3++ = *VAR_1++;
        if (*VAR_1 == '/') {
            *VAR_3++ = *VAR_1++;
            continue;
        }
        *VAR_3 = '\0';
        return FUNC_2(VAR_2);
    }
}
