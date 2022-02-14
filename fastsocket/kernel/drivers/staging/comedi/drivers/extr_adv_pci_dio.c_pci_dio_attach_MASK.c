
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct pci_dio_private {int dummy; } ;
struct pci_dev {scalar_t__ vendor; scalar_t__ device; int devfn; TYPE_1__* bus; } ;
struct comedi_subdevice {int type; } ;
struct comedi_device {unsigned long iobase; struct comedi_subdevice* subdevices; int board_name; TYPE_8__* board_ptr; int minor; } ;
struct comedi_devconfig {scalar_t__* options; } ;
struct TYPE_16__ {scalar_t__ vendor_id; scalar_t__ device_id; } ;
struct TYPE_15__ {int valid; } ;
struct TYPE_14__ {int driver_name; } ;
struct TYPE_13__ {scalar_t__ chans; } ;
struct TYPE_12__ {scalar_t__ chans; } ;
struct TYPE_11__ {scalar_t__ cardtype; TYPE_5__ boardid; TYPE_2__* sdio; TYPE_4__* sdo; TYPE_5__* sdi; int name; int main_pci_region; } ;
struct TYPE_10__ {int regs; scalar_t__ addr; } ;
struct TYPE_9__ {scalar_t__ number; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_device*,struct comedi_devconfig*,struct pci_dev*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (struct comedi_device*,int) ;
 int FUNC_4 (struct comedi_device*,int) ;
 TYPE_8__* VAR_9 ;
 scalar_t__ FUNC_5 (struct pci_dev*,int ) ;
 TYPE_7__* VAR_10 ;
 TYPE_6__ VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (struct comedi_device*,struct comedi_devconfig*) ;
 int FUNC_7 (struct comedi_device*,struct comedi_subdevice*,TYPE_5__*,int) ;
 int FUNC_8 (struct comedi_device*,struct comedi_subdevice*,TYPE_4__*,int) ;
 int FUNC_9 (struct comedi_device*) ;
 struct pci_dev* FUNC_10 (int ,int ,struct pci_dev*) ;
 unsigned long FUNC_11 (struct pci_dev*,int ) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (struct comedi_device*,struct comedi_subdevice*,int *,scalar_t__) ;
 TYPE_3__* VAR_13 ;

__attribute__((used)) static int FUNC_14(struct comedi_device *VAR_14,
     struct comedi_devconfig *VAR_15)
{
 struct comedi_subdevice *VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
 unsigned long VAR_22;
 struct pci_dev *VAR_23;

 FUNC_12("comedi%d: adv_pci_dio: ", VAR_14->minor);

 VAR_17 = FUNC_3(VAR_14, sizeof(struct pci_dio_private));
 if (VAR_17 < 0) {
  FUNC_12(", Error: Cann't allocate private memory!\n");
  return -VAR_2;
 }

 for (VAR_23 = FUNC_10(VAR_6, VAR_6, ((void*)0));
      VAR_23 != ((void*)0);
      VAR_23 = FUNC_10(VAR_6, VAR_6, VAR_23)) {

  for (VAR_20 = 0; VAR_20 < VAR_12; ++VAR_20) {
   if (VAR_9[VAR_20].vendor_id != VAR_23->vendor)
    continue;
   if (VAR_9[VAR_20].device_id != VAR_23->device)
    continue;

   if (VAR_15->options[0] || VAR_15->options[1]) {

    if (VAR_23->bus->number != VAR_15->options[0] ||
        FUNC_2(VAR_23->devfn) != VAR_15->options[1]) {
     continue;
    }
   }
   VAR_17 = FUNC_0(VAR_14, VAR_15, VAR_23);
   if (VAR_17 != 1)
    continue;
   VAR_14->board_ptr = VAR_9 + VAR_20;
   break;
  }
  if (VAR_14->board_ptr)
   break;
 }

 if (!VAR_14->board_ptr) {
  FUNC_12(", Error: Requested type of the card was not found!\n");
  return -VAR_1;
 }

 if (FUNC_5(VAR_23, VAR_11.driver_name)) {
  FUNC_12
      (", Error: Can't enable PCI device and request regions!\n");
  return -VAR_1;
 }
 VAR_22 = FUNC_11(VAR_23, VAR_13->main_pci_region);
 FUNC_12(", b:s:f=%d:%d:%d, io=0x%4lx",
        VAR_23->bus->number, FUNC_2(VAR_23->devfn),
        FUNC_1(VAR_23->devfn), VAR_22);

 VAR_14->iobase = VAR_22;
 VAR_14->board_name = VAR_13->name;

 if (VAR_13->cardtype == VAR_8) {
  VAR_19 = 4;
 } else {
  VAR_19 = 0;
  for (VAR_20 = 0; VAR_20 < VAR_4; VAR_20++)
   if (VAR_13->sdi[VAR_20].chans)
    VAR_19++;
  for (VAR_20 = 0; VAR_20 < VAR_5; VAR_20++)
   if (VAR_13->sdo[VAR_20].chans)
    VAR_19++;
  for (VAR_20 = 0; VAR_20 < VAR_3; VAR_20++)
   VAR_19 += VAR_13->sdio[VAR_20].regs;
  if (VAR_13->boardid.chans)
   VAR_19++;
 }

 VAR_17 = FUNC_4(VAR_14, VAR_19);
 if (VAR_17 < 0) {
  FUNC_12(", Error: Cann't allocate subdevice memory!\n");
  return VAR_17;
 }

 FUNC_12(".\n");

 VAR_18 = 0;

 for (VAR_20 = 0; VAR_20 < VAR_4; VAR_20++)
  if (VAR_13->sdi[VAR_20].chans) {
   VAR_16 = VAR_14->subdevices + VAR_18;
   FUNC_7(VAR_14, VAR_16, &VAR_13->sdi[VAR_20], VAR_18);
   VAR_18++;
  }

 for (VAR_20 = 0; VAR_20 < VAR_5; VAR_20++)
  if (VAR_13->sdo[VAR_20].chans) {
   VAR_16 = VAR_14->subdevices + VAR_18;
   FUNC_8(VAR_14, VAR_16, &VAR_13->sdo[VAR_20], VAR_18);
   VAR_18++;
  }

 for (VAR_20 = 0; VAR_20 < VAR_3; VAR_20++)
  for (VAR_21 = 0; VAR_21 < VAR_13->sdio[VAR_20].regs; VAR_21++) {
   VAR_16 = VAR_14->subdevices + VAR_18;
   FUNC_13(VAR_14, VAR_16, ((void*)0),
      VAR_14->iobase +
      VAR_13->sdio[VAR_20].addr +
      VAR_7 * VAR_21);
   VAR_18++;
  }

 if (VAR_13->boardid.chans) {
  VAR_16 = VAR_14->subdevices + VAR_18;
  VAR_16->type = VAR_0;
  FUNC_7(VAR_14, VAR_16, &VAR_13->boardid, VAR_18);
  VAR_18++;
 }

 if (VAR_13->cardtype == VAR_8)
  FUNC_6(VAR_14, VAR_15);

 VAR_10->valid = 1;

 FUNC_9(VAR_14);

 return 0;
}
