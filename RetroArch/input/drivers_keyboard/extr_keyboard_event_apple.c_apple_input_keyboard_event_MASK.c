
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ input_small_keyboard_enable; scalar_t__ input_keyboard_gamepad_enable; } ;
struct TYPE_5__ {TYPE_1__ bools; } ;
typedef TYPE_2__ settings_t ;
typedef enum retro_mod { ____Placeholder_retro_mod } retro_mod ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 int* VAR_1 ;
 TYPE_2__* FUNC_1 () ;
 scalar_t__ FUNC_2 (unsigned int*,int*) ;
 scalar_t__ FUNC_3 (unsigned int*,int) ;
 int FUNC_4 (int,int ,scalar_t__,int,unsigned int) ;
 int FUNC_5 (unsigned int) ;

void FUNC_6(bool VAR_2,
      unsigned VAR_3, uint32_t VAR_4, uint32_t VAR_5, unsigned VAR_6)
{




   VAR_3 = FUNC_0(VAR_3);
   if (VAR_3 == 0 || VAR_3 >= VAR_0)
      return;

   VAR_1[VAR_3] = VAR_2;

   FUNC_4(VAR_2,
         FUNC_5(VAR_3),
         VAR_4, (enum retro_mod)VAR_5, VAR_6);
}
