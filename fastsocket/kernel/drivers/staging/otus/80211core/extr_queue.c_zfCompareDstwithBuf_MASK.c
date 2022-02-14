
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef int zbuf_t ;
typedef scalar_t__ u8_t ;
typedef int u16_t ;


 scalar_t__ FUNC_0 (int *,int *,int) ;

u16_t FUNC_1(zdev_t* VAR_0, zbuf_t* VAR_1, u8_t* VAR_2)
{
    u16_t VAR_3;
    u8_t VAR_4[6];

    for (VAR_3=0; VAR_3<6; VAR_3++)
    {
        VAR_4[VAR_3] = FUNC_0(VAR_0, VAR_1, VAR_3);
        if (VAR_4[VAR_3] != VAR_2[VAR_3])
        {
            return 1+VAR_3;
        }
    }

    return 0;
}
