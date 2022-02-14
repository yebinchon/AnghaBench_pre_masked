
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ axis; int is_negative; } ;
typedef TYPE_1__ axis_data ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

void FUNC_2(uint32_t VAR_1, axis_data *VAR_2)
{
   if(!VAR_2)
      return;

   VAR_2->axis = FUNC_1(VAR_1);
   VAR_2->is_negative = 0;

   if(VAR_2->axis >= VAR_0)
   {
      VAR_2->axis = FUNC_0(VAR_1);
      VAR_2->is_negative = 1;
   }
}
