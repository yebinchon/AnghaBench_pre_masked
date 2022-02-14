
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* prev; struct TYPE_5__* next; } ;
typedef TYPE_1__ CACHE_LINK_T ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(CACHE_LINK_T *VAR_0, CACHE_LINK_T *VAR_1, CACHE_LINK_T *VAR_2)
{
   FUNC_0(VAR_1->next == VAR_2);
   FUNC_0(VAR_2->prev == VAR_1);

   VAR_0->prev = VAR_1;
   VAR_0->next = VAR_2;
   VAR_1->next = VAR_0;
   VAR_2->prev = VAR_0;
}
