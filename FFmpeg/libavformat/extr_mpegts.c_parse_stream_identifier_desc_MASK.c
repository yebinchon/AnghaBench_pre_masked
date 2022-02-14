
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int const**,int const*) ;
 int FUNC_1 (int const**,int const*) ;

__attribute__((used)) static int FUNC_2(const uint8_t *VAR_0, const uint8_t *VAR_1)
{
    const uint8_t **VAR_2 = &VAR_0;
    const uint8_t *VAR_3;
    const uint8_t *VAR_4;
    int VAR_5;
    int VAR_6, VAR_7;

    VAR_5 = FUNC_0(VAR_2, VAR_1);
    if (VAR_5 < 0)
        return -1;
    VAR_5 &= 0xfff;
    VAR_3 = VAR_0 + VAR_5;
    if (VAR_3 > VAR_1)
        return -1;

    while (1) {
        VAR_7 = FUNC_1(VAR_2, VAR_3);
        if (VAR_7 < 0)
            return -1;
        VAR_6 = FUNC_1(VAR_2, VAR_3);
        if (VAR_6 < 0)
            return -1;
        VAR_4 = *VAR_2 + VAR_6;
        if (VAR_4 > VAR_3)
            return -1;

        if (VAR_7 == 0x52) {
            return FUNC_1(VAR_2, VAR_4);
        }
        *VAR_2 = VAR_4;
    }

    return -1;
}
