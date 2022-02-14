
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wiiu_hid_t ;
struct TYPE_5__ {int handle; } ;
typedef TYPE_1__ wiiu_attach_event ;
struct TYPE_6__ {int connected; } ;
typedef TYPE_2__ wiiu_adapter_t ;


 TYPE_2__* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(wiiu_hid_t *VAR_0, wiiu_attach_event *VAR_1)
{
   wiiu_adapter_t *VAR_2 = FUNC_0(VAR_1->handle);




   if (VAR_2)
      VAR_2->connected = 0;
}
