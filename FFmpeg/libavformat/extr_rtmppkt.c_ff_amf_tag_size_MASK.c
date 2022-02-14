
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int GetByteContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int const*,int) ;
 int FUNC_4 (int *) ;

int FUNC_5(const uint8_t *VAR_0, const uint8_t *VAR_1)
{
    GetByteContext VAR_2;
    int VAR_3;

    if (VAR_0 >= VAR_1)
        return -1;

    FUNC_3(&VAR_2, VAR_0, VAR_1 - VAR_0);

    VAR_3 = FUNC_0(&VAR_2);
    if (VAR_3 < 0 || FUNC_2(&VAR_2) <= 0)
        return -1;
    FUNC_1(FUNC_4(&VAR_2) >= 0 && FUNC_4(&VAR_2) <= VAR_1 - VAR_0);
    return FUNC_4(&VAR_2);
}
