
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int thandle; struct TYPE_7__* next; int queryId; } ;
struct TYPE_6__ {int mutex; TYPE_2__* sqlList; } ;
typedef TYPE_1__ STscObj ;
typedef TYPE_2__ SSqlObj ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*,TYPE_2__*,int ,int ) ;

void FUNC_4(STscObj *VAR_0, uint32_t VAR_1) {
  FUNC_0(&VAR_0->mutex);

  SSqlObj *VAR_2 = VAR_0->sqlList;
  while (VAR_2) {
    if (VAR_2->queryId == VAR_1) break;
    VAR_2 = VAR_2->next;
  }

  FUNC_1(&VAR_0->mutex);

  if (VAR_2 == ((void*)0)) return;

  FUNC_3("%p query is killed, queryId:%d thandle:%p", VAR_2, VAR_1, VAR_2->thandle);
  FUNC_2(VAR_2);
}
