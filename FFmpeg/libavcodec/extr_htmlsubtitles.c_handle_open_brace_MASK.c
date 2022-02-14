
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVBPrint ;


 int FUNC_0 (int *,char const,int) ;
 scalar_t__ FUNC_1 (char const*) ;
 char* FUNC_2 (char const*,char const) ;

__attribute__((used)) static void FUNC_3(AVBPrint *VAR_0, const char **VAR_1, int *VAR_2, int *VAR_3)
{
    const char *VAR_4 = *VAR_1;

    *VAR_2 += FUNC_1(VAR_4);

    if (!*VAR_3) {
        if ( (*VAR_2 != 1 && VAR_4[1] == '\\')
            || (VAR_4[1] && FUNC_2("CcFfoPSsYy", VAR_4[1]) && VAR_4[2] == ':')) {
            char *VAR_5 = FUNC_2(VAR_4+2, '}');
            if (VAR_5) {
                *VAR_1 = VAR_5;
                return;
            } else
                *VAR_3 = 1;
        }
    }

    FUNC_0(VAR_0, *VAR_4, 1);
}
