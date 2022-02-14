
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {void* boolean; void* integer; void* unsigned_integer; void* sizet; void* fraction; void* keybind; void* string; } ;
struct TYPE_6__ {TYPE_2__ target; } ;
struct TYPE_8__ {TYPE_1__ value; } ;
typedef TYPE_3__ rarch_setting_t ;
 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static void *FUNC_1(rarch_setting_t *VAR_0)
{
   if (!VAR_0)
      return ((void*)0);

   switch (FUNC_0(VAR_0))
   {
      case 136:
         return VAR_0->value.target.boolean;
      case 133:
         return VAR_0->value.target.integer;
      case 128:
         return VAR_0->value.target.unsigned_integer;
      case 131:
         return VAR_0->value.target.sizet;
      case 134:
         return VAR_0->value.target.fraction;
      case 137:
         return VAR_0->value.target.keybind;
      case 130:
      case 129:
      case 132:
      case 135:
         return VAR_0->value.target.string;
      default:
         break;
   }

   return ((void*)0);
}
