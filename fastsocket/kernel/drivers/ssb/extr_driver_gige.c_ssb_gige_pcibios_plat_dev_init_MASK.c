
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int end; int start; int name; } ;
struct ssb_gige {TYPE_2__ mem_resource; int pci_ops; } ;
struct ssb_device {int dummy; } ;
struct resource {int flags; int end; int start; int name; } ;
struct pci_dev {scalar_t__ irq; struct resource* resource; TYPE_1__* bus; } ;
struct TYPE_3__ {int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*,int ,scalar_t__) ;
 struct ssb_gige* FUNC_1 (struct ssb_device*) ;
 scalar_t__ FUNC_2 (struct ssb_device*) ;

int FUNC_3(struct ssb_device *VAR_4,
       struct pci_dev *VAR_5)
{
 struct ssb_gige *VAR_6 = FUNC_1(VAR_4);
 struct resource *VAR_7;

 if (VAR_5->bus->ops != &VAR_6->pci_ops) {

  return -VAR_0;
 }


 VAR_7 = &(VAR_5->resource[0]);
 VAR_7->flags = VAR_1 | VAR_2;
 VAR_7->name = VAR_6->mem_resource.name;
 VAR_7->start = VAR_6->mem_resource.start;
 VAR_7->end = VAR_6->mem_resource.end;


 VAR_5->irq = FUNC_2(VAR_4) + 2;
 FUNC_0(VAR_5, VAR_3, VAR_5->irq);

 return 0;
}
