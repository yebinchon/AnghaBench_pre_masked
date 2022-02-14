
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pci_dev {scalar_t__ vendor; scalar_t__ device; int devfn; TYPE_1__* bus; } ;
struct comedi_subdevice {int subdev_flags; int maxdata; int len_chanlist; int type; int * insn_read; int * insn_write; int * range_table; int n_chan; } ;
struct comedi_device {struct comedi_subdevice* subdevices; int board_name; TYPE_4__* board_ptr; int minor; } ;
struct comedi_devconfig {scalar_t__* options; } ;
struct cb_pcimdas_private {int dummy; } ;
struct TYPE_8__ {scalar_t__ device_id; int name; } ;
struct TYPE_7__ {void* BADR4; void* BADR3; void* BADR2; void* BADR1; void* BADR0; struct pci_dev* pci_dev; } ;
struct TYPE_6__ {int device_id; int ai_bits; int ao_bits; scalar_t__ has_dio; int ao_nchan; int ai_se_chans; int name; } ;
struct TYPE_5__ {scalar_t__ number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (struct comedi_device*,int) ;
 scalar_t__ FUNC_2 (struct comedi_device*,int) ;
 int * VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_4__* VAR_14 ;
 scalar_t__ FUNC_3 (struct pci_dev*,char*) ;
 TYPE_3__* VAR_15 ;
 struct pci_dev* FUNC_4 (int ,int ,struct pci_dev*) ;
 void* FUNC_5 (struct pci_dev*,int) ;
 int FUNC_6 (char*,...) ;
 int VAR_16 ;
 int FUNC_7 (struct comedi_device*,struct comedi_subdevice*,int *,void*) ;
 TYPE_2__* VAR_17 ;

__attribute__((used)) static int FUNC_8(struct comedi_device *VAR_18,
        struct comedi_devconfig *VAR_19)
{
 struct comedi_subdevice *VAR_20;
 struct pci_dev *VAR_21;
 int VAR_22;


 FUNC_6("comedi%d: cb_pcimdas: ", VAR_18->minor);




 if (FUNC_1(VAR_18, sizeof(struct cb_pcimdas_private)) < 0)
  return -VAR_4;




 FUNC_6("\n");

 for (VAR_21 = FUNC_4(VAR_6, VAR_6, ((void*)0));
      VAR_21 != ((void*)0);
      VAR_21 = FUNC_4(VAR_6, VAR_6, VAR_21)) {

  if (VAR_21->vendor != VAR_7)
   continue;

  for (VAR_22 = 0; VAR_22 < VAR_5; VAR_22++) {
   if (VAR_14[VAR_22].device_id !=
       VAR_21->device)
    continue;

   if (VAR_19->options[0] || VAR_19->options[1]) {

    if (VAR_21->bus->number != VAR_19->options[0] ||
        FUNC_0(VAR_21->devfn) != VAR_19->options[1]) {
     continue;
    }
   }
   VAR_15->pci_dev = VAR_21;
   VAR_18->board_ptr = VAR_14 + VAR_22;
   goto found;
  }
 }

 FUNC_6("No supported ComputerBoards/MeasurementComputing card found on "
        "requested position\n");
 return -VAR_3;

found:

 FUNC_6("Found %s on bus %i, slot %i\n", VAR_14[VAR_22].name,
        VAR_21->bus->number, FUNC_0(VAR_21->devfn));


 switch (VAR_17->device_id) {
 case 0x56:
  break;
 default:
  FUNC_6("THIS CARD IS UNSUPPORTED.\n"
         "PLEASE REPORT USAGE TO <mocelet@sucs.org>\n");
 };

 if (FUNC_3(VAR_21, "cb_pcimdas")) {
  FUNC_6(" Failed to enable PCI device and request regions\n");
  return -VAR_3;
 }

 VAR_15->BADR0 = FUNC_5(VAR_15->pci_dev, 0);
 VAR_15->BADR1 = FUNC_5(VAR_15->pci_dev, 1);
 VAR_15->BADR2 = FUNC_5(VAR_15->pci_dev, 2);
 VAR_15->BADR3 = FUNC_5(VAR_15->pci_dev, 3);
 VAR_15->BADR4 = FUNC_5(VAR_15->pci_dev, 4);
 VAR_18->board_name = VAR_17->name;





 if (FUNC_2(VAR_18, 3) < 0)
  return -VAR_4;

 VAR_20 = VAR_18->subdevices + 0;


 VAR_20->type = VAR_0;
 VAR_20->subdev_flags = VAR_9 | VAR_8;
 VAR_20->n_chan = VAR_17->ai_se_chans;
 VAR_20->maxdata = (1 << VAR_17->ai_bits) - 1;
 VAR_20->range_table = &VAR_16;
 VAR_20->len_chanlist = 1;

 VAR_20->insn_read = VAR_11;

 VAR_20 = VAR_18->subdevices + 1;

 VAR_20->type = VAR_1;
 VAR_20->subdev_flags = VAR_10;
 VAR_20->n_chan = VAR_17->ao_nchan;
 VAR_20->maxdata = 1 << VAR_17->ao_bits;
 VAR_20->range_table = &VAR_16;
 VAR_20->insn_write = &VAR_13;
 VAR_20->insn_read = &VAR_12;

 VAR_20 = VAR_18->subdevices + 2;

 if (VAR_17->has_dio) {
  FUNC_7(VAR_18, VAR_20, ((void*)0), VAR_15->BADR4);
 } else {
  VAR_20->type = VAR_2;
 }

 FUNC_6("attached\n");

 return 1;
}
