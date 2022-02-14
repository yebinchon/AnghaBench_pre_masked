
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef scalar_t__ u32_t ;
struct TYPE_3__ {int ast_ani_cckerrs; int ast_ani_ofdmerrs; } ;
struct zsHpPriv {int procPhyErr; int aniPeriod; TYPE_1__ stats; scalar_t__ hasHwPhyCounters; struct zsAniState* curani; } ;
struct zsAniState {int listenTime; int ofdmPhyErrCount; int cckPhyErrCount; int ofdmTrigLow; int cckTrigLow; int ofdmTrigHigh; int cckTrigHigh; } ;
struct TYPE_4__ {scalar_t__ hpPrivate; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(zdev_t* VAR_2, u32_t VAR_3, u32_t VAR_4, u32_t VAR_5)
{
    struct zsAniState *VAR_6;

    struct zsHpPriv *VAR_7;

    FUNC_4(VAR_2);
    VAR_7 = (struct zsHpPriv*)VAR_1->hpPrivate;






    VAR_6 = VAR_7->curani;
    VAR_6->listenTime += VAR_3;

    if (VAR_7->hasHwPhyCounters)
    {

        u32_t VAR_8, VAR_9;
        VAR_8 = VAR_4;
        VAR_7->stats.ast_ani_ofdmerrs += VAR_8;
        VAR_6->ofdmPhyErrCount += VAR_8;




        VAR_9 = VAR_5;
        VAR_7->stats.ast_ani_cckerrs += VAR_9;
        VAR_6->cckPhyErrCount += VAR_9;
    }




    if ((VAR_7->procPhyErr & VAR_0) == 0)
        return;
    if (VAR_6->listenTime > 5 * VAR_7->aniPeriod)
    {




        if (VAR_6->ofdmPhyErrCount <= VAR_6->listenTime *
             VAR_6->ofdmTrigLow/1000 &&
            VAR_6->cckPhyErrCount <= VAR_6->listenTime *
             VAR_6->cckTrigLow/1000)
            FUNC_1(VAR_2);
        FUNC_3(VAR_2);
    }
    else if (VAR_6->listenTime > VAR_7->aniPeriod)
    {

        if (VAR_6->ofdmPhyErrCount > VAR_6->listenTime *
            VAR_6->ofdmTrigHigh / 1000)
        {
            FUNC_2(VAR_2);
            FUNC_3(VAR_2);
        }
        else if (VAR_6->cckPhyErrCount > VAR_6->listenTime *
               VAR_6->cckTrigHigh / 1000)
        {
            FUNC_0(VAR_2);
            FUNC_3(VAR_2);
        }
    }
}
