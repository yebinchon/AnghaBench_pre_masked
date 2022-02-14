
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int interface_index; int handle; } ;
typedef TYPE_1__ wiiu_adapter_t ;
typedef int uint8_t ;
typedef int int32_t ;


 int FUNC_0 (int ,int ,int ,int *,int *) ;

__attribute__((used)) static int32_t FUNC_1(void *VAR_0, uint8_t VAR_1)
{
   wiiu_adapter_t *VAR_2 = (wiiu_adapter_t *)VAR_0;
   if (!VAR_2)
      return -1;

   return FUNC_0(VAR_2->handle,
         VAR_2->interface_index,
         VAR_1,
         ((void*)0), ((void*)0));
}
