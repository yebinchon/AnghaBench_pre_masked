
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int is_keyboard; int is_mouse; int max_packet_size_tx; int max_packet_size_rx; int interface_index; int product_id; int vendor_id; int handle; int * driver; } ;
typedef TYPE_1__ wiiu_attach_event ;
typedef int hid_device_t ;
struct TYPE_7__ {int sub_class; int protocol; int max_packet_size_tx; int max_packet_size_rx; int interface_index; int pid; int vid; int handle; } ;
typedef TYPE_2__ HIDDevice ;


 int FUNC_0 (char*,int ,int ) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int * FUNC_2 (int ,int ) ;

__attribute__((used)) static wiiu_attach_event *FUNC_3(HIDDevice *VAR_0)
{
   hid_device_t *VAR_1 = FUNC_2(VAR_0->vid, VAR_0->pid);
   if (!VAR_1)
   {
      FUNC_0("[hid]: Failed to locate driver for device vid=%04x pid=%04x\n",
        VAR_0->vid, VAR_0->pid);
      return ((void*)0);
   }
   wiiu_attach_event *VAR_2 = FUNC_1(4, sizeof(wiiu_attach_event));
   if (!VAR_2)
      return ((void*)0);

   VAR_2->driver = VAR_1;
   VAR_2->handle = VAR_0->handle;
   VAR_2->vendor_id = VAR_0->vid;
   VAR_2->product_id = VAR_0->pid;
   VAR_2->interface_index = VAR_0->interface_index;
   VAR_2->is_keyboard = (VAR_0->sub_class == 1
         && VAR_0->protocol == 1);
   VAR_2->is_mouse = (VAR_0->sub_class == 1
         && VAR_0->protocol == 2);
   VAR_2->max_packet_size_rx = VAR_0->max_packet_size_rx;
   VAR_2->max_packet_size_tx = VAR_0->max_packet_size_tx;

   return VAR_2;
}
