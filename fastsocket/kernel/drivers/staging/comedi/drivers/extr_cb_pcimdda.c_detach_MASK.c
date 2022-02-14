
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {int minor; scalar_t__ subdevices; } ;
struct TYPE_4__ {scalar_t__ attached_successfully; scalar_t__ pci_dev; scalar_t__ registers; scalar_t__ attached_to_8255; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (scalar_t__) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (struct comedi_device*,scalar_t__) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_2)
{
 if (VAR_0) {

  if (VAR_2->subdevices && VAR_0->attached_to_8255) {

   FUNC_3(VAR_2, VAR_2->subdevices + 2);
   VAR_0->attached_to_8255 = 0;
  }

  if (VAR_0->pci_dev) {
   if (VAR_0->registers) {
    FUNC_0(VAR_0->pci_dev);
   }
   FUNC_1(VAR_0->pci_dev);
  }

  if (VAR_0->attached_successfully && VAR_1)
   FUNC_2("comedi%d: %s: detached\n", VAR_2->minor,
          VAR_1->name);

 }

 return 0;
}
