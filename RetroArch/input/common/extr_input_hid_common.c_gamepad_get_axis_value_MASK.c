
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_3__ {int axis; int is_negative; } ;
typedef TYPE_1__ axis_data ;






 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,int ) ;

int16_t FUNC_1(int16_t VAR_4[3][2], axis_data *VAR_5)
{
   int16_t VAR_6 = 0;

   if(!VAR_5)
      return 0;

   switch(VAR_5->axis)
   {
      case 131:
         VAR_6 = VAR_4[VAR_2][VAR_0];
         break;
      case 130:
         VAR_6 = VAR_4[VAR_2][VAR_1];
         break;
      case 129:
         VAR_6 = VAR_4[VAR_3][VAR_0];
         break;
      case 128:
         VAR_6 = VAR_4[VAR_3][VAR_1];
         break;
   }

   return FUNC_0(VAR_6, VAR_5->is_negative);
}
