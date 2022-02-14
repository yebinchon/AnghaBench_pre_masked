
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ pci_dev_p; scalar_t__ plx_regbase; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_1)
{
 FUNC_0("In me4000_detach()\n");

 if (VAR_0) {
  if (VAR_0->pci_dev_p) {
   FUNC_3(VAR_1);
   if (VAR_0->plx_regbase)
    FUNC_1(VAR_0->pci_dev_p);
   FUNC_2(VAR_0->pci_dev_p);
  }
 }

 return 0;
}
