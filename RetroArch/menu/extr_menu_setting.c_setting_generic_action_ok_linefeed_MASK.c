
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int name; int short_description; } ;
typedef TYPE_1__ rarch_setting_t ;
struct TYPE_7__ {int * cb; scalar_t__ idx; scalar_t__ type; int label_setting; int label; } ;
typedef TYPE_2__ menu_input_ctx_line_t ;
typedef int * input_keyboard_line_complete_t ;







 int FUNC_0 (TYPE_2__*) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(rarch_setting_t *VAR_3, bool VAR_4)
{
   menu_input_ctx_line_t VAR_5;
   input_keyboard_line_complete_t VAR_6 = ((void*)0);

   if (!VAR_3)
      return -1;

   (void)VAR_4;

   switch (FUNC_1(VAR_3))
   {
      case 131:
      case 128:
         VAR_6 = VAR_2;
         break;
      case 132:
         VAR_6 = VAR_0;
         break;
      case 130:
      case 129:
         VAR_6 = VAR_1;
         break;
      default:
         break;
   }

   VAR_5.label = VAR_3->short_description;
   VAR_5.label_setting = VAR_3->name;
   VAR_5.type = 0;
   VAR_5.idx = 0;
   VAR_5.cb = VAR_6;

   if (!FUNC_0(&VAR_5))
      return -1;

   return 0;
}
