
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline int FUNC_2(const uint8_t *VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7;


    if (VAR_6 == VAR_1 || VAR_6 == VAR_0) {
        if (VAR_5 > VAR_3 / 8)
            return FUNC_0(VAR_2);
        else
            return VAR_5 * 8;
    }

    while (VAR_5 > 0 && VAR_4[VAR_5 - 1] == 0)
        VAR_5--;

    if (!VAR_5)
        return 0;

    VAR_7 = VAR_4[VAR_5 - 1];

    if (VAR_5 > VAR_3 / 8)
        return FUNC_0(VAR_2);
    VAR_5 *= 8;


    if (VAR_7)
        VAR_5 -= FUNC_1(VAR_7) + 1;

    return VAR_5;
}
