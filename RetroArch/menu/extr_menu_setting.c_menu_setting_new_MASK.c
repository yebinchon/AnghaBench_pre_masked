
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int rarch_setting_t ;
struct TYPE_4__ {int size; scalar_t__ index; } ;
typedef TYPE_1__ rarch_setting_info_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 int * FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static rarch_setting_t *FUNC_3(void)
{
   rarch_setting_t* VAR_0 = ((void*)0);
   rarch_setting_info_t *VAR_1 = (rarch_setting_info_t*)
      FUNC_1(sizeof(*VAR_1));

   if (!VAR_1)
      return ((void*)0);

   VAR_1->index = 0;
   VAR_1->size = 32;

   VAR_0 = FUNC_2(VAR_1);

   if (VAR_1)
      FUNC_0(VAR_1);

   VAR_1 = ((void*)0);

   return VAR_0;
}
