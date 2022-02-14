
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef int u32_t ;
typedef size_t u16_t ;
struct TYPE_7__ {size_t allowChannelCnt; size_t CurChIndex; TYPE_2__* allowChannel; } ;
struct TYPE_5__ {scalar_t__ DFSEnable; } ;
struct TYPE_8__ {TYPE_3__ regulationTable; TYPE_1__ sta; } ;
struct TYPE_6__ {int channel; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_4__* VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;

void FUNC_5(zdev_t* VAR_1, u32_t VAR_2, u8_t VAR_3,
        u8_t VAR_4)
{
    u32_t VAR_5 = 1;
 u32_t VAR_6 = 0;
 u32_t VAR_7 = 0;
 u32_t VAR_8 = 1;
 u32_t VAR_9 = 1;
 u32_t VAR_10 = 0;
 u32_t VAR_11 = 0;

 u32_t VAR_12;
 u32_t VAR_13;
 u32_t VAR_14;
 u32_t VAR_15;
 u32_t VAR_16;
 u32_t VAR_17;

 u8_t VAR_18;
 u8_t VAR_19;
 u32_t VAR_20;

    u16_t VAR_21;

    FUNC_4(VAR_1);



    if (VAR_0->sta.DFSEnable)
    {
        for (VAR_21 = 0; VAR_21 < VAR_0->regulationTable.allowChannelCnt; VAR_21++)
        {
            if (VAR_0->regulationTable.allowChannel[VAR_21].channel == VAR_2)
                break;
        }
        VAR_0->regulationTable.CurChIndex = VAR_21;
    }

 if (VAR_3 == 1)
 {
        if (VAR_4 == 1)
        {
            VAR_2 += 10;
        }
        else
        {
            VAR_2 -= 10;
        }

 }


 if ( VAR_2 > 3000 )
 {
     if ( VAR_2 % 10 )
     {

            VAR_19 = (u8_t)((VAR_2 - 4800)/5);
            VAR_19 = (u8_t)(VAR_19 & 0xff);
            VAR_18 = (u8_t)FUNC_1(VAR_19);
        }
        else
        {

            VAR_19 = (u8_t)((VAR_2 - 4800)/10);
            VAR_19 = (u8_t)(VAR_19 & 0xff)<<1;
            VAR_18 = (u8_t)FUNC_1(VAR_19);

         VAR_7 = 1;
         VAR_8 = 0;
        }
 }
 else
 {

        if (VAR_2 == 2484)
        {
            VAR_20 = 10 + (VAR_2 - 2274)/5 ;
            VAR_6 = 1;
        }
        else
        {
            VAR_20 = 16 + (VAR_2 - 2272)/5 ;
            VAR_6 = 0;
        }
        VAR_19 = (u8_t)(VAR_20 << 2) & 0xff;
        VAR_18 = (u8_t)FUNC_1(VAR_19);
 }

 VAR_12 = VAR_18;
 VAR_13 = VAR_11<<7 | VAR_10<<6 | VAR_9<<5
   | VAR_8<<3 | VAR_7<<2
   | VAR_6<<1 | VAR_5;

    VAR_14 = VAR_13 & 0x1f;
    VAR_15 = VAR_12 & 0x1f;
    VAR_16 = VAR_15<<5 | VAR_14;

    VAR_14 = VAR_13>>5 & 0x7;
    VAR_15 = VAR_12>>5 & 0x7;
    VAR_17 = VAR_15<<5 | VAR_14;


 FUNC_0 (0x9800+(0x2c<<2), VAR_16);
 FUNC_0 (0x9800+(0x3a<<2), VAR_17);




    FUNC_2(VAR_1);

    FUNC_3(VAR_1, 10);

    return;
}
