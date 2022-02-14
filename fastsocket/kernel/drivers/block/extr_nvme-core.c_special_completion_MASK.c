
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_dev {TYPE_1__* pci_dev; } ;
struct nvme_completion {int sq_id; int command_id; } ;
struct TYPE_2__ {int dev; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int *,char*,void*,...) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct nvme_dev *VAR_4, void *VAR_5,
      struct nvme_completion *VAR_6)
{
 if (VAR_5 == VAR_0)
  return;
 if (VAR_5 == VAR_2)
  return;
 if (VAR_5 == VAR_1) {
  FUNC_0(&VAR_4->pci_dev->dev,
    "completed id %d twice on queue %d\n",
    VAR_6->command_id, FUNC_1(&VAR_6->sq_id));
  return;
 }
 if (VAR_5 == VAR_3) {
  FUNC_0(&VAR_4->pci_dev->dev,
    "invalid id %d completed on queue %d\n",
    VAR_6->command_id, FUNC_1(&VAR_6->sq_id));
  return;
 }

 FUNC_0(&VAR_4->pci_dev->dev, "Unknown special completion %p\n", VAR_5);
}
