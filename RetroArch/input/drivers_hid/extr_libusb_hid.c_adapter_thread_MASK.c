
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
struct libusb_adapter {size_t* data; size_t endpoint_in_max_size; size_t slot; int endpoint_in; int handle; int send_control_lock; int endpoint_out; int send_control_buffer; int quitting; TYPE_1__* hid; } ;
typedef int send_command_size ;
struct TYPE_2__ {int * slots; } ;
typedef TYPE_1__ libusb_hid_t ;


 int FUNC_0 (int ,size_t*,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,size_t*,size_t,int*,int) ;
 int FUNC_3 (int *,size_t,size_t*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(void *VAR_0)
{
   uint8_t VAR_1[4096];
   struct libusb_adapter *VAR_2 = (struct libusb_adapter*)VAR_0;
   libusb_hid_t *VAR_3 = VAR_2 ? VAR_2->hid : ((void*)0);

   if (!VAR_2)
      return;

   while (!VAR_2->quitting)
   {
      size_t VAR_4;
      int VAR_5;
      int VAR_6;
      int VAR_7 = 0;

      FUNC_4(VAR_2->send_control_lock);
      if (FUNC_1(VAR_2->send_control_buffer)
            >= sizeof(VAR_4))
      {
         FUNC_0(VAR_2->send_control_buffer,
               &VAR_4, sizeof(VAR_4));

         if (FUNC_1(VAR_2->send_control_buffer)
               >= sizeof(VAR_4))
         {
            FUNC_0(VAR_2->send_control_buffer,
                  VAR_1, VAR_4);
            FUNC_2(VAR_2->handle,
                  VAR_2->endpoint_out, VAR_1,
                  VAR_4, &VAR_5, 1000);
         }
      }
      FUNC_5(VAR_2->send_control_lock);

      FUNC_2(VAR_2->handle,
            VAR_2->endpoint_in, &VAR_2->data[1],
            VAR_2->endpoint_in_max_size, &VAR_7, 1000);

      if (VAR_2 && VAR_3 && VAR_3->slots && VAR_7)
         FUNC_3(&VAR_3->slots[VAR_2->slot], VAR_2->slot,
               VAR_2->data, VAR_7+1);
   }
}
