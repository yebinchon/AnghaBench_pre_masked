
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * input_joypad_map; } ;
struct TYPE_8__ {TYPE_1__ uints; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_9__ {size_t index_offset; } ;
typedef TYPE_3__ rarch_setting_t ;


 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,int ,size_t) ;

__attribute__((used)) static int FUNC_2(rarch_setting_t *VAR_0)
{
   settings_t *VAR_1 = FUNC_0();

   if (!VAR_0 || !VAR_1)
      return -1;

   FUNC_1(VAR_1,
         VAR_1->uints.input_joypad_map[VAR_0->index_offset], VAR_0->index_offset);
   return 0;
}
