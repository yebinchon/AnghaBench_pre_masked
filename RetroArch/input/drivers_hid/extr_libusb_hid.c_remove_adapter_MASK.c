
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libusb_hid {int * slots; } ;
struct libusb_device {int dummy; } ;
struct libusb_adapter {size_t slot; int quitting; struct libusb_adapter* next; int handle; int interface_number; int send_control_buffer; int send_control_lock; int thread; scalar_t__ name; struct libusb_device* device; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct libusb_adapter*) ;
 int FUNC_2 (size_t,char const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,size_t) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(void *VAR_1, struct libusb_device *VAR_2)
{
   struct libusb_adapter *VAR_3 = (struct libusb_adapter*)&VAR_0;
   struct libusb_hid *VAR_4 = (struct libusb_hid*)VAR_1;

   while (VAR_3->next == ((void*)0))
      return -1;

   if (VAR_3->next->device == VAR_2)
   {
      struct libusb_adapter *VAR_5 = ((void*)0);
      const char *VAR_6 = (const char*)VAR_3->next->name;

      FUNC_2(VAR_3->slot, VAR_6);

      VAR_3->next->quitting = 1;
      FUNC_7(VAR_3->next->thread);

      FUNC_5(&VAR_4->slots[VAR_3->slot], VAR_3->slot);

      FUNC_6(VAR_3->send_control_lock);
      FUNC_0(VAR_3->send_control_buffer);

      FUNC_4(VAR_3->next->handle,
            VAR_3->next->interface_number);
      FUNC_3(VAR_3->next->handle);

      VAR_5 = VAR_3->next->next;
      FUNC_1(VAR_3->next);
      VAR_3->next = VAR_5;

      return 0;
   }

   return -1;
}
