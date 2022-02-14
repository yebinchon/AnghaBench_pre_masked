
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 float FUNC_0 (float,double,double) ;

__attribute__((used)) static float FUNC_1(uint32_t *VAR_1)
{
    uint32_t VAR_2 = 0, VAR_3 = 0;
    float VAR_4;
    int VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
        VAR_3 += VAR_1 [VAR_5];

    while (VAR_5--)
        if ((VAR_2 += VAR_1 [VAR_5]) * 20 >= VAR_3)
            break;

    VAR_4 = (float)(64.54 - VAR_5 / 100.0);

    return FUNC_0(VAR_4, -24.0, 64.0);
}
