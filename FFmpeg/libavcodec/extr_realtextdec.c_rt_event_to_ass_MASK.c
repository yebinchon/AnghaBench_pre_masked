
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVBPrint ;


 int FUNC_0 (int *,char const,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char const) ;
 int FUNC_3 (char const*,char*,int) ;
 char* FUNC_4 (char const*,char) ;

__attribute__((used)) static int FUNC_5(AVBPrint *VAR_0, const char *VAR_1)
{
    int VAR_2 = 1;

    while (*VAR_1) {
        if (*VAR_1 != '<') {
            if (!FUNC_2(*VAR_1))
                FUNC_0(VAR_0, *VAR_1, 1);
            else if (!VAR_2)
                FUNC_0(VAR_0, ' ', 1);
            VAR_2 = FUNC_2(*VAR_1);
        } else {
            const char *VAR_3 = FUNC_4(VAR_1, '>');
            if (!VAR_3)
                break;
            if (!FUNC_3(VAR_1, "<br/>", 5) ||
                !FUNC_3(VAR_1, "<br>", 4)) {
                FUNC_1(VAR_0, "\\N");
            }
            VAR_1 = VAR_3;
        }
        VAR_1++;
    }
    return 0;
}
