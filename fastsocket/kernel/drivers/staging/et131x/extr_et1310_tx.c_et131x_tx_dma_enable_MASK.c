
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct et131x_adapter {TYPE_2__* regs; scalar_t__ RegistryPhyLoopbk; } ;
struct TYPE_3__ {int csr; } ;
struct TYPE_4__ {TYPE_1__ txdma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int *) ;

void FUNC_1(struct et131x_adapter *VAR_4)
{
 u32 VAR_5 = VAR_2;
 if (VAR_4->RegistryPhyLoopbk)

  VAR_5 |= VAR_1;
 else



  VAR_5 |= VAR_3 << VAR_0;
 FUNC_0(VAR_5, &VAR_4->regs->txdma.csr);
}
