
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_7__ {scalar_t__ maxSessions; int longHashMemPool; TYPE_2__** longHashList; } ;
struct TYPE_6__ {scalar_t__ key; TYPE_1__* prev; struct TYPE_6__* next; } ;
struct TYPE_5__ {TYPE_2__* next; } ;
typedef TYPE_2__ SLongHash ;
typedef TYPE_3__ SHashObj ;


 int FUNC_0 (TYPE_3__*,scalar_t__) ;
 int FUNC_1 (int ,char*) ;

void FUNC_2(void *VAR_0, void *VAR_1) {
  int VAR_2;
  SLongHash *VAR_3;
  SHashObj * VAR_4;
  uint32_t VAR_5 = *((uint32_t *)VAR_1);

  VAR_4 = (SHashObj *)VAR_0;
  if (VAR_4 == ((void*)0) || VAR_4->maxSessions == 0) return;

  VAR_2 = FUNC_0(VAR_4, VAR_5);

  VAR_3 = VAR_4->longHashList[VAR_2];
  while (VAR_3) {
    if (VAR_3->key == VAR_5) break;

    VAR_3 = VAR_3->next;
  }

  if (VAR_3) {
    if (VAR_3->prev) {
      VAR_3->prev->next = VAR_3->next;
    } else {
      VAR_4->longHashList[VAR_2] = VAR_3->next;
    }

    if (VAR_3->next) {
      VAR_3->next->prev = VAR_3->prev;
    }

    FUNC_1(VAR_4->longHashMemPool, (char *)VAR_3);
  }
}
