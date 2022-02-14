
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ cothread_t ;
struct TYPE_2__ {scalar_t__ stack; } ;
typedef TYPE_1__ cothread_struct ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(cothread_t VAR_0)
{
   if (VAR_0)
   {
      if(((cothread_struct*)VAR_0)->stack)
         FUNC_0(((cothread_struct*)VAR_0)->stack);
      FUNC_0(VAR_0);
   }
}
