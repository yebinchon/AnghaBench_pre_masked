
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* uint32_t ;
struct retro_keybind {int dummy; } ;
struct TYPE_10__ {int triggered; int idx; } ;
struct TYPE_9__ {struct retro_keybind const* keybind; } ;
struct TYPE_7__ {struct retro_keybind* keybind; } ;
struct TYPE_8__ {TYPE_1__ target; } ;
struct TYPE_11__ {char const* name; char const* short_description; char const* group; char const* subgroup; char const* parent_group; double min; double max; float step; int enforce_minrange; int enforce_maxrange; int dont_use_enum_idx_representation; TYPE_4__ cmd_trigger; TYPE_3__ default_value; TYPE_2__ value; int * rounding_fraction; int browser_selection_type; scalar_t__ bind_type; int * get_string_representation; void* action_select; void* action_ok; int * action_cancel; int * action_down; int * action_up; int * action_right; int * action_left; int action_start; int * read_handler; int * change_handler; scalar_t__ free_flags; scalar_t__ flags; scalar_t__ offset_by; void* index_offset; void* index; int * values; scalar_t__ size; int type; int enum_idx; } ;
typedef TYPE_5__ rarch_setting_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static rarch_setting_t FUNC_0(const char* VAR_7,
      const char* VAR_8, struct retro_keybind* VAR_9,
      uint32_t VAR_10, uint32_t VAR_11,
      const struct retro_keybind* VAR_12,
      const char *VAR_13, const char *VAR_14,
      const char *VAR_15,
      bool VAR_16)
{
   rarch_setting_t VAR_17;

   VAR_17.enum_idx = VAR_1;
   VAR_17.type = VAR_2;

   VAR_17.size = 0;

   VAR_17.name = VAR_7;
   VAR_17.short_description = VAR_8;
   VAR_17.group = VAR_13;
   VAR_17.subgroup = VAR_14;
   VAR_17.parent_group = VAR_15;
   VAR_17.values = ((void*)0);

   VAR_17.index = VAR_10;
   VAR_17.index_offset = VAR_11;
   VAR_17.offset_by = 0;

   VAR_17.min = 0.0;
   VAR_17.max = 0.0;

   VAR_17.flags = 0;
   VAR_17.free_flags = 0;

   VAR_17.change_handler = ((void*)0);
   VAR_17.read_handler = ((void*)0);
   VAR_17.action_start = VAR_5;
   VAR_17.action_left = ((void*)0);
   VAR_17.action_right = ((void*)0);
   VAR_17.action_up = ((void*)0);
   VAR_17.action_down = ((void*)0);
   VAR_17.action_cancel = ((void*)0);
   VAR_17.action_ok = VAR_4;
   VAR_17.action_select = VAR_4;
   VAR_17.get_string_representation = &VAR_6;

   VAR_17.bind_type = 0;
   VAR_17.browser_selection_type = VAR_3;
   VAR_17.step = 0.0f;
   VAR_17.rounding_fraction = ((void*)0);
   VAR_17.enforce_minrange = 0;
   VAR_17.enforce_maxrange = 0;

   VAR_17.value.target.keybind = VAR_9;
   VAR_17.default_value.keybind = VAR_12;

   VAR_17.cmd_trigger.idx = VAR_0;
   VAR_17.cmd_trigger.triggered = 0;

   VAR_17.dont_use_enum_idx_representation = VAR_16;

   return VAR_17;
}
