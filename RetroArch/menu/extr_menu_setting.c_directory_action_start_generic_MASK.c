
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int string; } ;
struct TYPE_6__ {TYPE_1__ default_value; } ;
typedef TYPE_2__ rarch_setting_t ;


 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_1(rarch_setting_t *VAR_0)
{
   if (!VAR_0)
      return -1;

   FUNC_0(VAR_0,
         VAR_0->default_value.string);

   return 0;
}
