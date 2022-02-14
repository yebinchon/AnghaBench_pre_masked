
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int64_t ;
typedef int GetBitContext ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int const*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static inline int FUNC_9(const uint8_t *VAR_1, int VAR_2,
                                   int64_t *VAR_3, int *VAR_4, int *VAR_5,
                                   int *VAR_6, int *VAR_7)
{
    GetBitContext VAR_8;
    int VAR_9, VAR_10, VAR_11;
    int64_t VAR_12;

    VAR_9 = FUNC_5(&VAR_8, VAR_1, FUNC_0(VAR_2, 2 + 8));
    if (VAR_9 < 0)
        return VAR_9;

    if (FUNC_2(&VAR_8) != 0)
        return VAR_0;

    *VAR_5 = FUNC_1(&VAR_8, 4);
    VAR_10 = FUNC_2(&VAR_8);
    VAR_11 = FUNC_2(&VAR_8);
    FUNC_8(&VAR_8);

    if (VAR_10) {
        *VAR_6 = FUNC_1(&VAR_8, 3);
        *VAR_7 = FUNC_1(&VAR_8, 2);
        FUNC_7(&VAR_8, 3);
    } else {
        *VAR_6 = *VAR_7 = 0;
    }

    *VAR_3 = VAR_11 ? FUNC_6(&VAR_8)
                               : VAR_2 - 1 - VAR_10;

    if (FUNC_4(&VAR_8) < 0)
        return VAR_0;

    *VAR_4 = FUNC_3(&VAR_8) / 8;

    VAR_12 = *VAR_3 + *VAR_4;

    if (VAR_12 > VAR_2)
        return VAR_0;

    return VAR_12;
}
