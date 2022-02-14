
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* prev; struct TYPE_5__* next; } ;
typedef TYPE_1__ Job ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(Job *VAR_0, Job *VAR_1)
{
    if (!FUNC_0(VAR_1)) return;

    VAR_1->prev = VAR_0->prev;
    VAR_1->next = VAR_0;
    VAR_0->prev->next = VAR_1;
    VAR_0->prev = VAR_1;
}
