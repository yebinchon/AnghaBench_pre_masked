
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*,char const) ;
 int FUNC_1 (char const*,int ) ;

__attribute__((used)) static void FUNC_2(char *VAR_1, int VAR_2,
                                 const char *VAR_3, const char **VAR_4)
{
    const char *VAR_5;
    char *VAR_6;

    VAR_5 = *VAR_4;
    VAR_5 += FUNC_1(VAR_5, VAR_0);
    VAR_6 = VAR_1;
    while (!FUNC_0(VAR_3, *VAR_5) && *VAR_5 != '\0') {
        if ((VAR_6 - VAR_1) < VAR_2 - 1)
            *VAR_6++ = *VAR_5;
        VAR_5++;
    }
    if (VAR_2 > 0)
        *VAR_6 = '\0';
    *VAR_4 = VAR_5;
}
