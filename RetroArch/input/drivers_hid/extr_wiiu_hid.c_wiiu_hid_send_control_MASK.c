
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_size; int tx_buffer; int handle; } ;
typedef TYPE_1__ wiiu_adapter_t ;
typedef int uint8_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (int ,int ,int ,int *,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,int,int) ;
 int FUNC_3 (int ,int *,size_t) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_0, uint8_t *VAR_1, size_t VAR_2)
{
   wiiu_adapter_t *VAR_3 = (wiiu_adapter_t *)VAR_0;
   int32_t VAR_4;

   if (!VAR_3)
   {
      FUNC_1("[hid]: send_control: bad adapter.\n");
      return;
   }

   FUNC_4(VAR_3->tx_buffer, 0, VAR_3->tx_size);
   FUNC_3(VAR_3->tx_buffer, VAR_1, VAR_2);





   VAR_4 = FUNC_0(VAR_3->handle, VAR_3->tx_buffer, VAR_3->tx_size, ((void*)0), ((void*)0));
   if (VAR_4 < 0)
   {
      int16_t VAR_5 = (VAR_4 & 0x0000FFFF);
      int16_t VAR_6 = ((VAR_4 & 0xFFFF0000) >> 16);
      FUNC_2("[hid]: write failed: %08x (%d:%d)\n", VAR_4, VAR_6, VAR_5);
   }
}
