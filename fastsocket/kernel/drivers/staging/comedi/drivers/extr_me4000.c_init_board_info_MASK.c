
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int irq; int device; int vendor; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int irq; int device_id; int vendor_id; int hw_revision; int serial_no; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct pci_dev*,int,int *) ;
 int FUNC_2 (struct pci_dev*,int,int *) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_2, struct pci_dev *VAR_3)
{
 int VAR_4;

 FUNC_0("In init_board_info()\n");






 VAR_4 = FUNC_2(VAR_3, 0x2C, &VAR_1->serial_no);
 if (VAR_4 != VAR_0)
  return VAR_4;


 VAR_4 = FUNC_1(VAR_3, 0x08, &VAR_1->hw_revision);
 if (VAR_4 != VAR_0)
  return VAR_4;


 VAR_1->vendor_id = VAR_3->vendor;


 VAR_1->device_id = VAR_3->device;


 VAR_1->irq = VAR_3->irq;

 return 0;
}
