
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssb_gige {int pci_ops; } ;
struct ssb_device {int dummy; } ;
struct pci_dev {TYPE_1__* bus; } ;
struct TYPE_2__ {int * ops; } ;


 int VAR_0 ;
 struct ssb_gige* FUNC_0 (struct ssb_device*) ;
 int FUNC_1 (struct ssb_device*) ;

int FUNC_2(struct ssb_device *VAR_1,
       const struct pci_dev *VAR_2)
{
 struct ssb_gige *VAR_3 = FUNC_0(VAR_1);

 if (VAR_2->bus->ops != &VAR_3->pci_ops) {

  return -VAR_0;
 }

 return FUNC_1(VAR_1) + 2;
}
