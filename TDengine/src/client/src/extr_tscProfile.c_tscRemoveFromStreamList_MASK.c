
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_3__* pTscObj; } ;
struct TYPE_11__ {scalar_t__ listed; TYPE_2__* prev; TYPE_1__* next; } ;
struct TYPE_10__ {int mutex; TYPE_1__* streamList; } ;
struct TYPE_9__ {TYPE_1__* next; } ;
struct TYPE_8__ {TYPE_2__* prev; } ;
typedef TYPE_3__ STscObj ;
typedef TYPE_4__ SSqlStream ;
typedef TYPE_5__ SSqlObj ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(SSqlStream *VAR_0, SSqlObj *VAR_1) {
  if (VAR_0->listed == 0) return;

  STscObj *VAR_2 = VAR_1->pTscObj;

  FUNC_0(&VAR_2->mutex);

  if (VAR_0->prev)
    VAR_0->prev->next = VAR_0->next;
  else
    VAR_2->streamList = VAR_0->next;

  if (VAR_0->next) VAR_0->next->prev = VAR_0->prev;

  FUNC_1(&VAR_2->mutex);

  VAR_0->next = ((void*)0);
  VAR_0->prev = ((void*)0);

  VAR_0->listed = 0;
}
