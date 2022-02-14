
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(const char **VAR_0,
                        int VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, VAR_6;
    const char *VAR_7;

    VAR_7 = *VAR_0;
    VAR_5 = 0;
    for(VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        VAR_6 = *VAR_7;
        if (!FUNC_0(VAR_6))
            break;
        VAR_5 = (VAR_5 * 10) + VAR_6 - '0';
        VAR_7++;
    }

    if (VAR_7 == *VAR_0)
        return -1;
    if (VAR_5 < VAR_1 || VAR_5 > VAR_2)
        return -1;
    *VAR_0 = VAR_7;
    return VAR_5;
}
