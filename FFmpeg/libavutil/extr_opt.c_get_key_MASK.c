
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char const) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char const*,char const) ;
 int FUNC_5 (char const*,int ) ;

__attribute__((used)) static int FUNC_6(const char **VAR_3, const char *VAR_4, char **VAR_5)
{
    const char *VAR_6 = *VAR_3;
    const char *VAR_7, *VAR_8;

    VAR_7 = VAR_6 += FUNC_5(VAR_6, VAR_2);
    while (FUNC_2(*VAR_6))
        VAR_6++;
    VAR_8 = VAR_6;
    VAR_6 += FUNC_5(VAR_6, VAR_2);
    if (!*VAR_6 || !FUNC_4(VAR_4, *VAR_6))
        return FUNC_0(VAR_0);
    VAR_6++;
    if (!(*VAR_5 = FUNC_1(VAR_8 - VAR_7 + 1)))
        return FUNC_0(VAR_1);
    FUNC_3(*VAR_5, VAR_7, VAR_8 - VAR_7);
    (*VAR_5)[VAR_8 - VAR_7] = 0;
    *VAR_3 = VAR_6;
    return 0;
}
