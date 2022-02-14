
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* right_path; char* left_path; } ;
typedef TYPE_1__ menu_thumbnail_path_data_t ;
typedef enum menu_thumbnail_id { ____Placeholder_menu_thumbnail_id } menu_thumbnail_id ;




 scalar_t__ FUNC_0 (char*) ;

bool FUNC_1(
      menu_thumbnail_path_data_t *VAR_0,
      enum menu_thumbnail_id VAR_1, const char **VAR_2)
{
   char *VAR_3 = ((void*)0);

   if (!VAR_0)
      return 0;

   if (!VAR_2)
      return 0;

   switch (VAR_1)
   {
      case 128:
         VAR_3 = VAR_0->right_path;
         break;
      case 129:
         VAR_3 = VAR_0->left_path;
         break;
      default:
         return 0;
   }

   if (FUNC_0(VAR_3))
      return 0;

   *VAR_2 = VAR_3;

   return 1;
}
