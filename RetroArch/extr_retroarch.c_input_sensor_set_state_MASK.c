
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum retro_sensor_action { ____Placeholder_retro_sensor_action } retro_sensor_action ;
struct TYPE_2__ {int (* set_sensor_state ) (scalar_t__,unsigned int,int,unsigned int) ;} ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,unsigned int,int,unsigned int) ;

bool FUNC_1(unsigned VAR_2,
      enum retro_sensor_action VAR_3, unsigned VAR_4)
{
   if (VAR_1 &&
         VAR_0->set_sensor_state)
      return VAR_0->set_sensor_state(VAR_1,
            VAR_2, VAR_3, VAR_4);
   return 0;
}
