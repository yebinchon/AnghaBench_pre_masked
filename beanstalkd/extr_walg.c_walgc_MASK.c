
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int nfile; TYPE_2__* tail; TYPE_2__* head; } ;
typedef TYPE_1__ Wal ;
struct TYPE_7__ {struct TYPE_7__* path; struct TYPE_7__* next; int refs; } ;
typedef TYPE_2__ File ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

void
FUNC_2(Wal *VAR_0)
{
    File *VAR_1;

    while (VAR_0->head && !VAR_0->head->refs) {
        VAR_1 = VAR_0->head;
        VAR_0->head = VAR_1->next;
        if (VAR_0->tail == VAR_1) {
            VAR_0->tail = VAR_1->next;
        }

        VAR_0->nfile--;
        FUNC_1(VAR_1->path);
        FUNC_0(VAR_1->path);
        FUNC_0(VAR_1);
    }
}
