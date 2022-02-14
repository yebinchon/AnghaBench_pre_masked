
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {void* data; int hash; struct TYPE_6__* prev; struct TYPE_6__* next; int string; } ;
struct TYPE_5__ {scalar_t__ maxSessions; int dataSize; TYPE_2__** hashList; } ;
typedef TYPE_1__ SHashObj ;
typedef TYPE_2__ SHashNode ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (void*,void*,int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (int ,char*) ;

void *FUNC_5(void *VAR_0, void *VAR_1, void *VAR_2) {
  int VAR_3;
  SHashNode *VAR_4;
  SHashObj * VAR_5;
  char * VAR_6 = (char *)VAR_1;

  VAR_5 = (SHashObj *)VAR_0;
  if (VAR_5 == ((void*)0) || VAR_5->maxSessions == 0) return ((void*)0);

  VAR_3 = FUNC_3(VAR_5, VAR_6);

  int VAR_7 = sizeof(SHashNode) + VAR_5->dataSize;
  VAR_4 = (SHashNode *)FUNC_0(VAR_7);
  FUNC_2(VAR_4, 0, VAR_7);
  FUNC_4(VAR_4->string, VAR_6);
  FUNC_1(VAR_4->data, VAR_2, VAR_5->dataSize);
  VAR_4->prev = 0;
  VAR_4->next = VAR_5->hashList[VAR_3];
  VAR_4->hash = VAR_3;

  if (VAR_5->hashList[VAR_3] != 0) (VAR_5->hashList[VAR_3])->prev = VAR_4;
  VAR_5->hashList[VAR_3] = VAR_4;

  return VAR_4->data;
}
