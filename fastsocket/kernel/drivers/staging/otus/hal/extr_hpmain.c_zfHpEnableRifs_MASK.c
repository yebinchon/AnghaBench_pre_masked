
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef int u8_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;

void FUNC_2(zdev_t* VAR_0, u8_t VAR_1, u8_t VAR_2, u8_t VAR_3)
{






    FUNC_0 (0x9800+(738<<2), 0x08000000 | (0x1 << 26) | (0x1 << 27));



    FUNC_0 (0x99ec, 0x0cc80caa);


    if (VAR_2 == 1)
    {
        if (VAR_3 == 0x1)
        {
            FUNC_0(0x9800+(70<<2), 40);
        }
        else
        {
            FUNC_0(0x9800+(70<<2), 20);
            if(VAR_1 == 0x0)
            {




                FUNC_0(0x9800+(24<<2), (0x0004dd10 & 0xffffffc7) | (0x4 << 3));
            }
        }
    }

    if (VAR_1 == 0x1)
    {
        FUNC_0(0x9850, 0xece8b4e4);

        FUNC_0(0x985c, 0x313a5d5e);
    }
    else
    {
        FUNC_0(0x9850, 0xede8b4e4);
        FUNC_0(0x985c, 0x3139605e);
    }

    FUNC_1(VAR_0);

    return;
}
