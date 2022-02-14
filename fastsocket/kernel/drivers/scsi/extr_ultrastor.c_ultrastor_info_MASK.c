
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {int slot; int interrupt; int port_address; int dma_channel; scalar_t__ bios_segment; scalar_t__ subversion; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*,char*,int,int,...) ;

__attribute__((used)) static const char *FUNC_1(struct Scsi_Host * VAR_1)
{
    static char VAR_2[64];

    if (VAR_0.slot)
      FUNC_0(VAR_2, "UltraStor 24F SCSI @ Slot %u IRQ%u",
       VAR_0.slot, VAR_0.interrupt);
    else if (VAR_0.subversion)
      FUNC_0(VAR_2, "UltraStor 34F SCSI @ Port %03X BIOS %05X IRQ%u",
       VAR_0.port_address, (int)VAR_0.bios_segment,
       VAR_0.interrupt);
    else
      FUNC_0(VAR_2, "UltraStor 14F SCSI @ Port %03X BIOS %05X IRQ%u DMA%u",
       VAR_0.port_address, (int)VAR_0.bios_segment,
       VAR_0.interrupt, VAR_0.dma_channel);
    return VAR_2;
}
