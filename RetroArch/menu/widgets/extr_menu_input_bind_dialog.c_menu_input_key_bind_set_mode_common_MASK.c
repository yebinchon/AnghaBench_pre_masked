
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct retro_keybind {int dummy; } ;
struct TYPE_12__ {scalar_t__ keybind; } ;
struct TYPE_13__ {TYPE_1__ target; } ;
struct TYPE_14__ {unsigned int index_offset; TYPE_2__ value; } ;
typedef TYPE_3__ rarch_setting_t ;
struct TYPE_15__ {size_t directory_ptr; void* label; void* enum_idx; void* type; int * list; } ;
typedef TYPE_4__ menu_displaylist_info_t ;
typedef int file_list_t ;
typedef enum menu_input_binds_ctl_state { ____Placeholder_menu_input_binds_ctl_state } menu_input_binds_ctl_state ;
struct TYPE_16__ {unsigned int begin; unsigned int last; unsigned int user; struct retro_keybind* output; struct retro_keybind buffer; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;



 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 void* VAR_5 ;
 struct retro_keybind** VAR_6 ;
 int FUNC_0 (int ,TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int * FUNC_4 (int ) ;
 TYPE_7__ VAR_7 ;
 size_t FUNC_5 () ;
 int FUNC_6 (void*) ;
 unsigned int FUNC_7 (TYPE_3__*) ;
 void* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(
      enum menu_input_binds_ctl_state VAR_8,
      rarch_setting_t *VAR_9)
{
   menu_displaylist_info_t VAR_10;
   unsigned VAR_11 = 0;
   struct retro_keybind *VAR_12 = ((void*)0);
   unsigned VAR_13 = VAR_9->index_offset;
   file_list_t *VAR_14 = FUNC_4(0);
   size_t VAR_15 = FUNC_5();

   FUNC_2(&VAR_10);

   switch (VAR_8)
   {
      case 128:
         VAR_12 = (struct retro_keybind*)VAR_9->value.target.keybind;

         if (!VAR_12)
            return -1;

         VAR_11 = FUNC_7(VAR_9);

         VAR_7.begin = VAR_11;
         VAR_7.last = VAR_11;
         VAR_7.output = VAR_12;
         VAR_7.buffer = *(VAR_7.output);
         VAR_7.user = VAR_13;

         VAR_10.list = VAR_14;
         VAR_10.type = VAR_5;
         VAR_10.directory_ptr = VAR_15;
         VAR_10.enum_idx = VAR_1;
         VAR_10.label = FUNC_8(
               FUNC_6(VAR_1));
         if (FUNC_0(VAR_0, &VAR_10))
            FUNC_3(&VAR_10);
         FUNC_1(&VAR_10);
         break;
      case 130:
         VAR_7.output = &VAR_6[VAR_13][0];
         VAR_7.buffer = *(VAR_7.output);
         VAR_7.begin = VAR_3;
         VAR_7.last = VAR_4;

         VAR_10.list = VAR_14;
         VAR_10.type = VAR_5;
         VAR_10.directory_ptr = VAR_15;
         VAR_10.enum_idx = VAR_2;
         VAR_10.label = FUNC_8(
               FUNC_6(VAR_2));

         if (FUNC_0(VAR_0, &VAR_10))
            FUNC_3(&VAR_10);
         FUNC_1(&VAR_10);
         break;
      default:
      case 129:
         break;
   }

   return 0;
}
