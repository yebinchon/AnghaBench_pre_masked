
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int16_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,scalar_t__*,int) ;

void FUNC_1(int16_t *VAR_1, int VAR_2)
{
    int16_t VAR_3[VAR_0];
    int VAR_4, VAR_5;

    FUNC_0(VAR_3, VAR_1, VAR_0 * sizeof(*VAR_3));
    for (VAR_4 = VAR_2; VAR_4 < VAR_0; VAR_4 += VAR_2) {
        for (VAR_5 = 0; VAR_5 < VAR_0 - VAR_4; VAR_5++)
            VAR_1[VAR_4 + VAR_5] += VAR_3[VAR_5];
    }
}
