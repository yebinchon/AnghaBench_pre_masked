
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;

int FUNC_1(const char *VAR_0, const char *VAR_1)
{
    int VAR_2;
    int VAR_3 = FUNC_0(VAR_0);
    int VAR_4 = FUNC_0(VAR_1);

    if (VAR_4 > VAR_3) {
        return -1;
    }
    for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++) {
        if (VAR_0[VAR_2] != VAR_1[VAR_2]) {
            return 1;
        }
    }
    return 0;
}
