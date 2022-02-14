
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int removal_cb; struct wiiusb_adapter* adapters_head; scalar_t__ manual_removal; } ;
typedef TYPE_1__ wiiusb_hid_t ;
struct wiiusb_adapter {struct wiiusb_adapter* next; TYPE_1__* hid; } ;


 int FUNC_0 (struct wiiusb_adapter*) ;

__attribute__((used)) static int FUNC_1(int VAR_0, void *VAR_1)
{
   struct wiiusb_adapter *VAR_2 = (struct wiiusb_adapter *)VAR_1;
   wiiusb_hid_t *VAR_3 = VAR_2 ? VAR_2->hid : ((void*)0);
   struct wiiusb_adapter *VAR_4 = VAR_3 ? VAR_3->adapters_head : ((void*)0);

   if (!VAR_2 || !VAR_3 || !VAR_4 || VAR_3->manual_removal)
      return -1;

   if (VAR_4 == VAR_2)
      VAR_3->adapters_head = VAR_2->next;
   else
      while (VAR_4->next)
      {
         if (VAR_4->next == VAR_2)
         {
            VAR_4->next = VAR_2->next;
            break;
         }
         VAR_4 = VAR_4->next;
      }


   FUNC_0(VAR_2);


   VAR_3->removal_cb = 1;

   return 0;
}
