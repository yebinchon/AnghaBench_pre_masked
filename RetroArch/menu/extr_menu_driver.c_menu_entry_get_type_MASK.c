
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int rarch_setting_t ;
struct TYPE_6__ {int * setting; } ;
typedef TYPE_2__ menu_file_list_cbs_t ;
struct TYPE_7__ {TYPE_1__* list; } ;
typedef TYPE_3__ file_list_t ;
typedef enum menu_entry_type { ____Placeholder_menu_entry_type } menu_entry_type ;
struct TYPE_5__ {scalar_t__ actiondata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_3__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,void*) ;
 int FUNC_2 (int *) ;

enum menu_entry_type FUNC_3(uint32_t VAR_13)
{
   file_list_t *VAR_14 = FUNC_0(0);
   menu_file_list_cbs_t *VAR_15 = ((void*)0);
   rarch_setting_t *VAR_16 = ((void*)0);



   if (FUNC_1(VAR_12, (void*)VAR_16))
      return VAR_8;

   VAR_15 = VAR_14 ?
      (menu_file_list_cbs_t*)VAR_14->list[VAR_13].actiondata : ((void*)0);
   VAR_16 = VAR_15 ? VAR_15->setting : ((void*)0);

   if (VAR_16)
   {
      switch (FUNC_2(VAR_16))
      {
         case 137:
            return VAR_2;
         case 138:
            return VAR_1;
         case 133:
            return VAR_7;
         case 128:
            return VAR_11;
         case 131:
            return VAR_9;
         case 135:
            return VAR_5;
         case 132:
            return VAR_8;
         case 136:
            return VAR_3;
         case 129:
            return VAR_4;
         case 130:
            return VAR_10;
         case 134:
            return VAR_6;

         default:
            break;
      }
   }

   return VAR_0;
}
