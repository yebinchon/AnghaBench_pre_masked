
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* prev; void* arg; int routine; } ;
typedef TYPE_1__ pte_cleanup_t ;
typedef int pte_cleanup_callback_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,void*) ;

void
FUNC_2 (pte_cleanup_t * VAR_1,
      pte_cleanup_callback_t VAR_2, void *VAR_3)
{
   VAR_1->routine = VAR_2;
   VAR_1->arg = VAR_3;

   VAR_1->prev = (pte_cleanup_t *) FUNC_0 (VAR_0);

   FUNC_1 (VAR_0, (void *) VAR_1);
}
