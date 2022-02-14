
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void (* callback ) () ;scalar_t__ count; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

int FUNC_0 (void (*VAR_3) (void))
{
 int VAR_4 = 31;
 if (!VAR_3) {
  return -VAR_0;
 }
 while (VAR_4 >= 0) {
  if ((VAR_1 [VAR_4].callback) == VAR_3) {
   VAR_1 [VAR_4].callback = ((void*)0);
   VAR_1 [VAR_4].count = 0;
   VAR_2--;
   return 0;
  };
  VAR_4--;
 };
 return -VAR_0;
}
