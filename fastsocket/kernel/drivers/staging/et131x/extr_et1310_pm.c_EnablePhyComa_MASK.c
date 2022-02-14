
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int PowerDownDuplex; int PowerDownSpeed; } ;
struct et131x_adapter {TYPE_3__* regs; int SendHWLock; int Flags; int AiForceDpx; TYPE_1__ PoMgmt; int AiForceSpeed; } ;
struct TYPE_5__ {int pm_csr; } ;
struct TYPE_6__ {TYPE_2__ global; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(struct et131x_adapter *VAR_3)
{
 unsigned long VAR_4;
 u32 VAR_5;

 VAR_5 = FUNC_0(&VAR_3->regs->global.pm_csr);




 VAR_3->PoMgmt.PowerDownSpeed = VAR_3->AiForceSpeed;
 VAR_3->PoMgmt.PowerDownDuplex = VAR_3->AiForceDpx;


 FUNC_1(&VAR_3->SendHWLock, VAR_4);
 VAR_3->Flags |= VAR_2;
 FUNC_2(&VAR_3->SendHWLock, VAR_4);




 VAR_5 &= ~VAR_0;
 FUNC_3(VAR_5, &VAR_3->regs->global.pm_csr);


 VAR_5 |= VAR_1;
 FUNC_3(VAR_5, &VAR_3->regs->global.pm_csr);
}
