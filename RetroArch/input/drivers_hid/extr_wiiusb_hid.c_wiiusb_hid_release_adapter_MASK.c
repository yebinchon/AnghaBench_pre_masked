
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * connections; } ;
typedef TYPE_1__ wiiusb_hid_t ;
struct wiiusb_adapter {size_t slot; struct wiiusb_adapter* data; struct wiiusb_adapter* send_control_buffer; TYPE_1__* hid; } ;
typedef int int32_t ;


 int FUNC_0 (struct wiiusb_adapter*) ;
 int FUNC_1 (size_t,char const*) ;
 int FUNC_2 (int *,size_t) ;
 char* FUNC_3 (TYPE_1__*,size_t) ;

__attribute__((used)) static int32_t FUNC_4(struct wiiusb_adapter *VAR_0)
{
   wiiusb_hid_t *VAR_1 = ((void*)0);
   const char *VAR_2 = ((void*)0);

   if (!VAR_0)
      return -1;

   VAR_1 = VAR_0->hid;
   VAR_2 = FUNC_3(VAR_1, VAR_0->slot);

   FUNC_1(VAR_0->slot, VAR_2);

   FUNC_2(&VAR_1->connections[VAR_0->slot], VAR_0->slot);

   FUNC_0(VAR_0->send_control_buffer);
   FUNC_0(VAR_0->data);
   FUNC_0(VAR_0);

   return 0;
}
