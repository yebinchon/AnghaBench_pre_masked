
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {scalar_t__ maxSessions; int ipHashMemPool; TYPE_2__** ipHashList; } ;
struct TYPE_6__ {short port; TYPE_1__* prev; struct TYPE_6__* next; int ip; } ;
struct TYPE_5__ {TYPE_2__* next; } ;
typedef TYPE_2__ SIpHash ;
typedef TYPE_3__ SHashObj ;


 int FUNC_0 (TYPE_3__*,int ,short) ;
 int FUNC_1 (int ,char*) ;

void FUNC_2(void *VAR_0, uint32_t VAR_1, short VAR_2) {
  int VAR_3;
  SIpHash * VAR_4;
  SHashObj *VAR_5;

  VAR_5 = (SHashObj *)VAR_0;
  if (VAR_5 == ((void*)0) || VAR_5->maxSessions == 0) return;

  VAR_3 = FUNC_0(VAR_5, VAR_1, VAR_2);

  VAR_4 = VAR_5->ipHashList[VAR_3];
  while (VAR_4) {
    if (VAR_4->ip == VAR_1 && VAR_4->port == VAR_2) break;

    VAR_4 = VAR_4->next;
  }

  if (VAR_4) {
    if (VAR_4->prev) {
      VAR_4->prev->next = VAR_4->next;
    } else {
      VAR_5->ipHashList[VAR_3] = VAR_4->next;
    }

    if (VAR_4->next) {
      VAR_4->next->prev = VAR_4->prev;
    }

    FUNC_1(VAR_5->ipHashMemPool, (char *)VAR_4);
  }
}
