
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
struct zsHpPriv {struct zsAniState* curani; } ;
struct zsAniState {scalar_t__ rssiThrHigh; scalar_t__ rssiThrLow; scalar_t__ firstepLevel; scalar_t__ spurImmunityLevel; scalar_t__ noiseImmunityLevel; scalar_t__ ofdmWeakSigDetectOff; } ;
typedef scalar_t__ s32_t ;
struct TYPE_2__ {scalar_t__ hpPrivate; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int FUNC_2 (int *) ;

void FUNC_3(zdev_t* VAR_6)
{
    struct zsAniState *VAR_7;
    s32_t VAR_8;
    struct zsHpPriv *VAR_9;

    FUNC_2(VAR_6);
    VAR_9 = (struct zsHpPriv*)VAR_5->hpPrivate;
    VAR_7 = VAR_9->curani;

    VAR_8 = FUNC_0(VAR_6);
    if (VAR_8 > VAR_7->rssiThrHigh)
    {




    }
    else if (VAR_8 > VAR_7->rssiThrLow)
    {




        if (VAR_7->ofdmWeakSigDetectOff)
        {
            FUNC_1(VAR_6, VAR_3, VAR_0);
            return;
        }
        if (VAR_7->firstepLevel > 0)
        {
            FUNC_1(VAR_6, VAR_1, VAR_7->firstepLevel - 1);
            return;
        }
    }
    else
    {



        if (VAR_7->firstepLevel > 0)
        {
            FUNC_1(VAR_6, VAR_1, VAR_7->firstepLevel - 1);
            return;
        }
    }

    if (VAR_7->spurImmunityLevel > 0)
    {
        FUNC_1(VAR_6, VAR_4, VAR_7->spurImmunityLevel - 1);
        return;
    }




    if (VAR_7->noiseImmunityLevel > 0)
    {
        FUNC_1(VAR_6, VAR_2, VAR_7->noiseImmunityLevel - 1);
        return;
    }
}
