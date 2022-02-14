
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {float (* get_sensor_input ) (scalar_t__,unsigned int,unsigned int) ;} ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 float FUNC_0 (scalar_t__,unsigned int,unsigned int) ;

float FUNC_1(unsigned VAR_2, unsigned VAR_3)
{
   if (VAR_1 &&
         VAR_0->get_sensor_input)
      return VAR_0->get_sensor_input(VAR_1,
            VAR_2, VAR_3);
   return 0.0f;
}
