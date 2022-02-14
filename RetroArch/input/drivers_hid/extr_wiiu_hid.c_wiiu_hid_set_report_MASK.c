
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tx_size; int tx_buffer; int handle; } ;
typedef TYPE_1__ wiiu_adapter_t ;
typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int int32_t ;


 int FUNC_0 (int ,int ,int ,int ,scalar_t__,int *,int *) ;
 int FUNC_1 (int ,void*,scalar_t__) ;
 int FUNC_2 (int ,int ,scalar_t__) ;

__attribute__((used)) static int32_t FUNC_3(void *VAR_0, uint8_t VAR_1,
               uint8_t VAR_2, void *VAR_3, uint32_t VAR_4)
{
   wiiu_adapter_t *VAR_5 = (wiiu_adapter_t *)VAR_0;
   if (!VAR_5 || VAR_4 > VAR_5->tx_size)
      return -1;

   FUNC_2(VAR_5->tx_buffer, 0, VAR_5->tx_size);
   FUNC_1(VAR_5->tx_buffer, VAR_3, VAR_4);

   return FUNC_0(VAR_5->handle,
         VAR_1,
         VAR_2,
         VAR_5->tx_buffer,
         VAR_5->tx_size,
         ((void*)0), ((void*)0));
}
