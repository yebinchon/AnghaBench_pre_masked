
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int int64_t ;


 int FUNC_0 (char const*,int) ;
 int FUNC_1 (char const*) ;

uint64_t FUNC_2(const char *VAR_0)
{
    const char *VAR_1, *VAR_2;
    const char *VAR_3 = VAR_0 + FUNC_1(VAR_0);
    int64_t VAR_4 = 0, VAR_5;

    for (VAR_1 = VAR_0; VAR_1 < VAR_3; VAR_1 = VAR_2 + 1) {
        for (VAR_2 = VAR_1; VAR_2 < VAR_3 && *VAR_2 != '+' && *VAR_2 != '|'; VAR_2++);
        VAR_5 = FUNC_0(VAR_1, VAR_2 - VAR_1);
        if (!VAR_5)
            return 0;
        VAR_4 |= VAR_5;
    }
    return VAR_4;
}
