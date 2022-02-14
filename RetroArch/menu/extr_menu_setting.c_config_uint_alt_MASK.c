
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int ui_type; } ;
typedef TYPE_1__ rarch_setting_t ;
struct TYPE_10__ {int index; } ;
typedef TYPE_2__ rarch_setting_info_t ;
struct TYPE_11__ {int name; } ;
typedef TYPE_3__ rarch_setting_group_info_t ;
typedef int change_handler_t ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (char const*,char const*,unsigned int*,unsigned int,int ,int ,char const*,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(
      rarch_setting_t **VAR_1,
      rarch_setting_info_t *VAR_2,
      unsigned int *VAR_3,
      const char *VAR_4, const char *VAR_5,
      unsigned int VAR_6,
      rarch_setting_group_info_t *VAR_7,
      rarch_setting_group_info_t *VAR_8,
      const char *VAR_9,
      change_handler_t VAR_10, change_handler_t VAR_11)
{
   (*VAR_1)[VAR_2->index++] = FUNC_0(
         VAR_4, VAR_5, VAR_3, VAR_6,
         VAR_7->name,
         VAR_8->name, VAR_9, VAR_10, VAR_11,
         1);
   (*VAR_1)[VAR_2->index - 1].ui_type = VAR_0;
}
