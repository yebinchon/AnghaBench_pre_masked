
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_device {int irq; } ;
struct aer_rpc {scalar_t__ prod_idx; scalar_t__ cons_idx; int wait_release; scalar_t__ isr; } ;


 int FUNC_0 (struct aer_rpc*) ;
 int FUNC_1 (int ,struct pcie_device*) ;
 struct aer_rpc* FUNC_2 (struct pcie_device*) ;
 int FUNC_3 (struct aer_rpc*) ;
 int FUNC_4 (struct pcie_device*,int *) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void FUNC_6(struct pcie_device *VAR_0)
{
 struct aer_rpc *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1) {

  if (VAR_1->isr)
   FUNC_1(VAR_0->irq, VAR_0);

  FUNC_5(VAR_1->wait_release, VAR_1->prod_idx == VAR_1->cons_idx);

  FUNC_0(VAR_1);
  FUNC_3(VAR_1);
  FUNC_4(VAR_0, ((void*)0));
 }
}
