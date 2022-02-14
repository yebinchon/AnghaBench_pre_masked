
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ maxSessions; TYPE_1__** longHashList; } ;
struct TYPE_4__ {scalar_t__ key; void* data; struct TYPE_4__* next; } ;
typedef TYPE_1__ SLongHash ;
typedef TYPE_2__ SHashObj ;


 int FUNC_0 (TYPE_2__*,scalar_t__) ;

void *FUNC_1(void *VAR_0, void *VAR_1) {
  int VAR_2;
  SLongHash *VAR_3;
  SHashObj * VAR_4;
  uint32_t VAR_5 = *((uint32_t *)VAR_1);

  VAR_4 = (SHashObj *)VAR_0;
  if (VAR_4 == ((void*)0) || VAR_4->maxSessions == 0) return ((void*)0);

  VAR_2 = FUNC_0(VAR_4, VAR_5);
  VAR_3 = VAR_4->longHashList[VAR_2];

  while (VAR_3) {
    if (VAR_3->key == VAR_5) {
      break;
    }
    VAR_3 = VAR_3->next;
  }

  if (VAR_3) return VAR_3->data;

  return ((void*)0);
}
