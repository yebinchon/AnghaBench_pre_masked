
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ level; TYPE_2__* param; } ;
typedef TYPE_1__ scope_t ;
struct TYPE_7__ {scalar_t__ level; struct TYPE_7__* prev; } ;
typedef TYPE_2__ param_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(scope_t *VAR_0)
{
   param_t *VAR_1;

   --VAR_0->level;

   while ((VAR_1 = VAR_0->param))
   {
      if (VAR_1->level <= VAR_0->level)
         break;

      VAR_0->param = VAR_1->prev;
      FUNC_1(VAR_1);
      FUNC_0(VAR_1);
   }
}
