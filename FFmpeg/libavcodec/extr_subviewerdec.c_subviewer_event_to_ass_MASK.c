
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVBPrint ;


 int FUNC_0 (int *,char const,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_3(AVBPrint *VAR_0, const char *VAR_1)
{
    while (*VAR_1) {
        if (!FUNC_2(VAR_1, "[br]", 4)) {
            FUNC_1(VAR_0, "\\N");
            VAR_1 += 4;
        } else {
            if (VAR_1[0] == '\n' && VAR_1[1])
                FUNC_1(VAR_0, "\\N");
            else if (*VAR_1 != '\n' && *VAR_1 != '\r')
                FUNC_0(VAR_0, *VAR_1, 1);
            VAR_1++;
        }
    }

    return 0;
}
