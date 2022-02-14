
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* integer; } ;
struct TYPE_6__ {TYPE_1__ target; } ;
struct TYPE_7__ {TYPE_2__ value; } ;
typedef TYPE_3__ rarch_setting_t ;


 int FUNC_0 (char*,size_t,char*,int) ;
 int FUNC_1 (char*,char*,size_t) ;

__attribute__((used)) static void FUNC_2(rarch_setting_t *VAR_0,
      char *VAR_1, size_t VAR_2)
{
   if (!VAR_0)
      return;

   FUNC_0(VAR_1, VAR_2, "%d", *VAR_0->value.target.integer);
   if (*VAR_0->value.target.integer == -1)
      FUNC_1(VAR_1, " (Auto)", VAR_2);
}
