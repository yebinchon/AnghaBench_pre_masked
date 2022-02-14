
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t FUNC_0 (char*,int ) ;

__attribute__((used)) static int
FUNC_1(char **VAR_1, char *VAR_2, char **VAR_3)
{
    size_t VAR_4;

    while (VAR_2[0] == ' ')
        VAR_2++;
    VAR_4 = FUNC_0(VAR_2, VAR_0);
    if (VAR_4 == 0)
        return -1;
    if (VAR_1)
        *VAR_1 = VAR_2;
    if (VAR_3)
        *VAR_3 = VAR_2 + VAR_4;
    return 0;
}
