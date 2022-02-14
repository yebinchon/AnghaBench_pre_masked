
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
typedef enum retro_rumble_effect { ____Placeholder_retro_rumble_effect } retro_rumble_effect ;
struct TYPE_2__ {int (* set_rumble ) (int ,unsigned int,int,int ) ;} ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned int,int,int ) ;

bool FUNC_1(unsigned VAR_2,
      enum retro_rumble_effect VAR_3, uint16_t VAR_4)
{
   if (!VAR_0 || !VAR_0->set_rumble)
      return 0;
   return VAR_0->set_rumble(VAR_1,
         VAR_2, VAR_3, VAR_4);
}
