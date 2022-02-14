
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_7__ {scalar_t__ keepTimer; int ** connHashList; int connHashMemPool; int * count; int total; int (* cleanFp ) (int ) ;} ;
struct TYPE_6__ {scalar_t__ time; struct TYPE_6__* next; int port; int ip; int data; struct TYPE_6__* prev; } ;
typedef TYPE_1__ SConnHash ;
typedef TYPE_2__ SConnCache ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int ,int ,int ,int,TYPE_1__*,int ) ;

void FUNC_3(SConnCache *VAR_0, SConnHash *VAR_1, int VAR_2, uint64_t VAR_3) {
  if (VAR_1 == ((void*)0)) return;
  if (VAR_3 < VAR_0->keepTimer + VAR_1->time) return;

  SConnHash *VAR_4 = VAR_1->prev, *VAR_5;

  while (VAR_1) {
    (*VAR_0->cleanFp)(VAR_1->data);
    VAR_5 = VAR_1->next;
    VAR_0->total--;
    VAR_0->count[VAR_2]--;
    FUNC_2("%p ip:0x%x:%d:%d:%p removed, connections in cache:%d", VAR_1->data, VAR_1->ip, VAR_1->port, VAR_2, VAR_1,
             VAR_0->count[VAR_2]);
    FUNC_1(VAR_0->connHashMemPool, (char *)VAR_1);
    VAR_1 = VAR_5;
  }

  if (VAR_4)
    VAR_4->next = ((void*)0);
  else
    VAR_0->connHashList[VAR_2] = ((void*)0);
}
