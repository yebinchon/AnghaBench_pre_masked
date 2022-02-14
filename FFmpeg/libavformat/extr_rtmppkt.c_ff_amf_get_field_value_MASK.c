
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int GetByteContext ;


 int FUNC_0 (int *,int const*,int *,int) ;
 int FUNC_1 (int *,int const*,int) ;

int FUNC_2(const uint8_t *VAR_0, const uint8_t *VAR_1,
                           const uint8_t *VAR_2, uint8_t *VAR_3, int VAR_4)
{
    GetByteContext VAR_5;

    if (VAR_0 >= VAR_1)
        return -1;

    FUNC_1(&VAR_5, VAR_0, VAR_1 - VAR_0);

    return FUNC_0(&VAR_5, VAR_2, VAR_3, VAR_4);
}
