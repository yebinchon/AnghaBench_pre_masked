
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, const char *VAR_1)
{
    int VAR_2, VAR_3;
    if (!FUNC_0(VAR_0, "*"))
        return 1;

    if (VAR_0[0] == '*')
        VAR_0++;
    if (VAR_0[0] == '.')
        VAR_0++;
    VAR_2 = FUNC_1(VAR_0);
    VAR_3 = FUNC_1(VAR_1);
    if (VAR_2 > VAR_3)
        return 0;

    if (!FUNC_0(VAR_0, &VAR_1[VAR_3 - VAR_2])) {
        if (VAR_3 == VAR_2)
            return 1;
        if (VAR_1[VAR_3 - VAR_2 - 1] == '.')
            return 1;
    }
    return 0;
}
