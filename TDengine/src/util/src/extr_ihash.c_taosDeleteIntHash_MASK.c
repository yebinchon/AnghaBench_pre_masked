
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef size_t int32_t ;
struct TYPE_8__ {TYPE_1__* prev; struct TYPE_8__* next; int key; } ;
struct TYPE_7__ {scalar_t__ maxSessions; size_t (* hashFp ) (TYPE_2__*,int ) ;int mutex; TYPE_3__** hashList; } ;
struct TYPE_6__ {TYPE_3__* next; } ;
typedef TYPE_2__ IHashObj ;
typedef TYPE_3__ IHashNode ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (TYPE_2__*,int ) ;

void FUNC_4(void *VAR_0, uint64_t VAR_1) {
  int32_t VAR_2;
  IHashNode *VAR_3;
  IHashObj * VAR_4;

  VAR_4 = (IHashObj *)VAR_0;
  if (VAR_4 == ((void*)0) || VAR_4->maxSessions == 0) return;

  VAR_2 = (*(VAR_4->hashFp))(VAR_4, VAR_1);

  FUNC_1(&VAR_4->mutex);

  VAR_3 = VAR_4->hashList[VAR_2];
  while (VAR_3) {
    if (VAR_3->key == VAR_1) break;

    VAR_3 = VAR_3->next;
  }

  if (VAR_3) {
    if (VAR_3->prev) {
      VAR_3->prev->next = VAR_3->next;
    } else {
      VAR_4->hashList[VAR_2] = VAR_3->next;
    }

    if (VAR_3->next) {
      VAR_3->next->prev = VAR_3->prev;
    }

    FUNC_0(VAR_3);
  }

  FUNC_2(&VAR_4->mutex);
}
