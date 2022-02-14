
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int rarch_setting_t ;
struct TYPE_6__ {int index; } ;
typedef TYPE_1__ rarch_setting_info_t ;
struct TYPE_7__ {char const* name; } ;
typedef TYPE_2__ rarch_setting_group_info_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,char const*) ;
 int FUNC_1 (int **,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(rarch_setting_t **VAR_1, rarch_setting_info_t *VAR_2,
      rarch_setting_group_info_t *VAR_3,
      const char *VAR_4, const char *VAR_5)
{
   VAR_3->name = VAR_4;
   if (!FUNC_1(VAR_1, VAR_2))
      return;
   (*VAR_1)[VAR_2->index++] = FUNC_0 (VAR_0, VAR_4, VAR_5);
}
