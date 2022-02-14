
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item_cheat {int rumble_type; unsigned int rumble_prev_value; unsigned int rumble_value; int rumble_initialized; scalar_t__ rumble_primary_end_time; int rumble_primary_duration; scalar_t__ rumble_secondary_end_time; int rumble_secondary_duration; int rumble_secondary_strength; int rumble_port; int rumble_primary_strength; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;

void FUNC_2(struct item_cheat *VAR_2, unsigned int VAR_3)
{
   bool VAR_4 = 0;

   switch (VAR_2->rumble_type)
   {
      case 135:
         return;
      case 138:
         VAR_4 = (VAR_3 != VAR_2->rumble_prev_value);
         break;
      case 134:
         VAR_4 = (VAR_3 == VAR_2->rumble_prev_value);
         break;
      case 131:
         VAR_4 = (VAR_3 > VAR_2->rumble_prev_value);
         break;
      case 137:
         VAR_4 = (VAR_3 < VAR_2->rumble_prev_value);
         break;
      case 133:
         VAR_4 = (VAR_3 == VAR_2->rumble_value);
         break;
      case 128:
         VAR_4 = (VAR_3 != VAR_2->rumble_value);
         break;
      case 129:
         VAR_4 = (VAR_3 < VAR_2->rumble_value);
         break;
      case 132:
         VAR_4 = (VAR_3 > VAR_2->rumble_value);
         break;
      case 130:
         VAR_4 = (VAR_3 == VAR_2->rumble_prev_value + VAR_2->rumble_value);
         break;
      case 136:
         VAR_4 = (VAR_3 == VAR_2->rumble_prev_value - VAR_2->rumble_value);
         break;
   }

   VAR_2->rumble_prev_value = VAR_3;



   if (VAR_2->rumble_initialized > 300)
   {
      if (VAR_4)
      {
         VAR_2->rumble_primary_end_time = FUNC_0() + (VAR_2->rumble_primary_duration * 1000);
         VAR_2->rumble_secondary_end_time = FUNC_0() + (VAR_2->rumble_secondary_duration * 1000);
         FUNC_1(VAR_2->rumble_port, VAR_0, VAR_2->rumble_primary_strength);
         FUNC_1(VAR_2->rumble_port, VAR_1, VAR_2->rumble_secondary_strength);
      }
   }
   else
   {
      VAR_2->rumble_initialized++;
      return;
   }

   if (VAR_2->rumble_primary_end_time <= FUNC_0())
   {
      if (VAR_2->rumble_primary_end_time != 0)
         FUNC_1(VAR_2->rumble_port, VAR_0, 0);
      VAR_2->rumble_primary_end_time = 0;
   }
   else
   {
      FUNC_1(VAR_2->rumble_port, VAR_0, VAR_2->rumble_primary_strength);
   }

   if (VAR_2->rumble_secondary_end_time <= FUNC_0())
   {
      if (VAR_2->rumble_secondary_end_time != 0)
         FUNC_1(VAR_2->rumble_port, VAR_1, 0);
      VAR_2->rumble_secondary_end_time = 0;
   }
   else
      FUNC_1(VAR_2->rumble_port, VAR_1, VAR_2->rumble_secondary_strength);
}
