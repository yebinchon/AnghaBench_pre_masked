
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int device_detected; struct wiiusb_adapter* adapters_head; int poll_thread_quit; } ;
typedef TYPE_1__ wiiusb_hid_t ;
struct wiiusb_adapter {int busy; int data; int endpoint_in_max_size; int endpoint_in; int handle; scalar_t__ send_control_type; struct wiiusb_adapter* next; } ;


 int FUNC_0 (int ,int ,int ,int ,int ,struct wiiusb_adapter*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct wiiusb_adapter*) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(void *VAR_1)
{
   wiiusb_hid_t *VAR_2 = (wiiusb_hid_t*)VAR_1;
   struct wiiusb_adapter *VAR_3 = ((void*)0);

   if (!VAR_2)
      return;

   while (!VAR_2->poll_thread_quit)
   {


      if (VAR_2->device_detected)
      {

         VAR_2->device_detected = 0;

         FUNC_3(VAR_2);
      }


      for (VAR_3 = VAR_2->adapters_head; VAR_3; VAR_3=VAR_3->next)
      {
         if (VAR_3->busy)
            continue;


         VAR_3->busy = 1;

         if (VAR_3->send_control_type)
            FUNC_2(VAR_3);

         FUNC_0(VAR_3->handle, VAR_3->endpoint_in,
               VAR_3->endpoint_in_max_size,
               VAR_3->data, VAR_0, VAR_3);
      }


      FUNC_1(10000);
   }
}
