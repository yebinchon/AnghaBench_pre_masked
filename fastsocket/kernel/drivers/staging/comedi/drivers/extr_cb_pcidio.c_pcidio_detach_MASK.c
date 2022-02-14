
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {scalar_t__ subdevices; int minor; } ;
struct TYPE_4__ {scalar_t__ pci_dev; scalar_t__ dio_reg_base; } ;
struct TYPE_3__ {int n_8255; } ;


 int FUNC_0 (scalar_t__) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct comedi_device*,scalar_t__) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_2)
{
 FUNC_2("comedi%d: cb_pcidio: remove\n", VAR_2->minor);
 if (VAR_0) {
  if (VAR_0->pci_dev) {
   if (VAR_0->dio_reg_base) {
    FUNC_0(VAR_0->pci_dev);
   }
   FUNC_1(VAR_0->pci_dev);
  }
 }
 if (VAR_2->subdevices) {
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_1->n_8255; VAR_3++) {
   FUNC_3(VAR_2, VAR_2->subdevices + VAR_3);
  }
 }
 return 0;
}
