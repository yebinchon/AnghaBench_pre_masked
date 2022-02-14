
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct hidpad_psxadapter_data {int* data; int buttons; } ;
typedef int int16_t ;



 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;


 int VAR_0 ;



 int VAR_1 ;



 int VAR_2 ;


 int VAR_3 ;


 int FUNC_5 (int*,int *,int ) ;

__attribute__((used)) static void FUNC_6(void *VAR_4, uint8_t *VAR_5, uint16_t VAR_6)
{
   uint32_t VAR_7, VAR_8;
   int16_t VAR_9;
   static const uint32_t VAR_10[16] =
   {
      136,
      133,
      137,
      134,
      131,
      130,
      135,
      132,
      140,
      140,
      140,
      140,
      129,
      139,
      138,
      128,
   };
   struct hidpad_psxadapter_data *VAR_11 = (struct hidpad_psxadapter_data*)VAR_4;

   if (!VAR_11)
      return;

   FUNC_5(VAR_11->data, VAR_5, VAR_6);

   VAR_11->buttons = 0;

   VAR_8 = VAR_11->data[7] | (VAR_11->data[6] << 8);

   for (VAR_7 = 0; VAR_7 < 16; VAR_7 ++)
      if (VAR_10[VAR_7] != 140)
         VAR_11->buttons |= (VAR_8 & (1 << VAR_7)) ? (1 << VAR_10[VAR_7]) : 0;

   if (VAR_11->data[2]==0x7F)
   {

      VAR_11->buttons |= (VAR_11->data[4]==0x00) ? (1 << VAR_1) : 0;
      VAR_11->buttons |= (VAR_11->data[4]==0xFF) ? (1 << VAR_2) : 0;
      VAR_11->buttons |= (VAR_11->data[5]==0x00) ? (1 << VAR_3) : 0;
      VAR_11->buttons |= (VAR_11->data[5]==0xFF) ? (1 << VAR_0) : 0;
   }
   else
   {

      VAR_9 = FUNC_1(VAR_11->data[6]);
      VAR_11->buttons |= FUNC_2(VAR_9) ? (1 << VAR_1) : 0;
      VAR_11->buttons |= FUNC_3(VAR_9) ? (1 << VAR_2) : 0;
      VAR_11->buttons |= FUNC_4(VAR_9) ? (1 << VAR_3) : 0;
      VAR_11->buttons |= FUNC_0(VAR_9) ? (1 << VAR_0) : 0;
   }
}
