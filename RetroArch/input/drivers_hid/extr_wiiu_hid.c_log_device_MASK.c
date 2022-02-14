
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_packet_size_tx; int max_packet_size_rx; int protocol; int sub_class; int interface_index; int pid; int vid; int physical_device_inst; int handle; } ;
typedef TYPE_1__ HIDDevice ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(HIDDevice *VAR_0)
{
   if (!VAR_0)
   {
      FUNC_0("NULL device.\n");
   }

   FUNC_0("                handle: %d\n", VAR_0->handle);
   FUNC_0("  physical_device_inst: %d\n", VAR_0->physical_device_inst);
   FUNC_0("                   vid: 0x%x\n", VAR_0->vid);
   FUNC_0("                   pid: 0x%x\n", VAR_0->pid);
   FUNC_0("       interface_index: %d\n", VAR_0->interface_index);
   FUNC_0("             sub_class: %d\n", VAR_0->sub_class);
   FUNC_0("              protocol: %d\n", VAR_0->protocol);
   FUNC_0("    max_packet_size_rx: %d\n", VAR_0->max_packet_size_rx);
   FUNC_0("    max_packet_size_tx: %d\n", VAR_0->max_packet_size_tx);
}
