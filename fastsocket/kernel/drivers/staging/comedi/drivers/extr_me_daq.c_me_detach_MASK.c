
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ pci_device; scalar_t__ plx_regbase_size; scalar_t__ plx_regbase; scalar_t__ me_regbase; } ;


 int FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_1)
{
 if (VAR_0) {
  if (VAR_0->me_regbase) {
   FUNC_2(VAR_1);
   FUNC_1(VAR_0->me_regbase);
  }
  if (VAR_0->plx_regbase)
   FUNC_1(VAR_0->plx_regbase);
  if (VAR_0->pci_device) {
   if (VAR_0->plx_regbase_size)
    FUNC_0(VAR_0->pci_device);

   FUNC_3(VAR_0->pci_device);
  }
 }
 return 0;
}
