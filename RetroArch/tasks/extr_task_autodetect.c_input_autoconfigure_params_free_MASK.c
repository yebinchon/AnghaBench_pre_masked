
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * autoconfig_directory; int * name; } ;
typedef TYPE_1__ autoconfig_params_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(autoconfig_params_t *VAR_0)
{
   if (!VAR_0)
      return;
   if (!FUNC_1(VAR_0->name))
      FUNC_0(VAR_0->name);
   if (!FUNC_1(VAR_0->autoconfig_directory))
      FUNC_0(VAR_0->autoconfig_directory);
   VAR_0->name = ((void*)0);
   VAR_0->autoconfig_directory = ((void*)0);
}
