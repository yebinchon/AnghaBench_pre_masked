
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct hidpad_ps3_data {int have_led; int* data; int buttons; } ;
 int FUNC_0 (struct hidpad_ps3_data*) ;
 int FUNC_1 (int*,int *,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0,
      uint8_t *VAR_1, uint16_t VAR_2)
{
   uint32_t VAR_3, VAR_4;
   static const uint32_t VAR_5[17] =
   {
      132,
      138,
      134,
      131,
      130,
      133,
      141,
      137,
      139,
      135,
      140,
      136,
      129,
      143,
      142,
      128,
      16
   };
   struct hidpad_ps3_data *VAR_6 = (struct hidpad_ps3_data*)VAR_0;

   if (!VAR_6)
      return;

   if (!VAR_6->have_led)
   {
      FUNC_0(VAR_6);
      VAR_6->have_led = 1;
   }

   FUNC_1(VAR_6->data, VAR_1, VAR_2);

   VAR_6->buttons = 0;

   VAR_4 = VAR_6->data[3] | (VAR_6->data[4] << 8) |
      ((VAR_6->data[5] & 1) << 16);

   for (VAR_3 = 0; VAR_3 < 17; VAR_3 ++)
      VAR_6->buttons |= (VAR_4 & (1 << VAR_3)) ?
         (1 << VAR_5[VAR_3]) : 0;
}
