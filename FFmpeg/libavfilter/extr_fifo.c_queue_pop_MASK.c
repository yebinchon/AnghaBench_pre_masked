
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; } ;
struct TYPE_5__ {TYPE_2__ root; TYPE_2__* last; } ;
typedef TYPE_1__ FifoContext ;
typedef TYPE_2__ Buf ;


 int FUNC_0 (TYPE_2__**) ;

__attribute__((used)) static void FUNC_1(FifoContext *VAR_0)
{
    Buf *VAR_1 = VAR_0->root.next->next;
    if (VAR_0->last == VAR_0->root.next)
        VAR_0->last = &VAR_0->root;
    FUNC_0(&VAR_0->root.next);
    VAR_0->root.next = VAR_1;
}
