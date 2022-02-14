
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef int u16_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,scalar_t__) ;
 int FUNC_2 (int *,int *,scalar_t__) ;

void FUNC_3(zdev_t* VAR_2, zbuf_t* VAR_3, u8_t* VAR_4, u16_t* VAR_5)
{
    u8_t VAR_6;
    u16_t VAR_7;
 u16_t VAR_8;
    u8_t VAR_9;

    *VAR_4 = 0;
    *VAR_5 = 0;

    VAR_7 = FUNC_0(VAR_2, VAR_3);

    if (VAR_7 >= 34)
    {
        VAR_8 = (((u16_t)FUNC_1(VAR_2, VAR_3, VAR_1))<<8)
                    + FUNC_1(VAR_2, VAR_3, VAR_1 + 1);


        if (VAR_8 == 0x0800)
        {
            VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_0) >> 4;
            if (VAR_6 == 0x4)
            {
                VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_0 + 1);
                *VAR_4 = (VAR_9 >> 5);
                *VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_0 + 6);
            }

        }
    }
    return;
}
