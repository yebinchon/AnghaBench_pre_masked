
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int rarch_setting_t ;
struct TYPE_7__ {int index; } ;
typedef TYPE_1__ rarch_setting_info_t ;
struct TYPE_8__ {char const* name; } ;
typedef TYPE_2__ rarch_setting_group_info_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,char const*,char const*,int) ;
 int FUNC_1 (int **,TYPE_1__*) ;

__attribute__((used)) static bool FUNC_2(rarch_setting_t **VAR_1,
      rarch_setting_info_t *VAR_2, const char *VAR_3,
      rarch_setting_group_info_t *VAR_4,
      rarch_setting_group_info_t *VAR_5,
      const char *VAR_6)
{
   VAR_5->name = VAR_3;

   if (!FUNC_1(VAR_1, VAR_2))
      return 0;
   (*VAR_1)[VAR_2->index++] = FUNC_0 (VAR_0,
         VAR_3, VAR_4->name, VAR_6, 0);
   return 1;
}
