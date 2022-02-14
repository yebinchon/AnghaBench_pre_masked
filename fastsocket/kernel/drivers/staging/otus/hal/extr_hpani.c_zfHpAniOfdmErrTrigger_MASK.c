
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
struct zsHpPriv {int procPhyErr; struct zsAniState* curani; } ;
struct zsAniState {scalar_t__ noiseImmunityLevel; scalar_t__ spurImmunityLevel; scalar_t__ rssiThrHigh; scalar_t__ firstepLevel; scalar_t__ rssiThrLow; scalar_t__ ofdmWeakSigDetectOff; } ;
typedef scalar_t__ s32_t ;
struct TYPE_2__ {int frequency; scalar_t__ hpPrivate; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_1__* VAR_10 ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int FUNC_2 (int *) ;

void FUNC_3(zdev_t* VAR_11)
{
    struct zsAniState *VAR_12;
    s32_t VAR_13;
    struct zsHpPriv *VAR_14;

    FUNC_2(VAR_11);
    VAR_14 = (struct zsHpPriv*)VAR_10->hpPrivate;



    if ((VAR_14->procPhyErr & VAR_8) == 0)
        return;

    VAR_12 = VAR_14->curani;

    if (VAR_12->noiseImmunityLevel < VAR_7)
    {
        FUNC_1(VAR_11, VAR_3, VAR_12->noiseImmunityLevel + 1);
        return;
    }

    if (VAR_12->spurImmunityLevel < VAR_9)
    {
        FUNC_1(VAR_11, VAR_5, VAR_12->spurImmunityLevel + 1);
        return;
    }
    VAR_13 = FUNC_0(VAR_11);
    if (VAR_13 > VAR_12->rssiThrHigh)
    {



        if (!VAR_12->ofdmWeakSigDetectOff)
        {
            FUNC_1(VAR_11, VAR_4, VAR_0);
            FUNC_1(VAR_11, VAR_5, 0);
            return;
        }




        if (VAR_12->firstepLevel < VAR_6)
        {
            FUNC_1(VAR_11, VAR_2, VAR_12->firstepLevel + 1);
            return;
        }
    }
    else if (VAR_13 > VAR_12->rssiThrLow)
    {




        if (VAR_12->ofdmWeakSigDetectOff)
            FUNC_1(VAR_11, VAR_4, VAR_1);
        if (VAR_12->firstepLevel < VAR_6)
            FUNC_1(VAR_11, VAR_2, VAR_12->firstepLevel + 1);
        return;
    }
    else
    {





        if (VAR_10->frequency < 3000)
        {
            if (!VAR_12->ofdmWeakSigDetectOff)
                FUNC_1(VAR_11, VAR_4, VAR_0);
            if (VAR_12->firstepLevel > 0)
                FUNC_1(VAR_11, VAR_2, 0);
            return;
        }
    }
}
