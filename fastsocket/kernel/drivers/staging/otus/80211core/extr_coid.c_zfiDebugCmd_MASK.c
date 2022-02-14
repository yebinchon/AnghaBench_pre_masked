
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef scalar_t__ u8_t ;
typedef int u32_t ;
typedef int u16_t ;
struct TYPE_3__ {scalar_t__ keyId; } ;
struct TYPE_4__ {int checksumTest; int enableProtectionMode; int rxPacketDump; TYPE_1__ sta; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

u32_t FUNC_8(zdev_t* VAR_2, u32_t VAR_3, u32_t VAR_4)
{
    u16_t VAR_5;
    u32_t VAR_6;
    FUNC_6(VAR_2);

    FUNC_4();


    FUNC_5(VAR_2);

    if ( VAR_3 == 0 )
    {
        VAR_5 = (u16_t) ((VAR_4 >> 16) & 0xffff);
        VAR_6 = VAR_4 & 0xffff;
        FUNC_2(VAR_2, VAR_5, VAR_6);
    }
    else if ( VAR_3 == 1 )
    {
        VAR_5 = (u16_t) (VAR_4 & 0xffff);
        FUNC_0(VAR_2, VAR_5);
    }
    else if ( VAR_3 == 2 )
    {
        FUNC_1(VAR_2);
    }
    else if ( VAR_3 == 3 )
    {
        FUNC_2(VAR_2, 1, 500);
        FUNC_2(VAR_2, 2, 1000);
        FUNC_2(VAR_2, 3, 1000);
        FUNC_2(VAR_2, 4, 1000);
        FUNC_2(VAR_2, 5, 1500);
        FUNC_2(VAR_2, 6, 2000);
        FUNC_2(VAR_2, 7, 2200);
        FUNC_2(VAR_2, 6, 2500);
        FUNC_2(VAR_2, 8, 2800);
    }
    else if ( VAR_3 == 4)
    {
        FUNC_2(VAR_2, 1, 500);
        FUNC_2(VAR_2, 2, 1000);
        FUNC_2(VAR_2, 3, 1000);
        FUNC_2(VAR_2, 4, 1000);
        FUNC_2(VAR_2, 5, 1500);
        FUNC_2(VAR_2, 6, 2000);
        FUNC_2(VAR_2, 7, 2200);
        FUNC_2(VAR_2, 6, 2500);
        FUNC_2(VAR_2, 8, 2800);
        FUNC_0(VAR_2, 1);
        FUNC_0(VAR_2, 3);
        FUNC_0(VAR_2, 6);
    }
    else if ( VAR_3 == 5 )
    {
        VAR_1->sta.keyId = (u8_t) VAR_4;
    }
 else if ( VAR_3 == 6 )
 {

        VAR_1->checksumTest = VAR_4;
 }
 else if ( VAR_3 == 7 )
 {
        VAR_1->enableProtectionMode = VAR_4;
        FUNC_3(VAR_0, "wd->enableProtectionMode=", VAR_1->enableProtectionMode);
 }
 else if ( VAR_3 == 8 )
 {

        if (VAR_4)
        {
            VAR_1->rxPacketDump = 1;
        }
        else
        {
            VAR_1->rxPacketDump = 0;
        }
 }


    FUNC_7(VAR_2);

    return 0;
}
