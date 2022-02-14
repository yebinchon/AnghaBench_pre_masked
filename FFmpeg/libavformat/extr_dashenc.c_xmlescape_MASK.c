
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static char *FUNC_4(const char *VAR_0) {
    int VAR_1 = FUNC_3(VAR_0)*3/2 + 6;
    char *VAR_2 = FUNC_1(((void*)0), VAR_1 + 1);
    int VAR_3 = 0;
    if (!VAR_2)
        return ((void*)0);
    for (; *VAR_0; VAR_0++) {
        if (VAR_3 + 6 > VAR_1) {
            char *VAR_4;
            VAR_1 = 2 * VAR_1 + 6;
            VAR_4 = FUNC_1(VAR_2, VAR_1 + 1);
            if (!VAR_4) {
                FUNC_0(VAR_2);
                return ((void*)0);
            }
            VAR_2 = VAR_4;
        }
        if (*VAR_0 == '&') {
            FUNC_2(&VAR_2[VAR_3], "&amp;", 5);
            VAR_3 += 5;
        } else if (*VAR_0 == '<') {
            FUNC_2(&VAR_2[VAR_3], "&lt;", 4);
            VAR_3 += 4;
        } else if (*VAR_0 == '>') {
            FUNC_2(&VAR_2[VAR_3], "&gt;", 4);
            VAR_3 += 4;
        } else if (*VAR_0 == '\'') {
            FUNC_2(&VAR_2[VAR_3], "&apos;", 6);
            VAR_3 += 6;
        } else if (*VAR_0 == '\"') {
            FUNC_2(&VAR_2[VAR_3], "&quot;", 6);
            VAR_3 += 6;
        } else {
            VAR_2[VAR_3++] = *VAR_0;
        }
    }
    VAR_2[VAR_3] = '\0';
    return VAR_2;
}
