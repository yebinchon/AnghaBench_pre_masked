
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int GetByteContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int const*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static const uint8_t *FUNC_5(const uint8_t *VAR_0, int *VAR_1, int VAR_2)
{
    const uint8_t *VAR_3 = VAR_0 + 1;
    int VAR_4, VAR_5, VAR_6, VAR_7;
    uint8_t VAR_8;
    uint64_t VAR_9;

    GetByteContext VAR_10;
    FUNC_1(&VAR_10, VAR_3, VAR_2);

    VAR_8 = FUNC_0(&VAR_10);
    VAR_4 = (VAR_8 >> 4) & 1;
    VAR_5 = (VAR_8 >> 3) & 1;
    VAR_6 = (VAR_8 >> 2) & 1;

    VAR_9 = *VAR_1 = 0;
    while (FUNC_2(&VAR_10) == 0xff)
        VAR_9 += FUNC_0(&VAR_10);

    VAR_9 += FUNC_0(&VAR_10);

    if (VAR_4)
        FUNC_3(&VAR_10, 2);
    if (VAR_5)
        FUNC_3(&VAR_10, 2);
    if (VAR_6) {
        VAR_7 = FUNC_0(&VAR_10);
        FUNC_3(&VAR_10, VAR_7);
    }

    if (FUNC_4(&VAR_10) + VAR_9 > VAR_2)
        return ((void*)0);

    *VAR_1 = VAR_9;

    return VAR_3 + FUNC_4(&VAR_10);
}
