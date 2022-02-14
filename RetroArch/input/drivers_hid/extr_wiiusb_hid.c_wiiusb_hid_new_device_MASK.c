
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct wiiusb_adapter* adapters_head; } ;
typedef TYPE_1__ wiiusb_hid_t ;
struct wiiusb_adapter {scalar_t__ device_id; struct wiiusb_adapter* next; } ;
typedef scalar_t__ int32_t ;



__attribute__((used)) static bool FUNC_0(wiiusb_hid_t *VAR_0, int32_t VAR_1)
{
   struct wiiusb_adapter *VAR_2;

   if (!VAR_0)
      return 0;

   VAR_2 = VAR_0->adapters_head;
   while (VAR_2)
   {
      if (VAR_2->device_id == VAR_1)
         return 0;

      VAR_2 = VAR_2->next;
   }

   return 1;
}
