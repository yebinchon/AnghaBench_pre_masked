
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {scalar_t__ vendor; scalar_t__ device; int devfn; TYPE_1__* bus; } ;
struct contec_private {int dummy; } ;
struct comedi_subdevice {int n_chan; int maxdata; int insn_bits; int * range_table; int subdev_flags; int type; } ;
struct comedi_device {struct comedi_subdevice* subdevices; scalar_t__ board_ptr; int iobase; int board_name; int minor; } ;
struct comedi_devconfig {scalar_t__* options; } ;
struct TYPE_6__ {struct pci_dev* pci_dev; } ;
struct TYPE_5__ {int name; } ;
struct TYPE_4__ {scalar_t__ number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct comedi_device*,int) ;
 scalar_t__ FUNC_2 (struct comedi_device*,int) ;
 scalar_t__ FUNC_3 (struct pci_dev*,char*) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_3__* VAR_12 ;
 struct pci_dev* FUNC_4 (int ,int ,struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (char*,...) ;
 int VAR_13 ;
 TYPE_2__* VAR_14 ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_15, struct comedi_devconfig *VAR_16)
{
 struct pci_dev *VAR_17;
 struct comedi_subdevice *VAR_18;

 FUNC_6("comedi%d: contec: ", VAR_15->minor);

 VAR_15->board_name = VAR_14->name;

 if (FUNC_1(VAR_15, sizeof(struct contec_private)) < 0)
  return -VAR_3;

 if (FUNC_2(VAR_15, 2) < 0)
  return -VAR_3;

 for (VAR_17 = FUNC_4(VAR_4, VAR_4, ((void*)0));
      VAR_17 != ((void*)0);
      VAR_17 = FUNC_4(VAR_4, VAR_4, VAR_17)) {

  if (VAR_17->vendor == VAR_6 &&
      VAR_17->device == VAR_5) {
   if (VAR_16->options[0] || VAR_16->options[1]) {

    if (VAR_16->options[0] != VAR_17->bus->number ||
        VAR_16->options[1] != FUNC_0(VAR_17->devfn)) {
     continue;
    }
   }
   VAR_12->pci_dev = VAR_17;
   if (FUNC_3(VAR_17, "contec_pci_dio")) {
    FUNC_6
        ("error enabling PCI device and request regions!\n");
    return -VAR_2;
   }
   VAR_15->iobase = FUNC_5(VAR_17, 0);
   FUNC_6(" base addr %lx ", VAR_15->iobase);

   VAR_15->board_ptr = VAR_9 + 0;

   VAR_18 = VAR_15->subdevices + 0;

   VAR_18->type = VAR_0;
   VAR_18->subdev_flags = VAR_7;
   VAR_18->n_chan = 16;
   VAR_18->maxdata = 1;
   VAR_18->range_table = &VAR_13;
   VAR_18->insn_bits = VAR_10;

   VAR_18 = VAR_15->subdevices + 1;
   VAR_18->type = VAR_1;
   VAR_18->subdev_flags = VAR_8;
   VAR_18->n_chan = 16;
   VAR_18->maxdata = 1;
   VAR_18->range_table = &VAR_13;
   VAR_18->insn_bits = VAR_11;

   FUNC_6("attached\n");

   return 1;
  }
 }

 FUNC_6("card not present!\n");

 return -VAR_2;
}
