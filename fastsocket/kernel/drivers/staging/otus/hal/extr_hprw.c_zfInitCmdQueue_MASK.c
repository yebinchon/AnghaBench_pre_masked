
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
struct TYPE_3__ {scalar_t__ delayWcmdCount; } ;
struct zsHpPriv {TYPE_1__ cmd; scalar_t__ cmdPending; scalar_t__ cmdHead; scalar_t__ cmdTail; scalar_t__ cmdSend; } ;
struct TYPE_4__ {scalar_t__ hpPrivate; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(zdev_t* VAR_1)
{
    struct zsHpPriv* VAR_2;

    FUNC_2(VAR_1);
    VAR_2 = (struct zsHpPriv*)(VAR_0->hpPrivate);

    FUNC_0();

    FUNC_1(VAR_1);



    VAR_2->cmdTail = VAR_2->cmdHead = 0;

    VAR_2->cmdPending = 0;
    VAR_2->cmd.delayWcmdCount = 0;
    FUNC_3(VAR_1);
}
