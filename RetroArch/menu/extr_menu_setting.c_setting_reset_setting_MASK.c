
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int string; int * keybind; int fraction; int sizet; int unsigned_integer; int integer; int boolean; } ;
struct TYPE_9__ {int string; int * keybind; int * fraction; int * sizet; int * unsigned_integer; int * integer; int * boolean; } ;
struct TYPE_10__ {TYPE_1__ target; } ;
struct TYPE_12__ {int (* change_handler ) (TYPE_4__*) ;int size; TYPE_3__ default_value; TYPE_2__ value; } ;
typedef TYPE_4__ rarch_setting_t ;
 int FUNC_0 (int ,int ,int ) ;
 int const FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_4(rarch_setting_t* VAR_0)
{
   if (!VAR_0)
      return;

   switch (FUNC_1(VAR_0))
   {
      case 136:
         *VAR_0->value.target.boolean = VAR_0->default_value.boolean;
         break;
      case 133:
         *VAR_0->value.target.integer = VAR_0->default_value.integer;
         break;
      case 128:
         *VAR_0->value.target.unsigned_integer = VAR_0->default_value.unsigned_integer;
         break;
      case 131:
         *VAR_0->value.target.sizet = VAR_0->default_value.sizet;
         break;
      case 134:
         *VAR_0->value.target.fraction = VAR_0->default_value.fraction;
         break;
      case 137:
         *VAR_0->value.target.keybind = *VAR_0->default_value.keybind;
         break;
      case 130:
      case 129:
      case 132:
      case 135:
         if (VAR_0->default_value.string)
         {
            if (FUNC_1(VAR_0) == 130)
               FUNC_2(VAR_0, VAR_0->default_value.string);
            else
               FUNC_0(VAR_0->value.target.string,
                     VAR_0->default_value.string, VAR_0->size);
         }
         break;
      default:
         break;
   }

   if (VAR_0->change_handler)
      VAR_0->change_handler(VAR_0);
}
