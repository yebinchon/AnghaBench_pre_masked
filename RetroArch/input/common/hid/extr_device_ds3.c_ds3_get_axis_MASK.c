
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_5__ {int analog_state; } ;
typedef TYPE_1__ ds3_instance_t ;
struct TYPE_6__ {int axis; } ;
typedef TYPE_2__ axis_data ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (unsigned int,TYPE_2__*) ;

__attribute__((used)) static int16_t FUNC_2(void *VAR_0, unsigned VAR_1)
{
   axis_data VAR_2;
   ds3_instance_t *VAR_3 = (ds3_instance_t *)VAR_0;

   FUNC_1(VAR_1, &VAR_2);

   if(!VAR_3 || VAR_2.axis >= 4)
      return 0;

   return FUNC_0(VAR_3->analog_state, &VAR_2);
}
