
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pcidio_private {int dummy; } ;
struct pci_dev {scalar_t__ vendor; scalar_t__ device; int devfn; TYPE_1__* bus; } ;
struct comedi_device {scalar_t__ subdevices; int board_name; TYPE_3__* board_ptr; int minor; } ;
struct comedi_devconfig {scalar_t__* options; } ;
struct TYPE_9__ {scalar_t__ dio_reg_base; struct pci_dev* pci_dev; } ;
struct TYPE_8__ {scalar_t__ dev_id; int dioregs_badrindex; } ;
struct TYPE_7__ {int n_8255; int name; } ;
struct TYPE_6__ {scalar_t__ number; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (struct comedi_device*,int) ;
 scalar_t__ FUNC_3 (struct comedi_device*,int) ;
 scalar_t__ FUNC_4 (struct pci_dev*,int ) ;
 TYPE_4__* VAR_4 ;
 struct pci_dev* FUNC_5 (int ,int ,struct pci_dev*) ;
 scalar_t__ FUNC_6 (struct pci_dev*,int ) ;
 TYPE_3__* VAR_5 ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (struct comedi_device*,scalar_t__,int *,scalar_t__) ;
 TYPE_2__* VAR_6 ;

__attribute__((used)) static int FUNC_9(struct comedi_device *VAR_7, struct comedi_devconfig *VAR_8)
{
 struct pci_dev *VAR_9 = ((void*)0);
 int VAR_10;
 int VAR_11;

 FUNC_7("comedi%d: cb_pcidio: \n", VAR_7->minor);





 if (FUNC_2(VAR_7, sizeof(struct pcidio_private)) < 0)
  return -VAR_1;
 for (VAR_9 = FUNC_5(VAR_2, VAR_2, ((void*)0));
      VAR_9 != ((void*)0);
      VAR_9 = FUNC_5(VAR_2, VAR_2, VAR_9)) {

  if (VAR_9->vendor != VAR_3)
   continue;

  for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_5); VAR_10++) {
   if (VAR_5[VAR_10].dev_id != VAR_9->device)
    continue;


   if (VAR_8->options[0] || VAR_8->options[1]) {

    if (VAR_9->bus->number != VAR_8->options[0] ||
        FUNC_1(VAR_9->devfn) != VAR_8->options[1]) {
     continue;
    }
   }
   VAR_7->board_ptr = VAR_5 + VAR_10;
   goto found;
  }
 }

 FUNC_7("No supported ComputerBoards/MeasurementComputing card found on "
        "requested position\n");
 return -VAR_0;

found:





 VAR_7->board_name = VAR_6->name;

 VAR_4->pci_dev = VAR_9;
 FUNC_7("Found %s on bus %i, slot %i\n", VAR_6->name,
        VAR_4->pci_dev->bus->number,
        FUNC_1(VAR_4->pci_dev->devfn));
 if (FUNC_4(VAR_9, VAR_6->name)) {
  FUNC_7
      ("cb_pcidio: failed to enable PCI device and request regions\n");
  return -VAR_0;
 }
 VAR_4->dio_reg_base
     =
     FUNC_6(VAR_4->pci_dev,
          VAR_5[VAR_10].dioregs_badrindex);





 if (FUNC_3(VAR_7, VAR_6->n_8255) < 0)
  return -VAR_1;

 for (VAR_11 = 0; VAR_11 < VAR_6->n_8255; VAR_11++) {
  FUNC_8(VAR_7, VAR_7->subdevices + VAR_11,
     ((void*)0), VAR_4->dio_reg_base + VAR_11 * 4);
  FUNC_7(" subdev %d: base = 0x%lx\n", VAR_11,
         VAR_4->dio_reg_base + VAR_11 * 4);
 }

 FUNC_7("attached\n");
 return 1;
}
