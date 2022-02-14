
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* head; TYPE_1__* last; TYPE_1__* first; int var; int comb; int diff; } ;
struct TYPE_8__ {int parity; struct TYPE_8__* next; int vars; struct TYPE_8__* prev; int combs; int diffs; scalar_t__ affinity; scalar_t__ breaks; scalar_t__ flags; int buffer; } ;
typedef TYPE_1__ PullupField ;
typedef TYPE_2__ PullupContext ;
typedef int PullupBuffer ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,TYPE_1__*,int,TYPE_1__*,int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4(PullupContext *VAR_0, PullupBuffer *VAR_1, int VAR_2)
{
    PullupField *VAR_3;


    if (FUNC_0(VAR_0) < 0)
        return;


    if (VAR_0->last && VAR_0->last->parity == VAR_2)
        return;

    VAR_3 = VAR_0->head;
    VAR_3->parity = VAR_2;
    VAR_3->buffer = FUNC_3(VAR_1, VAR_2);
    VAR_3->flags = 0;
    VAR_3->breaks = 0;
    VAR_3->affinity = 0;

    FUNC_1(VAR_0, VAR_3->diffs, VAR_3, VAR_2, VAR_3->prev->prev, VAR_2, VAR_0->diff);
    FUNC_1(VAR_0, VAR_3->combs, VAR_2 ? VAR_3->prev : VAR_3, 0, VAR_2 ? VAR_3 : VAR_3->prev, 1, VAR_0->comb);
    FUNC_1(VAR_0, VAR_3->vars, VAR_3, VAR_2, VAR_3, -1, VAR_0->var);
    FUNC_2();


    if (!VAR_0->first)
        VAR_0->first = VAR_0->head;

    VAR_0->last = VAR_0->head;
    VAR_0->head = VAR_0->head->next;
}
