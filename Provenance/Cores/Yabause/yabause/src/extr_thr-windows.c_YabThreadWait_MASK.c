
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * cond; scalar_t__ running; int * thd; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 TYPE_1__* VAR_1 ;

void FUNC_2(unsigned int VAR_2)
{
   if (!VAR_1[VAR_2].thd)
      return;

   FUNC_1(VAR_1[VAR_2].thd,VAR_0);
   FUNC_0(VAR_1[VAR_2].thd);
   VAR_1[VAR_2].thd = ((void*)0);
   VAR_1[VAR_2].running = 0;
   if (VAR_1[VAR_2].cond)
       FUNC_0(VAR_1[VAR_2].cond);
}
