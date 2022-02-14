
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__* input_mouse_index; } ;
struct TYPE_7__ {int modified; TYPE_1__ uints; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_8__ {size_t index_offset; } ;
typedef TYPE_3__ rarch_setting_t ;


 TYPE_2__* FUNC_0 () ;

__attribute__((used)) static int FUNC_1(rarch_setting_t *VAR_0, bool VAR_1)
{
   settings_t *VAR_2 = FUNC_0();

   if (!VAR_0)
      return -1;

   if (VAR_2->uints.input_mouse_index[VAR_0->index_offset])
   {
      --VAR_2->uints.input_mouse_index[VAR_0->index_offset];
      VAR_2->modified = 1;
   }

   return 0;
}
