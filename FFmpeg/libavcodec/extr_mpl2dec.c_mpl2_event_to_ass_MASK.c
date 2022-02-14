
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVBPrint ;


 int FUNC_0 (int *,char const,int) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (char*,char const) ;

__attribute__((used)) static int FUNC_3(AVBPrint *VAR_0, const char *VAR_1)
{
    if (*VAR_1 == ' ')
        VAR_1++;

    while (*VAR_1) {
        int VAR_2 = 0;

        while (*VAR_1 && FUNC_2("/\\_", *VAR_1)) {
            if (*VAR_1 == '/') FUNC_1(VAR_0, "{\\i1}");
            else if (*VAR_1 == '\\') FUNC_1(VAR_0, "{\\b1}");
            else if (*VAR_1 == '_') FUNC_1(VAR_0, "{\\u1}");
            VAR_2 = 1;
            VAR_1++;
        }

        while (*VAR_1 && *VAR_1 != '|') {
            if (*VAR_1 != '\r' && *VAR_1 != '\n')
                FUNC_0(VAR_0, *VAR_1, 1);
            VAR_1++;
        }

        if (*VAR_1 == '|') {
            if (VAR_2)
                FUNC_1(VAR_0, "{\\r}");
            FUNC_1(VAR_0, "\\N");
            VAR_1++;
        }
    }

    return 0;
}
