
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count; int (* callback ) () ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1 (int VAR_1)
{
 int VAR_2 = 0;
 for (; VAR_2 <= 31; VAR_2++) {
  if ((VAR_0 [VAR_2].count) == VAR_1) {
   if (VAR_0 [VAR_2].callback) {
    VAR_0[VAR_2].callback();
   }
  }
 }
}
