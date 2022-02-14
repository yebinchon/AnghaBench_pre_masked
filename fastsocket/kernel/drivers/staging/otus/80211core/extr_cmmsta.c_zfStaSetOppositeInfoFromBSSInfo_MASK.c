
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef int u32_t ;
typedef int u16_t ;
struct zsBssInfo {scalar_t__* extSupportedRates; int frequency; int EnableHT; int SG40; int * macaddr; } ;
struct TYPE_5__ {TYPE_1__* oppositeInfo; } ;
struct TYPE_6__ {TYPE_2__ sta; } ;
struct TYPE_4__ {int rcCell; int * macAddr; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *,int,int,int ) ;
 int FUNC_3 (int *,int *,int*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;

int FUNC_6(zdev_t* VAR_2, struct zsBssInfo* VAR_3)
{
    int VAR_4;
    u8_t* VAR_5;
    u16_t VAR_6[3];
    int VAR_7;
    u32_t VAR_8;

    FUNC_5(VAR_2);

    FUNC_1((u8_t*) VAR_6, VAR_3->macaddr, 6);

    VAR_7 = FUNC_3(VAR_2, VAR_6, &VAR_4);
    if ( VAR_7 != 0 )
    {
        goto zlReturn;
    }

    VAR_5 = VAR_1->sta.oppositeInfo[VAR_4].macAddr;
    FUNC_1(VAR_5, (u8_t *)VAR_6, 6);

    VAR_8 = (FUNC_0(VAR_2) & VAR_0);

    if (VAR_3->extSupportedRates[1] != 0)
    {

        if (VAR_3->frequency < 3000)
        {

            if (VAR_3->EnableHT == 1)
                FUNC_2(VAR_2, &VAR_1->sta.oppositeInfo[VAR_4].rcCell, (VAR_8!=0)?3:2, 1, VAR_3->SG40);
            else
                FUNC_2(VAR_2, &VAR_1->sta.oppositeInfo[VAR_4].rcCell, 1, 1, VAR_3->SG40);
        }
        else
        {

            if (VAR_3->EnableHT == 1)
                FUNC_2(VAR_2, &VAR_1->sta.oppositeInfo[VAR_4].rcCell, (VAR_8!=0)?3:2, 0, VAR_3->SG40);
            else
                FUNC_2(VAR_2, &VAR_1->sta.oppositeInfo[VAR_4].rcCell, 1, 0, VAR_3->SG40);
        }
    }
    else
    {

        if (VAR_3->frequency < 3000)
        {

            if (VAR_3->EnableHT == 1)
                FUNC_2(VAR_2, &VAR_1->sta.oppositeInfo[VAR_4].rcCell, (VAR_8!=0)?3:2, 1, VAR_3->SG40);
            else
                FUNC_2(VAR_2, &VAR_1->sta.oppositeInfo[VAR_4].rcCell, 0, 1, VAR_3->SG40);
        }
        else
        {

            if (VAR_3->EnableHT == 1)
                FUNC_2(VAR_2, &VAR_1->sta.oppositeInfo[VAR_4].rcCell, (VAR_8!=0)?3:2, 0, VAR_3->SG40);
            else
                FUNC_2(VAR_2, &VAR_1->sta.oppositeInfo[VAR_4].rcCell, 1, 0, VAR_3->SG40);
        }
    }


    FUNC_4(VAR_2, VAR_4);
zlReturn:
    return 0;
}
