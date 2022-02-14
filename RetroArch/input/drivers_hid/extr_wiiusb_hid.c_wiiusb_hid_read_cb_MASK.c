
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * connections; } ;
typedef TYPE_1__ wiiusb_hid_t ;
struct wiiusb_adapter {size_t slot; int busy; scalar_t__ data; TYPE_1__* hid; } ;
typedef scalar_t__ int32_t ;


 int FUNC_0 (int *,size_t,scalar_t__,scalar_t__) ;

__attribute__((used)) static int32_t FUNC_1(int32_t VAR_0, void *VAR_1)
{
   struct wiiusb_adapter *VAR_2 = (struct wiiusb_adapter*)VAR_1;
   wiiusb_hid_t *VAR_3 = VAR_2 ? VAR_2->hid : ((void*)0);

   if (VAR_3 && VAR_3->connections && VAR_0 > 0)
      FUNC_0(&VAR_3->connections[VAR_2->slot],
            VAR_2->slot, VAR_2->data-1, VAR_0+1);

  if (VAR_2)
      VAR_2->busy = 0;

  return VAR_0;
}
