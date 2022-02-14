
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* entries; TYPE_1__* free; int * qe; } ;
struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_2__ MsgQueue_t ;


 int VAR_0 ;

void FUNC_0(MsgQueue_t *VAR_1)
{
 int VAR_2;

 VAR_1->qe = ((void*)0);
 VAR_1->free = &VAR_1->entries[0];

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  VAR_1->entries[VAR_2].next = &VAR_1->entries[VAR_2 + 1];

 VAR_1->entries[VAR_0 - 1].next = ((void*)0);
}
