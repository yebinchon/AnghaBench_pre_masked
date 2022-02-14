
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u32_t ;
typedef size_t u16_t ;
struct TYPE_3__ {int* ledMode; int counter; scalar_t__ txTraffic; scalar_t__ rxTraffic; } ;
struct TYPE_4__ {TYPE_1__ ledStruct; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int *,size_t,int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(zdev_t* VAR_3)
{
    u16_t VAR_4;
    u32_t VAR_5, VAR_6, VAR_7, VAR_8;
    FUNC_3(VAR_3);

    for (VAR_4=0; VAR_4<VAR_1; VAR_4++)
    {
        if (FUNC_2(VAR_3) != VAR_0)
        {

            VAR_5 = ((VAR_2->ledStruct.ledMode[VAR_4] & 0xf00) >> 8) * 5;
            VAR_6 = ((VAR_2->ledStruct.ledMode[VAR_4] & 0xf000) >> 12) * 5;

            if ((VAR_5 + VAR_6) != 0)
            {
                VAR_7 = VAR_2->ledStruct.counter / (VAR_5+VAR_6);
                VAR_7 = VAR_2->ledStruct.counter - (VAR_7 * (VAR_5+VAR_6));
                if (VAR_7 < VAR_5)
                {
                    FUNC_0(VAR_3, VAR_4, 1);
                }
                else
                {
                    FUNC_0(VAR_3, VAR_4, 0);
                }
            }
        }
        else
        {
            if ((FUNC_1(VAR_3)) && ((VAR_2->ledStruct.ledMode[VAR_4] & 0x8) == 0))
            {
                FUNC_0(VAR_3, VAR_4, 0);
            }
            else
            {

                if ((VAR_2->ledStruct.ledMode[VAR_4] & 0x40) == 0)
                {
                    if ((VAR_2->ledStruct.counter & 1) == 0)
                    {
                        FUNC_0(VAR_3, VAR_4, (VAR_2->ledStruct.ledMode[VAR_4] & 0x10) >> 4);
                    }
                    else
                    {
                        if ((VAR_2->ledStruct.txTraffic > 0) || (VAR_2->ledStruct.rxTraffic > 0))
                        {
                            VAR_2->ledStruct.txTraffic = VAR_2->ledStruct.rxTraffic = 0;
                            if ((VAR_2->ledStruct.ledMode[VAR_4] & 0x20) != 0)
                            {
                                FUNC_0(VAR_3, VAR_4, ((VAR_2->ledStruct.ledMode[VAR_4] & 0x10) >> 4)^1);
                            }
                        }
                    }
                }
                else
                {
                    VAR_8 = 5 * (1 << ((VAR_2->ledStruct.ledMode[VAR_4] & 0x30) >> 4));
                    VAR_7 = VAR_2->ledStruct.counter / (VAR_8*2);
                    VAR_7 = VAR_2->ledStruct.counter - (VAR_7 * (VAR_8*2));
                    if (VAR_7 < VAR_8)
                    {
                        if ((VAR_2->ledStruct.counter & 1) == 0)
                        {
                            FUNC_0(VAR_3, VAR_4, 0);
                        }
                        else
                        {
                            if ((VAR_2->ledStruct.txTraffic > 0) || (VAR_2->ledStruct.rxTraffic > 0))
                            {
                                VAR_2->ledStruct.txTraffic = VAR_2->ledStruct.rxTraffic = 0;
                                FUNC_0(VAR_3, VAR_4, 1);
                            }
                        }
                    }
                    else
                    {
                        if ((VAR_2->ledStruct.counter & 1) == 0)
                        {
                            FUNC_0(VAR_3, VAR_4, 1);
                        }
                        else
                        {
                            if ((VAR_2->ledStruct.txTraffic > 0) || (VAR_2->ledStruct.rxTraffic > 0))
                            {
                                VAR_2->ledStruct.txTraffic = VAR_2->ledStruct.rxTraffic = 0;
                                FUNC_0(VAR_3, VAR_4, 0);
                            }
                        }
                    }
                }
            }
        }
    }
}
