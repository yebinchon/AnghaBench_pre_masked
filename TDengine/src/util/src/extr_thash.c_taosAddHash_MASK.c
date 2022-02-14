
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {scalar_t__ maxSessions; int (* hashFp ) (TYPE_2__*,int ) ;int mutex; TYPE_1__** longHashList; int longHashMemPool; } ;
struct TYPE_4__ {unsigned int id; struct TYPE_4__* prev; struct TYPE_4__* next; int cont; } ;
typedef TYPE_1__ SLongHash ;
typedef TYPE_2__ SHashObj ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (int ) ;

int FUNC_4(void *VAR_0, uint64_t VAR_1, unsigned int VAR_2) {
  int VAR_3;
  SLongHash *VAR_4;
  SHashObj * VAR_5;

  VAR_5 = (SHashObj *)VAR_0;
  if (VAR_5 == ((void*)0) || VAR_5->maxSessions == 0) return -1;

  FUNC_0(&VAR_5->mutex);

  VAR_3 = (*VAR_5->hashFp)(VAR_5, VAR_1);

  VAR_4 = (SLongHash *)FUNC_3(VAR_5->longHashMemPool);
  VAR_4->cont = VAR_1;
  VAR_4->id = VAR_2;
  VAR_4->prev = 0;
  VAR_4->next = VAR_5->longHashList[VAR_3];

  if (VAR_5->longHashList[VAR_3] != 0) (VAR_5->longHashList[VAR_3])->prev = VAR_4;
  VAR_5->longHashList[VAR_3] = VAR_4;

  FUNC_1(&VAR_5->mutex);

  return 0;
}
