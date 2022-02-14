
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int quit; int ctx; int hp; scalar_t__ can_hotplug; scalar_t__ slots; scalar_t__ poll_thread; } ;
typedef TYPE_2__ libusb_hid_t ;
struct TYPE_8__ {TYPE_1__* next; } ;
struct TYPE_6__ {int device; } ;


 int FUNC_0 (char*,int ) ;
 TYPE_5__ VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void FUNC_7(const void *VAR_1)
{
   libusb_hid_t *VAR_2 = (libusb_hid_t*)VAR_1;

   while(VAR_0.next)
      if (FUNC_5(VAR_2, VAR_0.next->device) == -1)
         FUNC_0("could not remove device %p\n",
               VAR_0.next->device);

   if (VAR_2->poll_thread)
   {
      VAR_2->quit = 1;
      FUNC_6(VAR_2->poll_thread);
   }

   if (VAR_2->slots)
      FUNC_4(VAR_2->slots);

   if (VAR_2->can_hotplug)
      FUNC_3(VAR_2->ctx, VAR_2->hp);

   FUNC_2(VAR_2->ctx);
   FUNC_1(VAR_2);
}
