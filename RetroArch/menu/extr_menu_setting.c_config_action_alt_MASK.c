
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int rarch_setting_t ;
struct TYPE_6__ {int index; } ;
typedef TYPE_1__ rarch_setting_info_t ;
struct TYPE_7__ {int name; } ;
typedef TYPE_2__ rarch_setting_group_info_t ;


 int FUNC_0 (char const*,char const*,int ,int ,char const*,int) ;

__attribute__((used)) static void FUNC_1(
      rarch_setting_t **VAR_0,
      rarch_setting_info_t *VAR_1,
      const char *VAR_2, const char *VAR_3,
      rarch_setting_group_info_t *VAR_4,
      rarch_setting_group_info_t *VAR_5,
      const char *VAR_6)
{
   (*VAR_0)[VAR_1->index++] = FUNC_0(VAR_2, VAR_3,
         VAR_4->name, VAR_5->name, VAR_6,
         1);
}
