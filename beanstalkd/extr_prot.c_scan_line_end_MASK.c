
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char,int) ;

__attribute__((used)) static size_t
FUNC_1(const char *VAR_0, int VAR_1)
{
    char *VAR_2;

    VAR_2 = FUNC_0(VAR_0, '\r', VAR_1 - 1);
    if (!VAR_2)
        return 0;


    if (VAR_2[1] == '\n')
        return VAR_2 - VAR_0 + 2;

    return 0;
}
