
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct hidpad_snesusb_data {int* data; int buttons; } ;
 int FUNC_0 (int*,int *,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, uint8_t *VAR_1, uint16_t VAR_2)
{
   uint32_t VAR_3, VAR_4;
   static const uint32_t VAR_5[16] =
   {
      133,
      132,
      136,
      136,
      131,
      130,
      136,
      136,
      136,
      136,
      136,
      136,
      129,
      135,
      134,
      128
   };
   struct hidpad_snesusb_data *VAR_6 = (struct hidpad_snesusb_data*)VAR_0;

   if (!VAR_6)
      return;

   FUNC_0(VAR_6->data, VAR_1, VAR_2);

   VAR_6->buttons = 0;

   VAR_4 = VAR_6->data[7] | (VAR_6->data[6] << 8);

   for (VAR_3 = 0; VAR_3 < 16; VAR_3 ++)
      if (VAR_5[VAR_3] != 136)
         VAR_6->buttons |= (VAR_4 & (1 << VAR_3)) ? (1 << VAR_5[VAR_3]) : 0;
}
