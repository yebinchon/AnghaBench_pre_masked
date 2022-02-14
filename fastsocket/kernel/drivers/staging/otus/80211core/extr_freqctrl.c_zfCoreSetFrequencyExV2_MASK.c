
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int (* zfpFreqChangeCompleteCb ) (int *) ;
typedef int zdev_t ;
typedef scalar_t__ u8_t ;
typedef int u16_t ;
struct TYPE_3__ {scalar_t__ currentBw40; scalar_t__ currentExtOffset; scalar_t__ flagFreqChanging; int connPowerInHalfDbm; int currentFrequency; } ;
struct TYPE_4__ {TYPE_1__ sta; int frequency; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int *,int ,scalar_t__,scalar_t__,int (*) (int *)) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11(zdev_t* VAR_2, u16_t VAR_3, u8_t VAR_4,
        u8_t VAR_5, zfpFreqChangeCompleteCb VAR_6, u8_t VAR_7)
{
    u8_t VAR_8 = 0;
    u8_t VAR_9 = 0;
    FUNC_9(VAR_2);
    FUNC_7();

    FUNC_6(VAR_0, "Freq=", VAR_3);

    FUNC_8(VAR_2);
    if ((VAR_1->sta.currentFrequency == VAR_3)
        && (VAR_1->sta.currentBw40 == VAR_4)
        && (VAR_1->sta.currentExtOffset == VAR_5))
    {
        if ( VAR_7 == 0 && VAR_1->sta.flagFreqChanging == 0 )
        {
            goto done;
        }
    }







    FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);



    if ( VAR_1->sta.flagFreqChanging == 0 )
    {
        if ((VAR_1->sta.currentBw40 != VAR_4) || (VAR_1->sta.currentExtOffset != VAR_5))
        {
            VAR_9 = 1;
        }
        VAR_1->sta.currentFrequency = VAR_3;
        VAR_1->sta.currentBw40 = VAR_4;
        VAR_1->sta.currentExtOffset = VAR_5;
        VAR_8 = 1;
    }
    VAR_1->sta.flagFreqChanging++;

    FUNC_10(VAR_2);

    if ( VAR_8 )
    {

        if ( VAR_7 )
        {
            FUNC_5("#6_1 20070917");
            FUNC_5("It is happen!!! No error message");
            FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, 2);
        }
        else
        {
        FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_9);
        }

        if ( FUNC_4(VAR_2)
             && (VAR_3 == VAR_1->frequency)) {
            VAR_1->sta.connPowerInHalfDbm = FUNC_1(VAR_2);
        }
    }
    return;

done:
    FUNC_10(VAR_2);

    if ( VAR_6 != ((void*)0) )
    {
        VAR_6(VAR_2);
    }
    FUNC_3(VAR_2);
    return;
}
