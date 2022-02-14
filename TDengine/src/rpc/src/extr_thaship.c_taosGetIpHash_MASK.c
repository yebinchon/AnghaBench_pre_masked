
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {scalar_t__ maxSessions; TYPE_1__** ipHashList; } ;
struct TYPE_4__ {short port; void* data; struct TYPE_4__* next; int ip; } ;
typedef TYPE_1__ SIpHash ;
typedef TYPE_2__ SHashObj ;


 int FUNC_0 (TYPE_2__*,int ,short) ;

void *FUNC_1(void *VAR_0, uint32_t VAR_1, short VAR_2) {
  int VAR_3;
  SIpHash * VAR_4;
  SHashObj *VAR_5;

  VAR_5 = (SHashObj *)VAR_0;
  if (VAR_5 == ((void*)0) || VAR_5->maxSessions == 0) return ((void*)0);

  VAR_3 = FUNC_0(VAR_5, VAR_1, VAR_2);
  VAR_4 = VAR_5->ipHashList[VAR_3];

  while (VAR_4) {
    if (VAR_4->ip == VAR_1 && VAR_4->port == VAR_2) {
      break;
    }
    VAR_4 = VAR_4->next;
  }

  if (VAR_4) {
    return VAR_4->data;
  }
  return ((void*)0);
}
