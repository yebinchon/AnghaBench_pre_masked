
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
struct TYPE_11__ {unsigned int unsigned_integer; } ;
struct TYPE_10__ {unsigned int unsigned_integer; } ;
struct TYPE_8__ {unsigned int* unsigned_integer; } ;
struct TYPE_9__ {TYPE_1__ target; } ;
struct TYPE_13__ {int size; char const* name; char const* short_description; char const* group; char const* subgroup; char const* parent_group; double min; double max; float step; int enforce_minrange; int enforce_maxrange; int dont_use_enum_idx_representation; TYPE_5__ cmd_trigger; TYPE_4__ default_value; TYPE_3__ original_value; TYPE_2__ value; int * rounding_fraction; int browser_selection_type; scalar_t__ bind_type; int * get_string_representation; void* action_select; void* action_ok; int * action_cancel; int * action_down; int * action_up; int action_right; int action_left; int action_start; void* read_handler; void* change_handler; scalar_t__ free_flags; scalar_t__ flags; scalar_t__ offset_by; scalar_t__ index_offset; scalar_t__ index; int * values; int type; int enum_idx; } ;
typedef TYPE_6__ rarch_setting_t ;
typedef void* change_handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static rarch_setting_t FUNC_0(const char* VAR_9,
      const char* VAR_10, unsigned int* VAR_11,
      unsigned int VAR_12,
      const char *VAR_13, const char *VAR_14, const char *VAR_15,
      change_handler_t VAR_16, change_handler_t VAR_17,
      bool VAR_18)
{
   rarch_setting_t VAR_19;

   VAR_19.enum_idx = VAR_1;
   VAR_19.type = VAR_3;

   VAR_19.size = sizeof(unsigned int);

   VAR_19.name = VAR_9;
   VAR_19.short_description = VAR_10;
   VAR_19.group = VAR_13;
   VAR_19.subgroup = VAR_14;
   VAR_19.parent_group = VAR_15;
   VAR_19.values = ((void*)0);

   VAR_19.index = 0;
   VAR_19.index_offset = 0;
   VAR_19.offset_by = 0;

   VAR_19.min = 0.0;
   VAR_19.max = 0.0;

   VAR_19.flags = 0;
   VAR_19.free_flags = 0;

   VAR_19.change_handler = VAR_16;
   VAR_19.read_handler = VAR_17;
   VAR_19.action_start = VAR_5;
   VAR_19.action_left = VAR_7;
   VAR_19.action_right = VAR_8;
   VAR_19.action_up = ((void*)0);
   VAR_19.action_down = ((void*)0);
   VAR_19.action_cancel = ((void*)0);
   VAR_19.action_ok = VAR_4;
   VAR_19.action_select = VAR_4;
   VAR_19.get_string_representation = &VAR_6;

   VAR_19.bind_type = 0;
   VAR_19.browser_selection_type = VAR_2;
   VAR_19.step = 0.0f;
   VAR_19.rounding_fraction = ((void*)0);
   VAR_19.enforce_minrange = 0;
   VAR_19.enforce_maxrange = 0;

   VAR_19.value.target.unsigned_integer = VAR_11;
   VAR_19.original_value.unsigned_integer = *VAR_11;
   VAR_19.default_value.unsigned_integer = VAR_12;

   VAR_19.cmd_trigger.idx = VAR_0;
   VAR_19.cmd_trigger.triggered = 0;

   VAR_19.dont_use_enum_idx_representation = VAR_18;

   return VAR_19;
}
