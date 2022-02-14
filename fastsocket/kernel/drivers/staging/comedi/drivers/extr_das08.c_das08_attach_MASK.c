
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {scalar_t__ vendor; scalar_t__ device; int devfn; TYPE_1__* bus; } ;
struct das08_private_struct {int dummy; } ;
struct comedi_device {int minor; } ;
struct comedi_devconfig {unsigned long* options; } ;
struct TYPE_6__ {unsigned long pci_iobase; struct pci_dev* pdev; } ;
struct TYPE_5__ {scalar_t__ bustype; } ;
struct TYPE_4__ {unsigned long number; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 unsigned long FUNC_0 (int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (struct comedi_device*,int) ;
 scalar_t__ FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct comedi_device*,unsigned long) ;
 TYPE_3__* VAR_12 ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;
 scalar_t__ VAR_13 ;
 struct pci_dev* FUNC_6 (int ,int ,struct pci_dev*) ;
 unsigned long FUNC_7 (struct pci_dev*,int) ;
 int FUNC_8 (char*,...) ;
 TYPE_2__* VAR_14 ;

__attribute__((used)) static int FUNC_9(struct comedi_device *VAR_15, struct comedi_devconfig *VAR_16)
{
 int VAR_17;
 unsigned long VAR_18;





 VAR_17 = FUNC_1(VAR_15, sizeof(struct das08_private_struct));
 if (VAR_17 < 0)
  return VAR_17;

 FUNC_8("comedi%d: das08: ", VAR_15->minor);

 if (VAR_14->bustype == VAR_13) {
  FUNC_8("this driver has not been built with PCI support.\n");
  return -VAR_4;

 } else {
  VAR_18 = VAR_16->options[0];
 }
 FUNC_8("\n");

 return FUNC_3(VAR_15, VAR_18);
}
