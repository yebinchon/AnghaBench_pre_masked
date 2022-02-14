
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
struct zsHpPriv {scalar_t__ hasHwPhyCounters; struct zsAniState* curani; } ;
struct zsAniState {scalar_t__ cckPhyErrCount; scalar_t__ ofdmPhyErrCount; scalar_t__ cckPhyErrBase; scalar_t__ ofdmPhyErrBase; scalar_t__ listenTime; } ;
struct TYPE_2__ {scalar_t__ hpPrivate; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(zdev_t* VAR_1)
{
    struct zsAniState *VAR_2;
    struct zsHpPriv *VAR_3;

    FUNC_0(VAR_1);
    VAR_3 = (struct zsHpPriv*)VAR_0->hpPrivate;
    VAR_2 = VAR_3->curani;

    VAR_2->listenTime = 0;
    if (VAR_3->hasHwPhyCounters)
    {
        VAR_2->ofdmPhyErrBase = 0;
        VAR_2->cckPhyErrBase = 0;
    }
    VAR_2->ofdmPhyErrCount = 0;
    VAR_2->cckPhyErrCount = 0;
}
