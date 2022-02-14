
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t rx_size; int handle; } ;
typedef TYPE_1__ wiiu_adapter_t ;
typedef int int32_t ;


 int FUNC_0 (int ,void*,size_t,int *,int *) ;
 int FUNC_1 (char*,TYPE_1__*,int) ;

__attribute__((used)) static int32_t FUNC_2(void *VAR_0, void *VAR_1, size_t VAR_2)
{
   wiiu_adapter_t *VAR_3 = (wiiu_adapter_t *)VAR_0;
   int32_t VAR_4;

   if (!VAR_3)
      return -1;

   if (VAR_2 > VAR_3->rx_size)
      return -1;

   VAR_4 = FUNC_0(VAR_3->handle, VAR_1, VAR_2, ((void*)0), ((void*)0));
   if (VAR_4 < 0)
      FUNC_1("read failed", VAR_3, VAR_4);

   return VAR_4;
}
