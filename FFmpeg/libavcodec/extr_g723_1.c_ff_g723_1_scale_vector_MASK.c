
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 int FUNC_0 (int const) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;

int FUNC_3(int16_t *VAR_0, const int16_t *VAR_1, int VAR_2)
{
    int VAR_3, VAR_4 = 0;
    int VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
        VAR_4 |= FUNC_0(VAR_1[VAR_5]);

    VAR_3= 14 - FUNC_2(VAR_4);
    VAR_3= FUNC_1(VAR_3, 0);

    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
        VAR_0[VAR_5] = (VAR_1[VAR_5] * (1 << VAR_3)) >> 3;

    return VAR_3 - 3;
}
