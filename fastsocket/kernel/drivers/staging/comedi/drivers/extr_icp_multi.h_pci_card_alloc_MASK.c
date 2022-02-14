
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcilst_struct {int used; TYPE_1__* pcidev; int irq; int * io_addr; } ;
struct TYPE_3__ {int irq; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct pcilst_struct *VAR_0)
{
 int VAR_1;

 if (!VAR_0) {
  FUNC_2(" - BUG!! inova is NULL!\n");
  return -1;
 }

 if (VAR_0->used)
  return 1;
 if (FUNC_0(VAR_0->pcidev, "icp_multi")) {
  FUNC_2(" - Can't enable PCI device and request regions!\n");
  return -1;
 }

 for (VAR_1 = 0; VAR_1 < 5; VAR_1++)
  VAR_0->io_addr[VAR_1] = FUNC_1(VAR_0->pcidev, VAR_1);
 VAR_0->irq = VAR_0->pcidev->irq;
 VAR_0->used = 1;
 return 0;
}
