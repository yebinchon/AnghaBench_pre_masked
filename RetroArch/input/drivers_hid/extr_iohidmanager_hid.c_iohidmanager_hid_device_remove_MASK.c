
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iohidmanager_hid_adapter {size_t slot; struct iohidmanager_hid_adapter* next; struct iohidmanager_hid_adapter* buttons; struct iohidmanager_hid_adapter* axes; struct iohidmanager_hid_adapter* hats; int name; } ;
struct TYPE_2__ {int * slots; int * axes; scalar_t__* buttons; } ;
typedef TYPE_1__ iohidmanager_hid_t ;
typedef struct iohidmanager_hid_adapter apple_input_rec_t ;
typedef int IOReturn ;


 size_t VAR_0 ;
 int FUNC_0 (struct iohidmanager_hid_adapter*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (size_t,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *,size_t) ;

__attribute__((used)) static void FUNC_5(void *VAR_1,
      IOReturn VAR_2, void* VAR_3)
{
   struct iohidmanager_hid_adapter *VAR_4 =
      (struct iohidmanager_hid_adapter*)VAR_1;
   iohidmanager_hid_t *VAR_5 = (iohidmanager_hid_t*)
      FUNC_1();

   if (VAR_5 && VAR_4 && (VAR_4->slot < VAR_0))
   {
      FUNC_2(VAR_4->slot, VAR_4->name);

      VAR_5->buttons[VAR_4->slot] = 0;
      FUNC_3(VAR_5->axes[VAR_4->slot], 0, sizeof(VAR_5->axes));

      FUNC_4(&VAR_5->slots[VAR_4->slot], VAR_4->slot);
   }

   if (VAR_4)
   {
      apple_input_rec_t* VAR_6 = ((void*)0);
      while (VAR_4->hats != ((void*)0))
      {
          VAR_6 = VAR_4->hats;
          VAR_4->hats = VAR_4->hats->next;
          FUNC_0(VAR_6);
      }

      while (VAR_4->axes != ((void*)0))
      {
          VAR_6 = VAR_4->axes;
          VAR_4->axes = VAR_4->axes->next;
          FUNC_0(VAR_6);
      }

      while (VAR_4->buttons != ((void*)0))
      {
          VAR_6 = VAR_4->buttons;
          VAR_4->buttons = VAR_4->buttons->next;
          FUNC_0(VAR_6);
      }
      FUNC_0(VAR_4);
   }
}
