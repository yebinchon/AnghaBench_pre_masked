
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uintmax_t ;
typedef scalar_t__ uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char**,int) ;

__attribute__((used)) static int
FUNC_1(uint32 *VAR_2, const char *VAR_3, char **VAR_4)
{
    uintmax_t VAR_5;
    char *VAR_6;

    VAR_1 = 0;
    while (VAR_3[0] == ' ')
        VAR_3++;
    if (VAR_3[0] < '0' || '9' < VAR_3[0])
        return -1;
    VAR_5 = FUNC_0(VAR_3, &VAR_6, 10);
    if (VAR_6 == VAR_3)
        return -1;
    if (VAR_1)
        return -1;
    if (!VAR_4 && VAR_6[0] != '\0')
        return -1;
    if (VAR_5 > VAR_0)
        return -1;

    if (VAR_2) *VAR_2 = (uint32)VAR_5;
    if (VAR_4) *VAR_4 = VAR_6;
    return 0;
}
