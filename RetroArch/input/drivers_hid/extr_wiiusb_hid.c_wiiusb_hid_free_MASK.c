
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int poll_thread_quit; int connections; struct wiiusb_adapter* adapters_head; int manual_removal; scalar_t__ poll_thread; } ;
typedef TYPE_1__ wiiusb_hid_t ;
struct wiiusb_adapter {struct wiiusb_adapter* next; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct wiiusb_adapter*) ;

__attribute__((used)) static void FUNC_4(const void *VAR_1)
{
   struct wiiusb_adapter *VAR_2 = ((void*)0);
   struct wiiusb_adapter *VAR_3 = ((void*)0);
   wiiusb_hid_t *VAR_4 = (wiiusb_hid_t*)VAR_1;

   if (!VAR_4)
      return;

   VAR_4->poll_thread_quit = 1;

   if (VAR_4->poll_thread)
      FUNC_2(VAR_4->poll_thread);

   VAR_4->manual_removal = VAR_0;


   for (VAR_2 = VAR_4->adapters_head; VAR_2; VAR_2 = VAR_3)
   {
      VAR_3 = VAR_2->next;
      FUNC_3(VAR_2);
   }

   FUNC_1(VAR_4->connections);

   FUNC_0(VAR_4);
}
