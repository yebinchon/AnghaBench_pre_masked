
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int nfile; TYPE_2__* head; TYPE_2__* tail; } ;
typedef TYPE_1__ Wal ;
struct TYPE_7__ {struct TYPE_7__* next; } ;
typedef TYPE_2__ File ;



Wal*
FUNC_0(File *VAR_0, Wal *VAR_1)
{
    if (VAR_1->tail) {
        VAR_1->tail->next = VAR_0;
    }
    VAR_1->tail = VAR_0;
    if (!VAR_1->head) {
        VAR_1->head = VAR_0;
    }
    VAR_1->nfile++;
    return VAR_1;
}
