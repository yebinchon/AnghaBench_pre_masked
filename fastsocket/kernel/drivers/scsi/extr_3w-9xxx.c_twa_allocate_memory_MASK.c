
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int dma_addr_t ;
struct TYPE_3__ {unsigned long** generic_buffer_virt; int * generic_buffer_phys; int ** command_packet_virt; int * command_packet_phys; int tw_pci_dev; int host; } ;
typedef TYPE_1__ TW_Device_Extension ;
typedef int TW_Command_Full ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,char*) ;
 int VAR_2 ;
 int FUNC_1 (unsigned long*,int ,int) ;
 unsigned long* FUNC_2 (int ,int,int *) ;
 int FUNC_3 (int ,int,unsigned long*,int ) ;

__attribute__((used)) static int FUNC_4(TW_Device_Extension *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;
 dma_addr_t VAR_7;
 unsigned long *VAR_8;
 int VAR_9 = 1;

 VAR_8 = FUNC_2(VAR_3->tw_pci_dev, VAR_4*VAR_2, &VAR_7);
 if (!VAR_8) {
  FUNC_0(VAR_3->host, VAR_1, 0x5, "Memory allocation failed");
  goto out;
 }

 if ((unsigned long)VAR_8 % (VAR_0)) {
  FUNC_0(VAR_3->host, VAR_1, 0x6, "Failed to allocate correctly aligned memory");
  FUNC_3(VAR_3->tw_pci_dev, VAR_4*VAR_2, VAR_8, VAR_7);
  goto out;
 }

 FUNC_1(VAR_8, 0, VAR_4*VAR_2);

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  switch(VAR_5) {
  case 0:
   VAR_3->command_packet_phys[VAR_6] = VAR_7+(VAR_6*VAR_4);
   VAR_3->command_packet_virt[VAR_6] = (TW_Command_Full *)((unsigned char *)VAR_8 + (VAR_6*VAR_4));
   break;
  case 1:
   VAR_3->generic_buffer_phys[VAR_6] = VAR_7+(VAR_6*VAR_4);
   VAR_3->generic_buffer_virt[VAR_6] = (unsigned long *)((unsigned char *)VAR_8 + (VAR_6*VAR_4));
   break;
  }
 }
 VAR_9 = 0;
out:
 return VAR_9;
}
