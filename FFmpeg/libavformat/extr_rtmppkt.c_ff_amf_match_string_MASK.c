
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const**) ;
 int FUNC_1 (int const**) ;
 int FUNC_2 (int const*,char const*,int) ;
 int FUNC_3 (char const*) ;

int FUNC_4(const uint8_t *VAR_2, int VAR_3, const char *VAR_4)
{
    int VAR_5 = FUNC_3(VAR_4);
    int VAR_6, VAR_7;

    if (VAR_3 < 1)
        return 0;

    VAR_7 = *VAR_2++;

    if (VAR_7 != VAR_0 &&
        VAR_7 != VAR_1)
        return 0;

    if (VAR_7 == VAR_0) {
        if ((VAR_3 -= 4 + 1) < 0)
            return 0;
        VAR_6 = FUNC_1(&VAR_2);
    } else {
        if ((VAR_3 -= 2 + 1) < 0)
            return 0;
        VAR_6 = FUNC_0(&VAR_2);
    }

    if (VAR_6 > VAR_3)
        return 0;

    if (VAR_6 != VAR_5)
        return 0;

    return !FUNC_2(VAR_2, VAR_4, VAR_5);
}
