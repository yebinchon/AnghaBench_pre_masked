
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* context_reset ) (int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int ,int) ;

bool FUNC_3(bool VAR_5)
{
   FUNC_0(VAR_0, ((void*)0));
   FUNC_0(VAR_1, ((void*)0));

   if ( VAR_3 ||
         FUNC_1(VAR_5))
   {
      if (VAR_2 && VAR_2->context_reset)
      {
         VAR_2->context_reset(VAR_4, VAR_5);
         return 1;
      }
   }

   return 0;
}
