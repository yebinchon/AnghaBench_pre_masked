
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 scalar_t__ VAR_0 ;
 int* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int*,int ,scalar_t__) ;

uint8_t *FUNC_2(const uint8_t *VAR_1, uint32_t VAR_2,
                                  uint32_t *VAR_3, int VAR_4)
{
    uint8_t *VAR_5;
    uint32_t VAR_6, VAR_7;

    VAR_5 = FUNC_0(VAR_2 + VAR_0);
    if (!VAR_5)
        return ((void*)0);


    VAR_6 = VAR_7 = 0;
    while (VAR_6 < VAR_4 && VAR_6 < VAR_2)
        VAR_5[VAR_7++] = VAR_1[VAR_6++];

    while (VAR_6 + 2 < VAR_2)
        if (!VAR_1[VAR_6] && !VAR_1[VAR_6 + 1] && VAR_1[VAR_6 + 2] == 3) {
            VAR_5[VAR_7++] = VAR_1[VAR_6++];
            VAR_5[VAR_7++] = VAR_1[VAR_6++];
            VAR_6++;
        } else
            VAR_5[VAR_7++] = VAR_1[VAR_6++];

    while (VAR_6 < VAR_2)
        VAR_5[VAR_7++] = VAR_1[VAR_6++];

    FUNC_1(VAR_5 + VAR_7, 0, VAR_0);

    *VAR_3 = VAR_7;
    return VAR_5;
}
