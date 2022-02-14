
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * drv; int nic; int size; } ;
struct ipw2100_priv {TYPE_1__ status_queue; int pci_dev; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct ipw2100_priv *VAR_0)
{
 FUNC_0("enter\n");

 if (VAR_0->status_queue.drv) {
  FUNC_1(VAR_0->pci_dev, VAR_0->status_queue.size,
        VAR_0->status_queue.drv,
        VAR_0->status_queue.nic);
  VAR_0->status_queue.drv = ((void*)0);
 }

 FUNC_0("exit\n");
}
