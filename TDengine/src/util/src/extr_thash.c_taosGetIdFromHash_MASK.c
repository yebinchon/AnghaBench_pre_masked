
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int int32_t ;
struct TYPE_5__ {scalar_t__ maxSessions; int (* hashFp ) (TYPE_2__*,int ) ;int mutex; TYPE_1__** longHashList; } ;
struct TYPE_4__ {int id; struct TYPE_4__* next; int cont; } ;
typedef TYPE_1__ SLongHash ;
typedef TYPE_2__ SHashObj ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int ) ;

int32_t FUNC_3(void *VAR_0, uint64_t VAR_1) {
  int VAR_2;
  SLongHash *VAR_3;
  SHashObj * VAR_4;

  VAR_4 = (SHashObj *)VAR_0;
  if (VAR_4 == ((void*)0) || VAR_4->maxSessions == 0) return -1;

  VAR_2 = (*VAR_4->hashFp)(VAR_4, VAR_1);

  FUNC_0(&VAR_4->mutex);

  VAR_3 = VAR_4->longHashList[VAR_2];

  while (VAR_3) {
    if (VAR_3->cont == VAR_1) {
      break;
    }

    VAR_3 = VAR_3->next;
  }

  FUNC_1(&VAR_4->mutex);

  if (VAR_3) return (int32_t)VAR_3->id;

  return -1;
}
