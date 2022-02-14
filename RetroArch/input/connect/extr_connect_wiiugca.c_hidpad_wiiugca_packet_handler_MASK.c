
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct hidpad_wiiugca_data {int* data; int buttons; } ;
 int FUNC_0 (int*,int *,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, uint8_t *VAR_1, uint16_t VAR_2)
{
   uint32_t VAR_3, VAR_4;
   static const uint32_t VAR_5[12] =
   {
      139,
      138,
      129,
      128,
      135,
      133,
      137,
      130,
      131,
      132,
      134,
      136,
   };
   struct hidpad_wiiugca_data *VAR_6 = (struct hidpad_wiiugca_data*)VAR_0;

   if (!VAR_6)
      return;

   FUNC_0(VAR_6->data, VAR_1, VAR_2);

   VAR_6->buttons = 0;

   VAR_4 = VAR_6->data[3] | (VAR_6->data[4] << 8);

   for (VAR_3 = 0; VAR_3 < 12; VAR_3 ++)
      VAR_6->buttons |= (VAR_4 & (1 << VAR_3)) ?
         (1 << VAR_5[VAR_3]) : 0;
}
