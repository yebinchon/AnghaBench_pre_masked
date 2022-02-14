
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 char* FUNC_1 (char**,char*) ;

__attribute__((used)) static void
FUNC_2(char *VAR_0, const char **VAR_1, const char **VAR_2, const char **VAR_3)
{
    char *VAR_4[3] = { ((void*)0) };
    int VAR_5 = 0;
    int VAR_6 = 0;

    for (; VAR_5 < 3;) {
        char *VAR_7 = FUNC_1(&VAR_0, ", {}");
        if (VAR_7 == ((void*)0)) {
            break;
        }

        if (*VAR_7 == '\0') {
            continue;
        }

        VAR_4[VAR_5++] = VAR_7;
    }

    if ((VAR_5 > 0) && (!FUNC_0(VAR_4[0], "public") || !FUNC_0(VAR_4[0], "private"))) {
        if (VAR_1 != ((void*)0)) {
            (*VAR_1) = VAR_4[0];
        }

        VAR_6++;
    }

    if (VAR_6 < VAR_5 && (VAR_2 != ((void*)0)) && (VAR_3 != ((void*)0))) {
        char *VAR_8 = VAR_4[VAR_6];

        for (VAR_5 = 0; VAR_5 < 3; ) {
            char *VAR_9 = FUNC_1(&VAR_8, ": {}");
            if (VAR_9 == ((void*)0)) {
                break;
            }

            if (*VAR_9 == '\0') {
                continue;
            }

            VAR_4[VAR_5++] = VAR_9;
        }

        if (VAR_5 == 2) {
            (*VAR_2) = VAR_4[0];
            (*VAR_3) = VAR_4[1];
        }

        if (VAR_5 == 1) {
            (*VAR_2) = "builtin";
            (*VAR_3) = VAR_4[0];
        }
    }
}
