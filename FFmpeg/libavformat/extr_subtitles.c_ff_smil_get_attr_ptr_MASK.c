
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char const*,char const*,size_t const) ;
 size_t FUNC_2 (char const*) ;

const char *FUNC_3(const char *VAR_0, const char *VAR_1)
{
    int VAR_2 = 0;
    const size_t VAR_3 = FUNC_2(VAR_1);

    while (*VAR_0) {
        while (*VAR_0) {
            if (!VAR_2 && FUNC_0(*VAR_0))
                break;
            VAR_2 ^= *VAR_0 == '"';
            VAR_0++;
        }
        while (FUNC_0(*VAR_0))
            VAR_0++;
        if (!FUNC_1(VAR_0, VAR_1, VAR_3) && VAR_0[VAR_3] == '=')
            return VAR_0 + VAR_3 + 1 + (VAR_0[VAR_3 + 1] == '"');
    }
    return ((void*)0);
}
