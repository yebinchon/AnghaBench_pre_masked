
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {int cardtype; } ;


 int FUNC_0 (char*) ;

 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (struct comedi_device*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_1)
{
 FUNC_0("adv_pci1710 EDBG: BGN: pci1710_reset(...)\n");
 switch (VAR_0->cardtype) {
 case 128:
  return FUNC_2(VAR_1);
 default:
  return FUNC_1(VAR_1);
 }
 FUNC_0("adv_pci1710 EDBG: END: pci1710_reset(...)\n");
}
