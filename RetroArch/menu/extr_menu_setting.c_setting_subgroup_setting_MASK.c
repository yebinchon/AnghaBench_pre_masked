
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int triggered; int idx; } ;
struct TYPE_5__ {int type; char const* name; char const* short_description; char const* group; char const* parent_group; double min; double max; float step; int enforce_minrange; int enforce_maxrange; int dont_use_enum_idx_representation; TYPE_1__ cmd_trigger; int * rounding_fraction; int browser_selection_type; scalar_t__ bind_type; int * get_string_representation; int * action_select; int * action_ok; int * action_cancel; int * action_down; int * action_up; int * action_right; int * action_left; int * action_start; int * read_handler; int * change_handler; scalar_t__ free_flags; scalar_t__ flags; scalar_t__ offset_by; scalar_t__ index_offset; scalar_t__ index; int * subgroup; int * values; scalar_t__ size; int enum_idx; } ;
typedef TYPE_2__ rarch_setting_t ;
typedef enum setting_type { ____Placeholder_setting_type } setting_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static rarch_setting_t FUNC_0(enum setting_type VAR_4,
      const char* VAR_5, const char *VAR_6, const char *VAR_7,
      bool VAR_8)
{
   rarch_setting_t VAR_9;

   VAR_9.enum_idx = VAR_1;
   VAR_9.type = VAR_4;

   VAR_9.size = 0;

   VAR_9.name = VAR_5;
   VAR_9.short_description = VAR_5;
   VAR_9.group = VAR_6;
   VAR_9.parent_group = VAR_7;
   VAR_9.values = ((void*)0);
   VAR_9.subgroup = ((void*)0);

   VAR_9.index = 0;
   VAR_9.index_offset = 0;
   VAR_9.offset_by = 0;

   VAR_9.min = 0.0;
   VAR_9.max = 0.0;

   VAR_9.flags = 0;
   VAR_9.free_flags = 0;

   VAR_9.change_handler = ((void*)0);
   VAR_9.read_handler = ((void*)0);
   VAR_9.action_start = ((void*)0);
   VAR_9.action_left = ((void*)0);
   VAR_9.action_right = ((void*)0);
   VAR_9.action_up = ((void*)0);
   VAR_9.action_down = ((void*)0);
   VAR_9.action_cancel = ((void*)0);
   VAR_9.action_ok = ((void*)0);
   VAR_9.action_select = ((void*)0);
   VAR_9.get_string_representation = &VAR_3;

   VAR_9.bind_type = 0;
   VAR_9.browser_selection_type = VAR_2;
   VAR_9.step = 0.0f;
   VAR_9.rounding_fraction = ((void*)0);
   VAR_9.enforce_minrange = 0;
   VAR_9.enforce_maxrange = 0;

   VAR_9.cmd_trigger.idx = VAR_0;
   VAR_9.cmd_trigger.triggered = 0;

   VAR_9.dont_use_enum_idx_representation = VAR_8;

   return VAR_9;
}
