
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pnp_dev {int dev; int capabilities; } ;
struct acpi_resource_vendor_typed {int dummy; } ;
struct acpi_resource_memory32 {int write_protect; int address_length; int minimum; } ;
struct acpi_resource_memory24 {int write_protect; int address_length; int minimum; } ;
struct acpi_resource_irq {int interrupt_count; int sharable; int polarity; int triggering; int * interrupts; } ;
struct acpi_resource_io {int io_decode; int address_length; int minimum; } ;
struct acpi_resource_fixed_memory32 {int write_protect; int address_length; int address; } ;
struct acpi_resource_fixed_io {int address_length; int address; } ;
struct acpi_resource_extended_irq {int interrupt_count; int sharable; int polarity; int triggering; int * interrupts; } ;
struct acpi_resource_dma {int * channels; int transfer; int bus_master; int type; int channel_count; } ;
struct TYPE_2__ {struct acpi_resource_extended_irq extended_irq; struct acpi_resource_fixed_memory32 fixed_memory32; struct acpi_resource_memory32 memory32; struct acpi_resource_memory24 memory24; struct acpi_resource_vendor_typed vendor_typed; struct acpi_resource_fixed_io fixed_io; struct acpi_resource_io io; struct acpi_resource_dma dma; struct acpi_resource_irq irq; } ;
struct acpi_resource {int type; TYPE_1__ data; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct pnp_dev*,int ,int ,int ) ;
 int FUNC_2 (struct pnp_dev*,int ,int) ;
 int FUNC_3 (struct pnp_dev*,int ,int) ;
 int FUNC_4 (struct pnp_dev*) ;
 int FUNC_5 (struct pnp_dev*,struct acpi_resource*) ;
 int FUNC_6 (struct pnp_dev*,struct acpi_resource*) ;
 int FUNC_7 (struct pnp_dev*,int ,int ,int ) ;
 int FUNC_8 (struct pnp_dev*,int ,int ,int ,int ) ;
 int FUNC_9 (struct pnp_dev*,int ,int ,int ) ;
 int FUNC_10 (struct pnp_dev*,struct acpi_resource_vendor_typed*) ;

__attribute__((used)) static acpi_status FUNC_11(struct acpi_resource *VAR_5,
           void *VAR_6)
{
 struct pnp_dev *VAR_7 = VAR_6;
 struct acpi_resource_irq *VAR_8;
 struct acpi_resource_dma *VAR_9;
 struct acpi_resource_io *VAR_10;
 struct acpi_resource_fixed_io *VAR_11;
 struct acpi_resource_vendor_typed *VAR_12;
 struct acpi_resource_memory24 *VAR_13;
 struct acpi_resource_memory32 *VAR_14;
 struct acpi_resource_fixed_memory32 *VAR_15;
 struct acpi_resource_extended_irq *VAR_16;
 int VAR_17, VAR_18;

 switch (VAR_5->type) {
 case 132:




  VAR_8 = &VAR_5->data.irq;
  if (VAR_8->interrupt_count == 0)
   FUNC_3(VAR_7, 0, VAR_3);
  else {
   for (VAR_17 = 0; VAR_17 < VAR_8->interrupt_count; VAR_17++) {
    FUNC_8(VAR_7,
     VAR_8->interrupts[VAR_17],
     VAR_8->triggering,
     VAR_8->polarity,
        VAR_8->sharable);
   }






   if (FUNC_4(VAR_7) && VAR_8->interrupt_count > 1) {
    FUNC_0(&VAR_7->dev, "multiple interrupts in "
      "_CRS descriptor; configuration can't "
      "be changed\n");
    VAR_7->capabilities &= ~VAR_4;
   }
  }
  break;

 case 141:
  VAR_9 = &VAR_5->data.dma;
  if (VAR_9->channel_count > 0 && VAR_9->channels[0] != (u8) -1)
   VAR_18 = FUNC_1(VAR_7, VAR_9->type, VAR_9->bus_master,
       VAR_9->transfer);
  else
   VAR_18 = VAR_3;
  FUNC_2(VAR_7, VAR_9->channels[0], VAR_18);
  break;

 case 133:
  VAR_10 = &VAR_5->data.io;
  FUNC_7(VAR_7,
   VAR_10->minimum,
   VAR_10->address_length,
   VAR_10->io_decode);
  break;

 case 129:
 case 140:
  break;

 case 136:
  VAR_11 = &VAR_5->data.fixed_io;
  FUNC_7(VAR_7,
   VAR_11->address,
   VAR_11->address_length,
   VAR_0);
  break;

 case 128:
  VAR_12 = &VAR_5->data.vendor_typed;
  FUNC_10(VAR_7, VAR_12);
  break;

 case 139:
  break;

 case 131:
  VAR_13 = &VAR_5->data.memory24;
  FUNC_9(VAR_7,
   VAR_13->minimum,
   VAR_13->address_length,
   VAR_13->write_protect);
  break;
 case 130:
  VAR_14 = &VAR_5->data.memory32;
  FUNC_9(VAR_7,
   VAR_14->minimum,
   VAR_14->address_length,
   VAR_14->write_protect);
  break;
 case 135:
  VAR_15 = &VAR_5->data.fixed_memory32;
  FUNC_9(VAR_7,
   VAR_15->address,
   VAR_15->address_length,
   VAR_15->write_protect);
  break;
 case 144:
 case 143:
 case 142:
  FUNC_5(VAR_7, VAR_5);
  break;

 case 138:
  FUNC_6(VAR_7, VAR_5);
  break;

 case 137:
  VAR_16 = &VAR_5->data.extended_irq;

  if (VAR_16->interrupt_count == 0)
   FUNC_3(VAR_7, 0, VAR_3);
  else {
   for (VAR_17 = 0; VAR_17 < VAR_16->interrupt_count; VAR_17++) {
    FUNC_8(VAR_7,
     VAR_16->interrupts[VAR_17],
     VAR_16->triggering,
     VAR_16->polarity,
     VAR_16->sharable);
   }






   if (FUNC_4(VAR_7) &&
       VAR_16->interrupt_count > 1) {
    FUNC_0(&VAR_7->dev, "multiple interrupts in "
      "_CRS descriptor; configuration can't "
      "be changed\n");
    VAR_7->capabilities &= ~VAR_4;
   }
  }
  break;

 case 134:
  break;

 default:
  FUNC_0(&VAR_7->dev, "unknown resource type %d in _CRS\n",
    VAR_5->type);
  return VAR_1;
 }

 return VAR_2;
}
