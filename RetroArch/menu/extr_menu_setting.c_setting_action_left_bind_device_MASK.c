
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int* input_joypad_map; } ;
struct TYPE_7__ {TYPE_1__ uints; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_8__ {unsigned int index_offset; } ;
typedef TYPE_3__ rarch_setting_t ;


 TYPE_2__* FUNC_0 () ;
 unsigned int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(rarch_setting_t *VAR_0, bool VAR_1)
{
   unsigned *VAR_2 = ((void*)0);
   unsigned VAR_3 = 0;
   unsigned VAR_4 = FUNC_1();
   settings_t *VAR_5 = FUNC_0();

   if (!VAR_0 || VAR_4 == 0)
      return -1;

   VAR_3 = VAR_0->index_offset;

   VAR_2 = &VAR_5->uints.input_joypad_map[VAR_3];

   if ((*VAR_2) >= VAR_4)
      *VAR_2 = VAR_4 - 1;
   else if ((*VAR_2) > 0)
      (*VAR_2)--;

   return 0;
}
