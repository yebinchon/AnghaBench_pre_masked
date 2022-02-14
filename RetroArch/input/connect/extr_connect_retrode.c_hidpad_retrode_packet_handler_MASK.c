
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct hidpad_retrode_data {int* data; int buttons; } ;


 int const VAR_0 ;
 int FUNC_0 (int*,int*,int ) ;
 struct hidpad_retrode_data** VAR_1 ;

__attribute__((used)) static void FUNC_1(void *VAR_2, uint8_t *VAR_3, uint16_t VAR_4)
{
   uint32_t VAR_5, VAR_6;
   static const uint32_t VAR_7[8] =
   {
           134,
           128,
           131,
           130,
           135,
           129,
           133,
           132
   };
   struct hidpad_retrode_data *VAR_8 = (struct hidpad_retrode_data*)VAR_2;
   struct hidpad_retrode_data *VAR_9;

   if (!VAR_8)
      return;
   VAR_9 = VAR_1[VAR_3[1] - 1];

   if (!VAR_9)
      return;

   FUNC_0(VAR_9->data, VAR_3, VAR_4);

   VAR_9->buttons = 0;

   VAR_6 = VAR_9->data[4];

   for (VAR_5 = 0; VAR_5 < 8; VAR_5 ++)
      if (VAR_7[VAR_5] != VAR_0)
          VAR_9->buttons |= (VAR_6 & (1 << VAR_5)) ? (1 << VAR_7[VAR_5]) : 0;
}
