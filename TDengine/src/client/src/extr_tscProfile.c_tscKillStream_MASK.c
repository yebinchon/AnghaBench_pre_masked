
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int param; int (* callback ) (int ) ;int pSql; struct TYPE_7__* next; int streamId; } ;
struct TYPE_6__ {int mutex; TYPE_2__* streamList; } ;
typedef TYPE_1__ STscObj ;
typedef TYPE_2__ SSqlStream ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char*,int ,TYPE_2__*,int ) ;

void FUNC_5(STscObj *VAR_0, uint32_t VAR_1) {
  FUNC_0(&VAR_0->mutex);

  SSqlStream *VAR_2 = VAR_0->streamList;
  while (VAR_2) {
    if (VAR_2->streamId == VAR_1) break;
    VAR_2 = VAR_2->next;
  }

  FUNC_1(&VAR_0->mutex);

  FUNC_4("%p stream:%p is killed, streamId:%d", VAR_2->pSql, VAR_2, VAR_1);

  FUNC_3(VAR_2);
  if (VAR_2->callback) {
    VAR_2->callback(VAR_2->param);
  }
}
