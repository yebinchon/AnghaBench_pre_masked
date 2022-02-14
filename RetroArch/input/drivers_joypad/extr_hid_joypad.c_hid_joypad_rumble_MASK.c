
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
typedef enum retro_rumble_effect { ____Placeholder_retro_rumble_effect } retro_rumble_effect ;
struct TYPE_2__ {int (* set_rumble ) (void*,unsigned int,int,int ) ;} ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (void*,unsigned int,int,int ) ;

__attribute__((used)) static bool FUNC_2(unsigned VAR_1,
      enum retro_rumble_effect VAR_2, uint16_t VAR_3)
{
   if (VAR_0 && VAR_0->set_rumble)
      return VAR_0->set_rumble((void*)FUNC_0(), VAR_1, VAR_2, VAR_3);
   return 0;
}
