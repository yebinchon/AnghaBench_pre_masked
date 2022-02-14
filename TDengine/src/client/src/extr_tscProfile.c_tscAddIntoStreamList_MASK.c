
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int listed; scalar_t__ streamId; struct TYPE_7__* prev; struct TYPE_7__* next; TYPE_1__* pSql; } ;
struct TYPE_6__ {int mutex; TYPE_3__* streamList; } ;
struct TYPE_5__ {TYPE_2__* pTscObj; } ;
typedef TYPE_2__ STscObj ;
typedef TYPE_3__ SSqlStream ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(SSqlStream *VAR_0) {
  static uint32_t VAR_1 = 1;
  STscObj * VAR_2 = VAR_0->pSql->pTscObj;

  FUNC_0(&VAR_2->mutex);

  VAR_0->next = VAR_2->streamList;
  if (VAR_2->streamList) VAR_2->streamList->prev = VAR_0;
  VAR_2->streamList = VAR_0;
  VAR_0->streamId = VAR_1++;

  FUNC_1(&VAR_2->mutex);

  VAR_0->listed = 1;
}
