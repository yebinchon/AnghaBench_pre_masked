
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ SAFTE_EnclosureManagementEnabled; int GeometryTranslationSectors; int GeometryTranslationHeads; int SegmentSize; int StripeSize; } ;
struct TYPE_6__ {scalar_t__ IO_Address; scalar_t__ FirmwareType; TYPE_1__ V1; int ControllerScatterGatherLimit; int DriverScatterGatherLimit; int DriverQueueDepth; int MaxBlocksPerCommand; int ControllerQueueDepth; int IRQ_Channel; scalar_t__ BaseAddress; int PCI_Address; int Function; int Device; int Bus; int MemorySize; int Channels; int FirmwareVersion; int ModelName; } ;
typedef TYPE_2__ DAC960_Controller_T ;


 int FUNC_0 (char*,TYPE_2__*,...) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_1(DAC960_Controller_T
          *VAR_1)
{
  FUNC_0("Configuring Mylex %s PCI RAID Controller\n",
       VAR_1, VAR_1->ModelName);
  FUNC_0("  Firmware Version: %s, Channels: %d, Memory Size: %dMB\n",
       VAR_1, VAR_1->FirmwareVersion,
       VAR_1->Channels, VAR_1->MemorySize);
  FUNC_0("  PCI Bus: %d, Device: %d, Function: %d, I/O Address: ",
       VAR_1, VAR_1->Bus,
       VAR_1->Device, VAR_1->Function);
  if (VAR_1->IO_Address == 0)
    FUNC_0("Unassigned\n", VAR_1);
  else FUNC_0("0x%X\n", VAR_1, VAR_1->IO_Address);
  FUNC_0("  PCI Address: 0x%X mapped at 0x%lX, IRQ Channel: %d\n",
       VAR_1, VAR_1->PCI_Address,
       (unsigned long) VAR_1->BaseAddress,
       VAR_1->IRQ_Channel);
  FUNC_0("  Controller Queue Depth: %d, "
       "Maximum Blocks per Command: %d\n",
       VAR_1, VAR_1->ControllerQueueDepth,
       VAR_1->MaxBlocksPerCommand);
  FUNC_0("  Driver Queue Depth: %d, "
       "Scatter/Gather Limit: %d of %d Segments\n",
       VAR_1, VAR_1->DriverQueueDepth,
       VAR_1->DriverScatterGatherLimit,
       VAR_1->ControllerScatterGatherLimit);
  if (VAR_1->FirmwareType == VAR_0)
    {
      FUNC_0("  Stripe Size: %dKB, Segment Size: %dKB, "
    "BIOS Geometry: %d/%d\n", VAR_1,
    VAR_1->V1.StripeSize,
    VAR_1->V1.SegmentSize,
    VAR_1->V1.GeometryTranslationHeads,
    VAR_1->V1.GeometryTranslationSectors);
      if (VAR_1->V1.SAFTE_EnclosureManagementEnabled)
 FUNC_0("  SAF-TE Enclosure Management Enabled\n", VAR_1);
    }
  return 1;
}
