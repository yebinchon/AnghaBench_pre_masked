
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* prev; TYPE_3__* next; } ;
typedef TYPE_2__ levelitem_t ;
struct TYPE_7__ {TYPE_1__* prev; } ;
struct TYPE_5__ {TYPE_3__* next; } ;


 TYPE_3__* VAR_0 ;

void FUNC_0(levelitem_t *VAR_1)
{
 if (VAR_1->prev) VAR_1->prev->next = VAR_1->next;
 else VAR_0 = VAR_1->next;
 if (VAR_1->next) VAR_1->next->prev = VAR_1->prev;
}
