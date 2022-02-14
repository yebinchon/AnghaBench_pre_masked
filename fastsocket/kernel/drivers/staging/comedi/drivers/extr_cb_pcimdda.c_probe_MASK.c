
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pci_dev {scalar_t__ vendor; scalar_t__ device; int devfn; TYPE_1__* bus; } ;
struct comedi_device {TYPE_4__* board_ptr; } ;
struct comedi_devconfig {scalar_t__* options; } ;
struct TYPE_9__ {scalar_t__ device_id; } ;
struct TYPE_8__ {unsigned long registers; scalar_t__ dio_registers; struct pci_dev* pci_dev; } ;
struct TYPE_7__ {scalar_t__ dio_offset; int name; } ;
struct TYPE_6__ {scalar_t__ number; } ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;
 scalar_t__ FUNC_2 (struct pci_dev*,int ) ;
 TYPE_3__* VAR_6 ;
 struct pci_dev* FUNC_3 (int ,int ,struct pci_dev*) ;
 unsigned long FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (char*) ;
 TYPE_2__* VAR_7 ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_8, const struct comedi_devconfig *VAR_9)
{
 struct pci_dev *VAR_10;
 int VAR_11;
 unsigned long VAR_12;

 for (VAR_10 = FUNC_3(VAR_2, VAR_2, ((void*)0));
      VAR_10 != ((void*)0);
      VAR_10 = FUNC_3(VAR_2, VAR_2, VAR_10)) {

  if (VAR_10->vendor != VAR_3)
   continue;

  for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_5); VAR_11++) {
   if (VAR_5[VAR_11].device_id != VAR_10->device)
    continue;

   if (VAR_9->options[0] || VAR_9->options[1]) {

    if (VAR_10->bus->number != VAR_9->options[0] ||
        FUNC_1(VAR_10->devfn) != VAR_9->options[1]) {
     continue;
    }
   }


   VAR_6->pci_dev = VAR_10;
   VAR_8->board_ptr = VAR_5 + VAR_11;
   if (FUNC_2(VAR_10, VAR_7->name)) {
    FUNC_5
        ("cb_pcimdda: Failed to enable PCI device and request regions\n");
    return -VAR_0;
   }
   VAR_12 =
       FUNC_4(VAR_6->pci_dev,
            VAR_4);
   VAR_6->registers = VAR_12;
   VAR_6->dio_registers
       = VAR_6->registers + VAR_7->dio_offset;
   return 0;
  }
 }

 FUNC_5("cb_pcimdda: No supported ComputerBoards/MeasurementComputing "
        "card found at the requested position\n");
 return -VAR_1;
}
