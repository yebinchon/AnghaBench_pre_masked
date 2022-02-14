
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
struct zsHpPriv {int isSiteSurvey; int* eepromImage; scalar_t__ hwFrequency; int currentAckRtsTpc; scalar_t__ strongRSSI; scalar_t__ rxStrongRSSI; } ;
struct TYPE_2__ {struct zsHpPriv* hpPrivate; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(zdev_t* VAR_2, u8_t VAR_3)
{
    struct zsHpPriv* VAR_4;

    FUNC_2(VAR_2);
    VAR_4=VAR_1->hpPrivate;

    if ( VAR_3 == 1 )
    {
        VAR_4->isSiteSurvey = 1;
    }
    else
    {
        VAR_4->isSiteSurvey = 0;
    }



    {
        VAR_4->rxStrongRSSI = 0;
        if ((VAR_4->eepromImage[0x100+0x110*2/4]&0xff) == 0x80)
        {
            if (VAR_4->hwFrequency <= VAR_0)
            {
                FUNC_0(VAR_2, 0x1c8960, 0x9b49);
            }
            else
            {
                FUNC_0(VAR_2, 0x1c8960, 0x0900);
            }
        }
        else
        {
            FUNC_0(VAR_2, 0x1c8960, 0x9b40);
        }
        FUNC_1(VAR_2);
    }

    {
        VAR_4->strongRSSI = 0;
        FUNC_0(VAR_2, 0x1c3694, ((VAR_4->currentAckRtsTpc&0x3f) << 20) | (0x5<<26));
        FUNC_0(VAR_2, 0x1c3bb4, ((VAR_4->currentAckRtsTpc&0x3f) << 5 ) | (0x5<<11) |
                                               ((VAR_4->currentAckRtsTpc&0x3f) << 21) | (0x5<<27) );
        FUNC_1(VAR_2);
    }
}
