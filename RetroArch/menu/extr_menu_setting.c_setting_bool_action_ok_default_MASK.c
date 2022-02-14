
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__* boolean; } ;
struct TYPE_7__ {TYPE_1__ target; } ;
struct TYPE_8__ {TYPE_2__ value; } ;
typedef TYPE_3__ rarch_setting_t ;


 int FUNC_0 (TYPE_3__*,char*) ;

__attribute__((used)) static int FUNC_1(rarch_setting_t *VAR_0, bool VAR_1)
{
   if (!VAR_0)
      return -1;

   (void)VAR_1;

   FUNC_0(VAR_0,
         *VAR_0->value.target.boolean ? "false" : "true");

   return 0;
}
