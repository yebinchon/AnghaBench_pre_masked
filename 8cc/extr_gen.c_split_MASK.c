
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** FUNC_0 (int) ;

__attribute__((used)) static char **FUNC_1(char *VAR_0) {
    char *VAR_1 = VAR_0;
    int VAR_2 = 1;
    while (*VAR_1) {
        if (VAR_1[0] == '\r' && VAR_1[1] == '\n') {
            VAR_2++;
            VAR_1 += 2;
            continue;
        }
        if (VAR_1[0] == '\r' || VAR_1[0] == '\n')
            VAR_2++;
        VAR_1++;
    }
    VAR_1 = VAR_0;
    char **VAR_3 = FUNC_0(sizeof(char *) * VAR_2 + 1);
    int VAR_4 = 0;
    while (*VAR_1) {
        if (VAR_1[0] == '\r' && VAR_1[1] == '\n') {
            VAR_1[0] = '\0';
            VAR_1 += 2;
            VAR_3[VAR_4++] = VAR_1;
            continue;
        }
        if (VAR_1[0] == '\r' || VAR_1[0] == '\n') {
            VAR_1[0] = '\0';
            VAR_3[VAR_4++] = VAR_1 + 1;
        }
        VAR_1++;
    }
    VAR_3[VAR_4] = ((void*)0);
    return VAR_3;
}
