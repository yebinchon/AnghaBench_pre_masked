
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int triggered; int idx; } ;
struct TYPE_11__ {char const* string; } ;
struct TYPE_9__ {char* string; } ;
struct TYPE_10__ {TYPE_2__ target; } ;
struct TYPE_8__ {char const* empty_path; } ;
struct TYPE_13__ {int type; unsigned int size; char const* name; char const* short_description; char const* group; char const* subgroup; char const* parent_group; double min; double max; int browser_selection_type; float step; int enforce_minrange; int enforce_maxrange; int dont_use_enum_idx_representation; int * get_string_representation; int * action_start; TYPE_5__ cmd_trigger; TYPE_4__ default_value; TYPE_3__ value; TYPE_1__ dir; int * rounding_fraction; scalar_t__ bind_type; int * action_select; int * action_ok; int * action_cancel; int * action_down; int * action_up; int * action_right; int * action_left; void* read_handler; void* change_handler; scalar_t__ free_flags; scalar_t__ flags; scalar_t__ offset_by; scalar_t__ index_offset; scalar_t__ index; int * values; int enum_idx; } ;
typedef TYPE_6__ rarch_setting_t ;
typedef enum setting_type { ____Placeholder_setting_type } setting_type ;
typedef void* change_handler_t ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;

__attribute__((used)) static rarch_setting_t FUNC_0(enum setting_type VAR_7,
      const char* VAR_8, const char* VAR_9, char* VAR_10,
      unsigned VAR_11, const char* VAR_12, const char *VAR_13,
      const char *VAR_14, const char *VAR_15, const char *VAR_16,
      change_handler_t VAR_17,
      change_handler_t VAR_18,
      bool VAR_19)
{
   rarch_setting_t VAR_20;

   VAR_20.enum_idx = VAR_1;
   VAR_20.type = VAR_7;

   VAR_20.size = VAR_11;

   VAR_20.name = VAR_8;
   VAR_20.short_description = VAR_9;
   VAR_20.group = VAR_14;
   VAR_20.subgroup = VAR_15;
   VAR_20.parent_group = VAR_16;
   VAR_20.values = ((void*)0);

   VAR_20.index = 0;
   VAR_20.index_offset = 0;
   VAR_20.offset_by = 0;

   VAR_20.min = 0.0;
   VAR_20.max = 0.0;

   VAR_20.flags = 0;
   VAR_20.free_flags = 0;

   VAR_20.change_handler = VAR_17;
   VAR_20.read_handler = VAR_18;
   VAR_20.action_start = ((void*)0);
   VAR_20.action_left = ((void*)0);
   VAR_20.action_right = ((void*)0);
   VAR_20.action_up = ((void*)0);
   VAR_20.action_down = ((void*)0);
   VAR_20.action_cancel = ((void*)0);
   VAR_20.action_ok = ((void*)0);
   VAR_20.action_select = ((void*)0);
   VAR_20.get_string_representation = &VAR_5;

   VAR_20.bind_type = 0;
   VAR_20.browser_selection_type = VAR_2;
   VAR_20.step = 0.0f;
   VAR_20.rounding_fraction = ((void*)0);
   VAR_20.enforce_minrange = 0;
   VAR_20.enforce_maxrange = 0;

   VAR_20.dir.empty_path = VAR_13;
   VAR_20.value.target.string = VAR_10;
   VAR_20.default_value.string = VAR_12;

   VAR_20.cmd_trigger.idx = VAR_0;
   VAR_20.cmd_trigger.triggered = 0;

   switch (VAR_7)
   {
      case 129:
         VAR_20.action_start = VAR_6;
         VAR_20.browser_selection_type = 129;
         VAR_20.get_string_representation = &VAR_3;
         break;
      case 128:
         VAR_20.action_start = VAR_6;
         VAR_20.browser_selection_type = 128;
         VAR_20.get_string_representation = &VAR_4;
         break;
      default:
         break;
   }

   VAR_20.dont_use_enum_idx_representation = VAR_19;

   return VAR_20;
}
