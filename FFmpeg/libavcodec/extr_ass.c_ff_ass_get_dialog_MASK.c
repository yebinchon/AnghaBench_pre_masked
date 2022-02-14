
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,int,int,char const*,char const*,char const*) ;

char *FUNC_1(int VAR_0, int VAR_1, const char *VAR_2,
                        const char *VAR_3, const char *VAR_4)
{
    return FUNC_0("%d,%d,%s,%s,0,0,0,,%s",
                       VAR_0, VAR_1, VAR_2 ? VAR_2 : "Default",
                       VAR_3 ? VAR_3 : "", VAR_4);
}
