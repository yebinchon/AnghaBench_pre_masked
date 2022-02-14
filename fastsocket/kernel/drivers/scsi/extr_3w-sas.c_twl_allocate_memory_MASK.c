
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int dma_addr_t ;
struct TYPE_3__ {unsigned long** generic_buffer_virt; int ** sense_buffer_virt; int * sense_buffer_phys; int * generic_buffer_phys; int ** command_packet_virt; int * command_packet_phys; int host; int tw_pci_dev; } ;
typedef TYPE_1__ TW_Device_Extension ;
typedef int TW_Command_Full ;
typedef int TW_Command_Apache_Header ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,char*) ;
 int VAR_1 ;
 int FUNC_1 (unsigned long*,int ,int) ;
 unsigned long* FUNC_2 (int ,int,int *) ;

__attribute__((used)) static int FUNC_3(TW_Device_Extension *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;
 dma_addr_t VAR_6;
 unsigned long *VAR_7;
 int VAR_8 = 1;

 VAR_7 = FUNC_2(VAR_2->tw_pci_dev, VAR_3*VAR_1, &VAR_6);
 if (!VAR_7) {
  FUNC_0(VAR_2->host, VAR_0, 0x5, "Memory allocation failed");
  goto out;
 }

 FUNC_1(VAR_7, 0, VAR_3*VAR_1);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  switch(VAR_4) {
  case 0:
   VAR_2->command_packet_phys[VAR_5] = VAR_6+(VAR_5*VAR_3);
   VAR_2->command_packet_virt[VAR_5] = (TW_Command_Full *)((unsigned char *)VAR_7 + (VAR_5*VAR_3));
   break;
  case 1:
   VAR_2->generic_buffer_phys[VAR_5] = VAR_6+(VAR_5*VAR_3);
   VAR_2->generic_buffer_virt[VAR_5] = (unsigned long *)((unsigned char *)VAR_7 + (VAR_5*VAR_3));
   break;
  case 2:
   VAR_2->sense_buffer_phys[VAR_5] = VAR_6+(VAR_5*VAR_3);
   VAR_2->sense_buffer_virt[VAR_5] = (TW_Command_Apache_Header *)((unsigned char *)VAR_7 + (VAR_5*VAR_3));
   break;
  }
 }
 VAR_8 = 0;
out:
 return VAR_8;
}
