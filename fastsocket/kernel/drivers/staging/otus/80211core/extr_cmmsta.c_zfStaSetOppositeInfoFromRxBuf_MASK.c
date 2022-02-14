
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef int u32_t ;
typedef int u16_t ;
struct TYPE_7__ {int currentFrequency; int connection_11b; int EnableHT; int SG40; TYPE_2__* oppositeInfo; } ;
struct TYPE_5__ {scalar_t__ bIbssGMode; } ;
struct TYPE_8__ {int supportMode; scalar_t__ wlanMode; TYPE_3__ sta; TYPE_1__ wfc; } ;
struct TYPE_6__ {int* macAddr; int rcCell; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_4__* VAR_6 ;
 int FUNC_0 (int *,int *,int*,scalar_t__,int) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int *,int,int,int ) ;
 int FUNC_5 (int *,int*,int*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,scalar_t__) ;

int FUNC_12(zdev_t* VAR_7, zbuf_t* VAR_8)
{
    int VAR_9;
    u8_t* VAR_10;
    u16_t VAR_11[3];
    int VAR_12 = 0;
    u16_t VAR_13;
    u8_t VAR_14;
    u32_t VAR_15 = 0xffffffff;
    u32_t VAR_16;

    FUNC_9(VAR_7);
    FUNC_7();

    VAR_11[0] = FUNC_11(VAR_7, VAR_8, VAR_5);
    VAR_11[1] = FUNC_11(VAR_7, VAR_8, VAR_5+2);
    VAR_11[2] = FUNC_11(VAR_7, VAR_8, VAR_5+4);

    FUNC_8(VAR_7);

    VAR_12 = FUNC_5(VAR_7, VAR_11, &VAR_9);
    if ( VAR_12 != 0 )
    {
        goto zlReturn;
    }

    VAR_10 = VAR_6->sta.oppositeInfo[VAR_9].macAddr;
    FUNC_0(VAR_7, VAR_8, VAR_10, VAR_5, 6);

    if ( (VAR_6->sta.currentFrequency < 3000) && !(VAR_6->supportMode & (VAR_2|VAR_3)) )
    {
        VAR_14 = 0;
    } else {
        VAR_14 = 1;
    }

    if ( (VAR_14 == 1)
         && (VAR_6->sta.currentFrequency < 3000)
         && (VAR_6->wlanMode == VAR_1)
         && (VAR_6->wfc.bIbssGMode == 0) )
    {
        VAR_14 = 0;
    }

    VAR_6->sta.connection_11b = 0;
    VAR_16 = (FUNC_2(VAR_7) & VAR_0);

    if ( ((VAR_13 = FUNC_1(VAR_7, VAR_8, VAR_4)) != 0xffff)
         && (VAR_14 == 1) )
    {

        if (VAR_6->sta.currentFrequency < 3000)
        {

            if (VAR_6->sta.EnableHT == 1)
            {

                FUNC_4(VAR_7, &VAR_6->sta.oppositeInfo[VAR_9].rcCell, (VAR_16!=0)?3:2, 1, VAR_6->sta.SG40);
            }
            else
            {

                FUNC_4(VAR_7, &VAR_6->sta.oppositeInfo[VAR_9].rcCell, 1, 1, VAR_6->sta.SG40);
            }
            VAR_15 = 0x00001bb;
        }
        else
        {

            if (VAR_6->sta.EnableHT == 1)
            {

                FUNC_4(VAR_7, &VAR_6->sta.oppositeInfo[VAR_9].rcCell, (VAR_16!=0)?3:2, 0, VAR_6->sta.SG40);
            }
            else
            {

                FUNC_4(VAR_7, &VAR_6->sta.oppositeInfo[VAR_9].rcCell, 1, 0, VAR_6->sta.SG40);
            }
            VAR_15 = 0x10b01bb;
        }
    }
    else
    {

        if (VAR_6->sta.currentFrequency < 3000)
        {

            if (VAR_6->sta.EnableHT == 1)
            {

                FUNC_4(VAR_7, &VAR_6->sta.oppositeInfo[VAR_9].rcCell, (VAR_16!=0)?3:2, 1, VAR_6->sta.SG40);
                VAR_15 = 0x00001bb;
            }
            else
            {

                FUNC_4(VAR_7, &VAR_6->sta.oppositeInfo[VAR_9].rcCell, 0, 1, VAR_6->sta.SG40);
                VAR_15 = 0x0;
                VAR_6->sta.connection_11b = 1;
            }
        }
        else
        {

            if (VAR_6->sta.EnableHT == 1)
            {

                FUNC_4(VAR_7, &VAR_6->sta.oppositeInfo[VAR_9].rcCell, (VAR_16!=0)?3:2, 0, VAR_6->sta.SG40);
            }
            else
            {

                FUNC_4(VAR_7, &VAR_6->sta.oppositeInfo[VAR_9].rcCell, 1, 0, VAR_6->sta.SG40);
            }
            VAR_15 = 0x10b01bb;
        }
    }

    FUNC_6(VAR_7, VAR_9);

zlReturn:
    FUNC_10(VAR_7);

    if (VAR_15 != 0xffffffff)
    {
        FUNC_3(VAR_7, VAR_15);
    }
    return VAR_12;
}
