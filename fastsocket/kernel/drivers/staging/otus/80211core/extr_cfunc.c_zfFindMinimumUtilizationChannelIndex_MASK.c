
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef size_t u8_t ;
typedef size_t u16_t ;


 int FUNC_0 (int *) ;

u16_t FUNC_1(zdev_t* VAR_0, u16_t* VAR_1, u16_t VAR_2)
{
    u8_t VAR_3;
    u16_t VAR_4, VAR_5;

    FUNC_0(VAR_0);

    VAR_3 = 1;
    VAR_4 = 0;
    VAR_5 = VAR_1[VAR_4];
    while( VAR_3< VAR_2 )
    {
        if( VAR_1[VAR_3] < VAR_5 )
        {
            VAR_5 = VAR_1[VAR_3];
            VAR_4 = VAR_3;
        }
        VAR_3++;
    }

    return VAR_4;
}
