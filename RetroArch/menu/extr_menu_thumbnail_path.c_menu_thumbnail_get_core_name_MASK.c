
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* content_core_name; } ;
typedef TYPE_1__ menu_thumbnail_path_data_t ;


 scalar_t__ FUNC_0 (char*) ;

bool FUNC_1(
      menu_thumbnail_path_data_t *VAR_0, const char **VAR_1)
{
   if (!VAR_0)
      return 0;

   if (!VAR_1)
      return 0;

   if (FUNC_0(VAR_0->content_core_name))
      return 0;

   *VAR_1 = VAR_0->content_core_name;

   return 1;
}
