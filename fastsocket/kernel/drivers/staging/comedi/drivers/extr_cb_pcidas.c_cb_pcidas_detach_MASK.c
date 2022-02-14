
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ subdevices; scalar_t__ irq; int minor; } ;
struct TYPE_2__ {scalar_t__ pci_dev; scalar_t__ s5933_config; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (scalar_t__,struct comedi_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (struct comedi_device*,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_3)
{
 FUNC_5("comedi%d: cb_pcidas: remove\n", VAR_3->minor);

 if (VAR_2) {
  if (VAR_2->s5933_config) {

   FUNC_3(VAR_1,
        VAR_2->s5933_config + VAR_0);




  }
 }
 if (VAR_3->irq)
  FUNC_1(VAR_3->irq, VAR_3);
 if (VAR_3->subdevices)
  FUNC_6(VAR_3, VAR_3->subdevices + 2);
 if (VAR_2 && VAR_2->pci_dev) {
  if (VAR_2->s5933_config) {
   FUNC_0(VAR_2->pci_dev);
  }
  FUNC_4(VAR_2->pci_dev);
 }

 return 0;
}
