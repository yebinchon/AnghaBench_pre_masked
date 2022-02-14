
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {struct TYPE_10__* next; int thandle; } ;
struct TYPE_9__ {struct TYPE_9__* next; } ;
struct TYPE_8__ {int mutex; TYPE_2__* streamList; TYPE_3__* sqlList; } ;
typedef TYPE_1__ STscObj ;
typedef TYPE_2__ SSqlStream ;
typedef TYPE_3__ SSqlObj ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (char*,TYPE_1__*) ;

void FUNC_6(STscObj *VAR_0) {
  FUNC_0(&VAR_0->mutex);

  SSqlObj *VAR_1 = VAR_0->sqlList;
  while (VAR_1) {
    FUNC_2(VAR_1->thandle);
    VAR_1 = VAR_1->next;
  }

  SSqlStream *VAR_2 = VAR_0->streamList;
  while (VAR_2) {
    FUNC_4(VAR_2);
    VAR_2 = VAR_2->next;
  }

  FUNC_1(&VAR_0->mutex);

  FUNC_3(VAR_0);

  FUNC_5("connection:%p is killed", VAR_0);
}
