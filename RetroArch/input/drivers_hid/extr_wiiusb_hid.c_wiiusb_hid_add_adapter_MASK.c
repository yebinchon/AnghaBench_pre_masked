
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int connections; struct wiiusb_adapter* adapters_head; } ;
typedef TYPE_1__ wiiusb_hid_t ;
struct TYPE_15__ {int device_id; int pid; int vid; } ;
typedef TYPE_2__ usb_device_entry ;
struct TYPE_16__ {int idProduct; int idVendor; } ;
typedef TYPE_3__ usb_devdesc ;
struct wiiusb_adapter {scalar_t__ endpoint_in; int slot; int handle; struct wiiusb_adapter* send_control_buffer; int device_id; struct wiiusb_adapter* next; TYPE_1__* hid; void* data; int send_control_type; } ;
typedef int int32_t ;
struct TYPE_17__ {int ident; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,struct wiiusb_adapter*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_6 (int ,int ,int ,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_7 (int,int) ;
 int FUNC_8 (struct wiiusb_adapter*) ;
 scalar_t__ FUNC_9 (TYPE_3__) ;
 scalar_t__ FUNC_10 (TYPE_3__) ;
 void* FUNC_11 (int,int) ;
 int FUNC_12 (int ,int) ;
 void* FUNC_13 (int ,char*,int ,int ,struct wiiusb_adapter*,TYPE_6__*) ;
 int FUNC_14 (TYPE_2__*,struct wiiusb_adapter*,TYPE_3__*) ;
 TYPE_6__ VAR_1 ;
 int FUNC_15 (int,char const*,int ,int ,int ) ;
 char* FUNC_16 (TYPE_1__*,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_17(void *VAR_3, usb_device_entry *VAR_4)
{
   usb_devdesc VAR_5;
   const char *VAR_6 = ((void*)0);
   wiiusb_hid_t *VAR_7 = (wiiusb_hid_t*)VAR_3;
   struct wiiusb_adapter *VAR_8 = (struct wiiusb_adapter*)
      FUNC_7(1, sizeof(struct wiiusb_adapter));
   int VAR_9;
   int32_t VAR_10;

   if (!VAR_8)
      return -1;

   if (!VAR_7)
   {
      FUNC_8(VAR_8);
      FUNC_0("Allocation of adapter failed.\n");
      return -1;
   }

   if (FUNC_6(VAR_4->device_id, VAR_4->vid, VAR_4->pid, &VAR_8->handle) < 0)
   {
      FUNC_0("Error opening device 0x%p (VID/PID: %04x:%04x).\n",
           VAR_4->device_id, VAR_4->vid, VAR_4->pid);
      FUNC_8(VAR_8);
      return -1;
   }

   VAR_8->device_id = VAR_4->device_id;

   FUNC_5(VAR_8->handle, &VAR_5);

   if (FUNC_10(VAR_5))
   {
       FUNC_1("Retrode SNES mouse found (currently not supported)\n");
       goto error;
   }

   FUNC_14(VAR_4, VAR_8, &VAR_5);

   if (VAR_8->endpoint_in == 0)
   {
      FUNC_0("Could not find HID config for device.\n");
      goto error;
   }


   VAR_8->send_control_type = VAR_0;
   VAR_8->send_control_buffer = FUNC_11(32, 128);

   if (!VAR_8->send_control_buffer)
   {
      FUNC_0("Error creating send control buffer.\n");
      goto error;
   }



   VAR_8->slot = FUNC_13(VAR_7->connections,
         "hid", VAR_5.idVendor, VAR_5.idProduct,
         VAR_8, &VAR_1);

   if (VAR_8->slot == -1)
      goto error;

   if (!FUNC_12(VAR_7->connections, VAR_8->slot))
   {
      FUNC_0(" Interface not found.\n");
      goto error;
   }

   VAR_8->data = FUNC_11(32, 128);
   VAR_8->hid = VAR_7;
   VAR_8->next = VAR_7->adapters_head;
   VAR_7->adapters_head = VAR_8;


   VAR_6 = FUNC_16(VAR_7, VAR_8->slot);

   FUNC_1("Interface found: [%s].\n", VAR_6);

   FUNC_1("Device 0x%p attached (VID/PID: %04x:%04x).\n",
         VAR_8->device_id, VAR_5.idVendor, VAR_5.idProduct);

   if (FUNC_9(VAR_5))
   {

       FUNC_1("Interface Retrode1 gamepad slot: %d\n", VAR_8->slot);
       FUNC_15(VAR_8->slot, VAR_6, VAR_1.ident, VAR_5.idVendor, VAR_5.idProduct);

       for (VAR_9 = 2; VAR_9 <= 4; VAR_9++)
       {
           VAR_10 = FUNC_13(VAR_7->connections, "hid", VAR_5.idVendor, VAR_5.idProduct, VAR_8, &VAR_1);
           if (VAR_10 == -1)
               FUNC_1("No slot free for Retrode%d gamepad\n", VAR_9);
           else
           {
               FUNC_1("Interface Retrode%d gamepad slot: %d\n", VAR_9, VAR_10);
               FUNC_15(VAR_10, VAR_6, VAR_1.ident, VAR_5.idVendor, VAR_5.idProduct);
           }
       }
   }
   else
       FUNC_15(VAR_8->slot,
             VAR_6, VAR_1.ident, VAR_5.idVendor, VAR_5.idProduct);

   FUNC_4(&VAR_5);
   FUNC_3(VAR_8->handle, VAR_2, VAR_8);

   return 0;

error:
   if (VAR_8->send_control_buffer)
      FUNC_8(VAR_8->send_control_buffer);
   if (VAR_8)
      FUNC_8(VAR_8);
   FUNC_4(&VAR_5);
   FUNC_2(&VAR_8->handle);
   return -1;
}
