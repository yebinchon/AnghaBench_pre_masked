
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t u32 ;
struct seq_file {scalar_t__ private; } ;
struct TYPE_10__ {scalar_t__ virt; } ;
struct i2o_controller {TYPE_1__ hrt; } ;
struct TYPE_18__ {int num_entries; int entry_len; TYPE_8__* hrt_entry; scalar_t__ hrt_version; } ;
typedef TYPE_9__ i2o_hrt ;
struct TYPE_15__ {int PciDeviceID; int PciVendorID; int PciFunctionNumber; int PciDeviceNumber; int PciBusNumber; } ;
struct TYPE_14__ {int McaSlotNumber; int McaBaseMemoryAddress; int McaBaseIOPort; } ;
struct TYPE_13__ {int EisaSlotNumber; int EisaBaseMemoryAddress; int EisaBaseIOPort; } ;
struct TYPE_12__ {int CSN; int IsaBaseMemoryAddress; int IsaBaseIOPort; } ;
struct TYPE_11__ {int LbBaseMemoryAddress; int LbBaseIOPort; } ;
struct TYPE_16__ {TYPE_6__ pci_bus; TYPE_5__ mca_bus; TYPE_4__ eisa_bus; TYPE_3__ isa_bus; TYPE_2__ local_bus; } ;
struct TYPE_17__ {int bus_type; TYPE_7__ bus; int parent_tid; int adapter_id; } ;







 int * VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,...) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_1, void *VAR_2)
{
 struct i2o_controller *VAR_3 = (struct i2o_controller *)VAR_1->private;
 i2o_hrt *VAR_4 = (i2o_hrt *) VAR_3->hrt.virt;
 u32 VAR_5;
 int VAR_6;

 if (VAR_4->hrt_version) {
  FUNC_0(VAR_1,
      "HRT table for controller is too new a version.\n");
  return 0;
 }

 FUNC_0(VAR_1, "HRT has %d entries of %d bytes each.\n",
     VAR_4->num_entries, VAR_4->entry_len << 2);

 for (VAR_6 = 0; VAR_6 < VAR_4->num_entries; VAR_6++) {
  FUNC_0(VAR_1, "Entry %d:\n", VAR_6);
  FUNC_0(VAR_1, "   Adapter ID: %0#10x\n",
      VAR_4->hrt_entry[VAR_6].adapter_id);
  FUNC_0(VAR_1, "   Controlling tid: %0#6x\n",
      VAR_4->hrt_entry[VAR_6].parent_tid);

  if (VAR_4->hrt_entry[VAR_6].bus_type != 0x80) {
   VAR_5 = VAR_4->hrt_entry[VAR_6].bus_type;
   FUNC_0(VAR_1, "   %s Information\n",
       VAR_0[VAR_5]);

   switch (VAR_5) {
   case 130:
    FUNC_0(VAR_1, "     IOBase: %0#6x,",
        VAR_4->hrt_entry[VAR_6].bus.local_bus.
        LbBaseIOPort);
    FUNC_0(VAR_1, " MemoryBase: %0#10x\n",
        VAR_4->hrt_entry[VAR_6].bus.local_bus.
        LbBaseMemoryAddress);
    break;

   case 131:
    FUNC_0(VAR_1, "     IOBase: %0#6x,",
        VAR_4->hrt_entry[VAR_6].bus.isa_bus.
        IsaBaseIOPort);
    FUNC_0(VAR_1, " MemoryBase: %0#10x,",
        VAR_4->hrt_entry[VAR_6].bus.isa_bus.
        IsaBaseMemoryAddress);
    FUNC_0(VAR_1, " CSN: %0#4x,",
        VAR_4->hrt_entry[VAR_6].bus.isa_bus.CSN);
    break;

   case 132:
    FUNC_0(VAR_1, "     IOBase: %0#6x,",
        VAR_4->hrt_entry[VAR_6].bus.eisa_bus.
        EisaBaseIOPort);
    FUNC_0(VAR_1, " MemoryBase: %0#10x,",
        VAR_4->hrt_entry[VAR_6].bus.eisa_bus.
        EisaBaseMemoryAddress);
    FUNC_0(VAR_1, " Slot: %0#4x,",
        VAR_4->hrt_entry[VAR_6].bus.eisa_bus.
        EisaSlotNumber);
    break;

   case 129:
    FUNC_0(VAR_1, "     IOBase: %0#6x,",
        VAR_4->hrt_entry[VAR_6].bus.mca_bus.
        McaBaseIOPort);
    FUNC_0(VAR_1, " MemoryBase: %0#10x,",
        VAR_4->hrt_entry[VAR_6].bus.mca_bus.
        McaBaseMemoryAddress);
    FUNC_0(VAR_1, " Slot: %0#4x,",
        VAR_4->hrt_entry[VAR_6].bus.mca_bus.
        McaSlotNumber);
    break;

   case 128:
    FUNC_0(VAR_1, "     Bus: %0#4x",
        VAR_4->hrt_entry[VAR_6].bus.pci_bus.
        PciBusNumber);
    FUNC_0(VAR_1, " Dev: %0#4x",
        VAR_4->hrt_entry[VAR_6].bus.pci_bus.
        PciDeviceNumber);
    FUNC_0(VAR_1, " Func: %0#4x",
        VAR_4->hrt_entry[VAR_6].bus.pci_bus.
        PciFunctionNumber);
    FUNC_0(VAR_1, " Vendor: %0#6x",
        VAR_4->hrt_entry[VAR_6].bus.pci_bus.
        PciVendorID);
    FUNC_0(VAR_1, " Device: %0#6x\n",
        VAR_4->hrt_entry[VAR_6].bus.pci_bus.
        PciDeviceID);
    break;

   default:
    FUNC_0(VAR_1, "      Unsupported Bus Type\n");
   }
  } else
   FUNC_0(VAR_1, "   Unknown Bus Type\n");
 }

 return 0;
}
