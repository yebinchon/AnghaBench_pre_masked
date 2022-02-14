
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef size_t int32_t ;
struct TYPE_5__ {char* data; struct TYPE_5__* next; int key; } ;
struct TYPE_4__ {scalar_t__ maxSessions; size_t (* hashFp ) (TYPE_1__*,int ) ;int mutex; TYPE_2__** hashList; } ;
typedef TYPE_1__ IHashObj ;
typedef TYPE_2__ IHashNode ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (TYPE_1__*,int ) ;

char *FUNC_3(void *VAR_0, uint64_t VAR_1) {
  int32_t VAR_2;
  IHashNode *VAR_3;
  IHashObj * VAR_4;

  VAR_4 = (IHashObj *)VAR_0;
  if (VAR_4 == ((void*)0) || VAR_4->maxSessions == 0) return ((void*)0);

  VAR_2 = (*VAR_4->hashFp)(VAR_4, VAR_1);

  FUNC_0(&VAR_4->mutex);

  VAR_3 = VAR_4->hashList[VAR_2];

  while (VAR_3) {
    if (VAR_3->key == VAR_1) {
      break;
    }

    VAR_3 = VAR_3->next;
  }

  FUNC_1(&VAR_4->mutex);

  if (VAR_3) return VAR_3->data;

  return ((void*)0);
}
