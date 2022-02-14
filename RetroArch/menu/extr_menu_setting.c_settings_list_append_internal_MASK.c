
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int rarch_setting_t ;
struct TYPE_3__ {int size; } ;
typedef TYPE_1__ rarch_setting_info_t ;


 scalar_t__ FUNC_0 (int *,int) ;

__attribute__((used)) static bool FUNC_1(
      rarch_setting_t **VAR_0,
      rarch_setting_info_t *VAR_1)
{
   unsigned VAR_2 = VAR_1->size * 2;
   rarch_setting_t *VAR_3 = (rarch_setting_t*)
      FUNC_0(*VAR_0, sizeof(rarch_setting_t) * VAR_2);

   if (!VAR_3)
      return 0;
   VAR_1->size = VAR_2;
   *VAR_0 = VAR_3;

   return 1;
}
