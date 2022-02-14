
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jr3_pci_subdev_private {int channel_no; int serial_no; } ;
struct jr3_pci_dev_private {int n_channels; } ;
struct comedi_device {TYPE_1__* subdevices; struct jr3_pci_dev_private* private; } ;
struct TYPE_2__ {struct jr3_pci_subdev_private* private; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_0)
{
 int VAR_1;
 struct jr3_pci_dev_private *VAR_2 = VAR_0->private;

 FUNC_0("jr3_pci_open\n");
 for (VAR_1 = 0; VAR_1 < VAR_2->n_channels; VAR_1++) {
  struct jr3_pci_subdev_private *VAR_3;

  VAR_3 = VAR_0->subdevices[VAR_1].private;
  if (VAR_3) {
   FUNC_0("serial: %p %d (%d)\n", VAR_3, VAR_3->serial_no,
          VAR_3->channel_no);
  }
 }
}
