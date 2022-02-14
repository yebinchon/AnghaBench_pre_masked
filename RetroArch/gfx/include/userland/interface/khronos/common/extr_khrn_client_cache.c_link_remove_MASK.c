
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* next; TYPE_1__* prev; } ;
struct TYPE_6__ {TYPE_1__* prev; } ;
struct TYPE_5__ {TYPE_2__* next; } ;
typedef TYPE_3__ CACHE_LINK_T ;



__attribute__((used)) static void FUNC_0(CACHE_LINK_T *VAR_0)
{
   VAR_0->next->prev = VAR_0->prev;
   VAR_0->prev->next = VAR_0->next;
}
