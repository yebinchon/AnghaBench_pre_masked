
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef size_t int32_t ;
struct TYPE_5__ {scalar_t__ data; struct TYPE_5__* prev; struct TYPE_5__* next; int key; } ;
struct TYPE_4__ {scalar_t__ maxSessions; size_t (* hashFp ) (TYPE_1__*,int ) ;int mutex; TYPE_2__** hashList; scalar_t__ dataSize; } ;
typedef TYPE_1__ IHashObj ;
typedef TYPE_2__ IHashNode ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,char*,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 size_t FUNC_4 (TYPE_1__*,int ) ;

char *FUNC_5(void *VAR_0, uint64_t VAR_1, char *VAR_2) {
  int32_t VAR_3;
  IHashNode *VAR_4;
  IHashObj * VAR_5;

  VAR_5 = (IHashObj *)VAR_0;
  if (VAR_5 == ((void*)0) || VAR_5->maxSessions == 0) return ((void*)0);

  VAR_3 = (*VAR_5->hashFp)(VAR_5, VAR_1);

  VAR_4 = (IHashNode *)FUNC_0(sizeof(IHashNode) + (size_t)VAR_5->dataSize);
  if (VAR_4 == ((void*)0))
    return ((void*)0);

  FUNC_2(&VAR_5->mutex);

  VAR_4->key = VAR_1;
  if (VAR_2 != ((void*)0)) {
    FUNC_1(VAR_4->data, VAR_2, (size_t)VAR_5->dataSize);
  }
  VAR_4->prev = 0;
  VAR_4->next = VAR_5->hashList[VAR_3];

  if (VAR_5->hashList[VAR_3] != 0) (VAR_5->hashList[VAR_3])->prev = VAR_4;
  VAR_5->hashList[VAR_3] = VAR_4;

  FUNC_3(&VAR_5->mutex);

  return (char *)VAR_4->data;
}
