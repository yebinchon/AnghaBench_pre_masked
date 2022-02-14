
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int triggered; int idx; } ;
struct TYPE_5__ {double min; double max; float step; int enforce_minrange; int enforce_maxrange; int dont_use_enum_idx_representation; TYPE_1__ cmd_trigger; int * rounding_fraction; void* browser_selection_type; scalar_t__ bind_type; int * get_string_representation; int * action_select; int * action_ok; int * action_cancel; int * action_down; int * action_up; int * action_right; int * action_left; int * action_start; int * read_handler; int * change_handler; scalar_t__ free_flags; scalar_t__ flags; scalar_t__ index_offset; scalar_t__ index; int * values; int * parent_group; int * subgroup; int * group; int * short_description; int * name; scalar_t__ size; void* type; int enum_idx; } ;
typedef TYPE_2__ rarch_setting_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;

__attribute__((used)) static void FUNC_0(rarch_setting_t *VAR_3, unsigned VAR_4)
{
   (*&VAR_3)[VAR_4].enum_idx = VAR_1;
   (*&VAR_3)[VAR_4].type = VAR_2;
   (*&VAR_3)[VAR_4].size = 0;
   (*&VAR_3)[VAR_4].name = ((void*)0);
   (*&VAR_3)[VAR_4].short_description = ((void*)0);
   (*&VAR_3)[VAR_4].group = ((void*)0);
   (*&VAR_3)[VAR_4].subgroup = ((void*)0);
   (*&VAR_3)[VAR_4].parent_group = ((void*)0);
   (*&VAR_3)[VAR_4].values = ((void*)0);
   (*&VAR_3)[VAR_4].index = 0;
   (*&VAR_3)[VAR_4].index_offset = 0;
   (*&VAR_3)[VAR_4].min = 0.0;
   (*&VAR_3)[VAR_4].max = 0.0;
   (*&VAR_3)[VAR_4].flags = 0;
   (*&VAR_3)[VAR_4].free_flags = 0;
   (*&VAR_3)[VAR_4].change_handler = ((void*)0);
   (*&VAR_3)[VAR_4].read_handler = ((void*)0);
   (*&VAR_3)[VAR_4].action_start = ((void*)0);
   (*&VAR_3)[VAR_4].action_left = ((void*)0);
   (*&VAR_3)[VAR_4].action_right = ((void*)0);
   (*&VAR_3)[VAR_4].action_up = ((void*)0);
   (*&VAR_3)[VAR_4].action_down = ((void*)0);
   (*&VAR_3)[VAR_4].action_cancel = ((void*)0);
   (*&VAR_3)[VAR_4].action_ok = ((void*)0);
   (*&VAR_3)[VAR_4].action_select = ((void*)0);
   (*&VAR_3)[VAR_4].get_string_representation = ((void*)0);
   (*&VAR_3)[VAR_4].bind_type = 0;
   (*&VAR_3)[VAR_4].browser_selection_type = VAR_2;
   (*&VAR_3)[VAR_4].step = 0.0f;
   (*&VAR_3)[VAR_4].rounding_fraction = ((void*)0);
   (*&VAR_3)[VAR_4].enforce_minrange = 0;
   (*&VAR_3)[VAR_4].enforce_maxrange = 0;
   (*&VAR_3)[VAR_4].cmd_trigger.idx = VAR_0;
   (*&VAR_3)[VAR_4].cmd_trigger.triggered = 0;
   (*&VAR_3)[VAR_4].dont_use_enum_idx_representation = 0;
}
