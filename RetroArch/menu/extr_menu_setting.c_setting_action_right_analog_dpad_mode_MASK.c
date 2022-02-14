
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int* input_analog_dpad_mode; } ;
struct TYPE_7__ {int modified; TYPE_1__ uints; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_8__ {unsigned int index_offset; } ;
typedef TYPE_3__ rarch_setting_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 () ;

__attribute__((used)) static int FUNC_1(rarch_setting_t *VAR_1, bool VAR_2)
{
   unsigned VAR_3 = 0;
   settings_t *VAR_4 = FUNC_0();

   if (!VAR_1)
      return -1;

   VAR_3 = VAR_1->index_offset;

   VAR_4->modified = 1;
   VAR_4->uints.input_analog_dpad_mode[VAR_3] =
      (VAR_4->uints.input_analog_dpad_mode[VAR_3] + 1)
      % VAR_0;

   return 0;
}
