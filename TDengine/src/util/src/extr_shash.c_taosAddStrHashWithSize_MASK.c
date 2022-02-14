
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_5__ {void* data; void* string; struct TYPE_5__* prev; struct TYPE_5__* next; } ;
struct TYPE_4__ {scalar_t__ maxSessions; size_t (* hashFp ) (TYPE_1__*,char*) ;int mutex; TYPE_2__** hashList; } ;
typedef TYPE_1__ SHashObj ;
typedef TYPE_2__ SHashNode ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (void*,char*,size_t) ;
 int FUNC_2 (char*,size_t,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (void*,char*) ;
 scalar_t__ FUNC_6 (char*) ;
 size_t FUNC_7 (TYPE_1__*,char*) ;

void *FUNC_8(void *VAR_0, char *VAR_1, char *VAR_2, int VAR_3) {
  uint32_t VAR_4;
  SHashNode *VAR_5;
  SHashObj * VAR_6;

  VAR_6 = (SHashObj *)VAR_0;
  if (VAR_6 == ((void*)0) || VAR_6->maxSessions == 0) return ((void*)0);
  if (VAR_1 == ((void*)0) || VAR_1[0] == 0) return ((void*)0);

  VAR_4 = (*VAR_6->hashFp)(VAR_6, VAR_1);

  FUNC_3(&VAR_6->mutex);

  VAR_5 = (SHashNode *)FUNC_0(sizeof(SHashNode) + (size_t)VAR_3 + FUNC_6(VAR_1) + 1);
  FUNC_1(VAR_5->data, VAR_2, (size_t)VAR_3);
  VAR_5->prev = 0;
  VAR_5->next = VAR_6->hashList[VAR_4];
  VAR_5->string = VAR_5->data + VAR_3;
  FUNC_5(VAR_5->string, VAR_1);

  if (VAR_6->hashList[VAR_4] != 0) (VAR_6->hashList[VAR_4])->prev = VAR_5;
  VAR_6->hashList[VAR_4] = VAR_5;

  FUNC_4(&VAR_6->mutex);

  FUNC_2("hash:%d:%s is added", VAR_4, VAR_1);

  return VAR_5->data;
}
