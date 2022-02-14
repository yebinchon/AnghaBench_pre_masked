
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OptionDef ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,char*) ;
 int FUNC_4 (char,scalar_t__) ;
 char* FUNC_5 (char*) ;
 int VAR_0 ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int,char**,int const*,char*) ;
 int FUNC_8 (int *,char*,char*) ;
 scalar_t__ VAR_1 ;

void FUNC_9(int VAR_2, char **VAR_3, const OptionDef *VAR_4)
{
    int VAR_5 = FUNC_7(VAR_2, VAR_3, VAR_4, "loglevel");
    const char *VAR_6;

    FUNC_0(VAR_4);

    if (!VAR_5)
        VAR_5 = FUNC_7(VAR_2, VAR_3, VAR_4, "v");
    if (VAR_5 && VAR_3[VAR_5 + 1])
        FUNC_8(((void*)0), "loglevel", VAR_3[VAR_5 + 1]);
    VAR_5 = FUNC_7(VAR_2, VAR_3, VAR_4, "report");
    if ((VAR_6 = FUNC_5("FFREPORT")) || VAR_5) {
        FUNC_6(VAR_6);
        if (VAR_1) {
            int VAR_7;
            FUNC_3(VAR_1, "Command line:\n");
            for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
                FUNC_1(VAR_3[VAR_7]);
                FUNC_4(VAR_7 < VAR_2 - 1 ? ' ' : '\n', VAR_1);
            }
            FUNC_2(VAR_1);
        }
    }
    VAR_5 = FUNC_7(VAR_2, VAR_3, VAR_4, "hide_banner");
    if (VAR_5)
        VAR_0 = 1;
}
