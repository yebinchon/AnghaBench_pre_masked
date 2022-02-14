
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;

int FUNC_0(uint8_t *VAR_1, uint32_t *VAR_2, unsigned VAR_3)
{
    uint32_t VAR_4[33] = { 404 };
    unsigned VAR_5, VAR_6, VAR_7, VAR_8;

    for (VAR_7 = 0; (VAR_7 < VAR_3) && (VAR_1[VAR_7] == 0); ++VAR_7)
        ;
    if (VAR_7 == VAR_3)
        return 0;

    VAR_2[VAR_7] = 0;
    if (VAR_1[VAR_7] > 32)
        return VAR_0;
    for (VAR_5 = 0; VAR_5 < VAR_1[VAR_7]; ++VAR_5)
        VAR_4[VAR_5+1] = 1u << VAR_5;

    ++VAR_7;

    for (VAR_5 = VAR_7; (VAR_5 < VAR_3) && (VAR_1[VAR_5] == 0); ++VAR_5)
        ;
    if (VAR_5 == VAR_3)
        return 0;

    for (; VAR_7 < VAR_3; ++VAR_7) {
        if (VAR_1[VAR_7] > 32)
             return VAR_0;
        if (VAR_1[VAR_7] == 0)
             continue;

        for (VAR_5 = VAR_1[VAR_7]; VAR_5 > 0; --VAR_5)
            if (VAR_4[VAR_5])
                break;
        if (!VAR_5)
             return VAR_0;
        VAR_8 = VAR_4[VAR_5];
        VAR_4[VAR_5] = 0;

        for (VAR_6 = VAR_5 + 1 ;VAR_6 <= VAR_1[VAR_7]; ++VAR_6)
            VAR_4[VAR_6] = VAR_8 + (1u << (VAR_6 - 1));
        VAR_2[VAR_7] = VAR_8;
    }


    for (VAR_7 = 1; VAR_7 < 33; VAR_7++)
        if (VAR_4[VAR_7])
            return VAR_0;

    return 0;
}
