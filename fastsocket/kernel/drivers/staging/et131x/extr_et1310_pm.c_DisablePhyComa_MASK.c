
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int PowerDownDuplex; int PowerDownSpeed; } ;
struct et131x_adapter {int Flags; TYPE_1__ PoMgmt; int AiForceDpx; int AiForceSpeed; TYPE_3__* regs; } ;
struct TYPE_5__ {int pm_csr; } ;
struct TYPE_6__ {TYPE_2__ global; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct et131x_adapter*) ;
 int FUNC_1 (struct et131x_adapter*) ;
 int FUNC_2 (struct et131x_adapter*) ;
 int FUNC_3 (struct et131x_adapter*) ;
 int FUNC_4 (struct et131x_adapter*) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;

void FUNC_7(struct et131x_adapter *VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_5(&VAR_3->regs->global.pm_csr);


 VAR_4 |= VAR_0;
 VAR_4 &= ~VAR_1;
 FUNC_6(VAR_4, &VAR_3->regs->global.pm_csr);




 VAR_3->AiForceSpeed = VAR_3->PoMgmt.PowerDownSpeed;
 VAR_3->AiForceDpx = VAR_3->PoMgmt.PowerDownDuplex;


 FUNC_1(VAR_3);


 FUNC_2(VAR_3);





 FUNC_4(VAR_3);


 FUNC_0(VAR_3);


 VAR_3->Flags &= ~VAR_2;


 FUNC_3(VAR_3);
}
