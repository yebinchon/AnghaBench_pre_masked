
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int subsystem_vendor; scalar_t__ subsystem_device; int devfn; TYPE_1__* bus; } ;
struct daqboard2000_private {int dummy; } ;
struct comedi_subdevice {int subdev_flags; int n_chan; int maxdata; int * range_table; int insn_write; int insn_read; int type; } ;
struct comedi_device {unsigned long iobase; struct comedi_subdevice* subdevices; int board_name; TYPE_4__* board_ptr; int minor; } ;
struct comedi_devconfig {int* options; } ;
struct TYPE_8__ {int id; int name; } ;
struct TYPE_7__ {int got_regions; void* daq; void* plx; struct pci_dev* pci_dev; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {int number; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (struct comedi_device*,int) ;
 TYPE_4__* VAR_10 ;
 void* FUNC_3 (int*,int ) ;
 int FUNC_4 (struct pci_dev*,char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (struct comedi_device*) ;
 int FUNC_6 (struct comedi_device*) ;
 TYPE_3__* VAR_15 ;
 int FUNC_7 (struct comedi_device*,void*,unsigned int) ;
 void* FUNC_8 (int ,int ) ;
 int VAR_16 ;
 struct pci_dev* FUNC_9 (int,int,struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,int) ;
 int FUNC_11 (char*,...) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_12 (void*) ;
 int FUNC_13 (struct comedi_device*,struct comedi_subdevice*,int ,unsigned long) ;
 TYPE_2__* VAR_19 ;

__attribute__((used)) static int FUNC_14(struct comedi_device *VAR_20,
          struct comedi_devconfig *VAR_21)
{
 int VAR_22 = 0;
 struct comedi_subdevice *VAR_23;
 struct pci_dev *VAR_24 = ((void*)0);
 void *VAR_25;
 unsigned int VAR_26;
 int VAR_27, VAR_28;

 FUNC_11("comedi%d: daqboard2000:", VAR_20->minor);

 VAR_27 = VAR_21->options[0];
 VAR_28 = VAR_21->options[1];

 VAR_22 = FUNC_1(VAR_20, sizeof(struct daqboard2000_private));
 if (VAR_22 < 0) {
  return -VAR_6;
 }
 for (VAR_24 = FUNC_9(0x1616, 0x0409, ((void*)0));
      VAR_24 != ((void*)0); VAR_24 = FUNC_9(0x1616, 0x0409, VAR_24)) {
  if (VAR_27 || VAR_28) {

   if (VAR_24->bus->number != VAR_27 ||
       FUNC_0(VAR_24->devfn) != VAR_28) {
    continue;
   }
  }
  break;
 }
 if (!VAR_24) {
  if (VAR_27 || VAR_28)
   FUNC_11(" no daqboard2000 found at bus/slot: %d/%d\n",
          VAR_27, VAR_28);
  else
   FUNC_11(" no daqboard2000 found\n");
  return -VAR_5;
 } else {
  u32 VAR_29;
  int VAR_30;
  VAR_15->pci_dev = VAR_24;
  VAR_29 = ((u32) VAR_24->
        subsystem_device << 16) | VAR_24->subsystem_vendor;
  for (VAR_30 = 0; VAR_30 < VAR_16; VAR_30++) {
   if (VAR_10[VAR_30].id == VAR_29) {
    FUNC_11(" %s", VAR_10[VAR_30].name);
    VAR_20->board_ptr = VAR_10 + VAR_30;
   }
  }
  if (!VAR_20->board_ptr) {
   FUNC_11
       (" unknown subsystem id %08x (pretend it is an ids2)",
        VAR_29);
   VAR_20->board_ptr = VAR_10;
  }
 }

 VAR_22 = FUNC_4(VAR_24, "daqboard2000");
 if (VAR_22 < 0) {
  FUNC_11(" failed to enable PCI device and request regions\n");
  return -VAR_5;
 }
 VAR_15->got_regions = 1;
 VAR_15->plx =
     FUNC_8(FUNC_10(VAR_24, 0), VAR_4);
 VAR_15->daq =
     FUNC_8(FUNC_10(VAR_24, 2), VAR_3);
 if (!VAR_15->plx || !VAR_15->daq) {
  return -VAR_6;
 }

 VAR_22 = FUNC_2(VAR_20, 3);
 if (VAR_22 < 0)
  goto out;

 FUNC_12(VAR_15->plx + 0x6c);
 VAR_25 = FUNC_3(VAR_21->options, 0);
 VAR_26 = VAR_21->options[VAR_0];

 if (VAR_25 && VAR_26) {
  VAR_22 = FUNC_7(VAR_20, VAR_25, VAR_26);
 } else {
  FUNC_11("no FPGA initialization code, aborting\n");
  VAR_22 = -VAR_5;
 }
 if (VAR_22 < 0)
  goto out;
 FUNC_5(VAR_20);
 FUNC_6(VAR_20);






 VAR_20->iobase = (unsigned long)VAR_15->daq;

 VAR_20->board_name = VAR_19->name;

 VAR_23 = VAR_20->subdevices + 0;

 VAR_23->type = VAR_1;
 VAR_23->subdev_flags = VAR_8 | VAR_7;
 VAR_23->n_chan = 24;
 VAR_23->maxdata = 0xffff;
 VAR_23->insn_read = VAR_12;
 VAR_23->range_table = &VAR_17;

 VAR_23 = VAR_20->subdevices + 1;

 VAR_23->type = VAR_2;
 VAR_23->subdev_flags = VAR_9;
 VAR_23->n_chan = 2;
 VAR_23->maxdata = 0xffff;
 VAR_23->insn_read = VAR_13;
 VAR_23->insn_write = VAR_14;
 VAR_23->range_table = &VAR_18;

 VAR_23 = VAR_20->subdevices + 2;
 VAR_22 = FUNC_13(VAR_20, VAR_23, VAR_11,
      (unsigned long)(VAR_20->iobase + 0x40));

 FUNC_11("\n");
out:
 return VAR_22;
}
