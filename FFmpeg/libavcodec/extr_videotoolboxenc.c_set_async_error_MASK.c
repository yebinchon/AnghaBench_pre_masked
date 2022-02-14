
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int async_error; int lock; int * q_tail; TYPE_2__* q_head; } ;
typedef TYPE_1__ VTEncContext ;
struct TYPE_6__ {int cm_buffer; struct TYPE_6__* next; } ;
typedef TYPE_2__ BufNode ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(VTEncContext *VAR_0, int VAR_1)
{
    BufNode *VAR_2;

    FUNC_2(&VAR_0->lock);

    VAR_0->async_error = VAR_1;

    VAR_2 = VAR_0->q_head;
    VAR_0->q_head = VAR_0->q_tail = ((void*)0);

    while (VAR_2) {
        BufNode *VAR_3 = VAR_2->next;
        FUNC_0(VAR_2->cm_buffer);
        FUNC_1(VAR_2);
        VAR_2 = VAR_3;
    }

    FUNC_3(&VAR_0->lock);
}
