
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int maxSessions; } ;
struct TYPE_11__ {TYPE_1__ cfg; int numOfTables; } ;
struct TYPE_10__ {scalar_t__ idPool; int numOfMeters; int dbName; } ;
typedef TYPE_2__ SVgObj ;
typedef TYPE_3__ SDbObj ;


 int FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 TYPE_3__* FUNC_2 (int ) ;
 void* FUNC_3 (int ,void*,void**) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_0 ;

void FUNC_6() {
  void * VAR_1 = ((void*)0);
  SVgObj *VAR_2 = ((void*)0);
  SDbObj *VAR_3;

  while (1) {
    VAR_1 = FUNC_3(VAR_0, VAR_1, (void **)&VAR_2);
    if (VAR_2 == ((void*)0) || VAR_2->idPool == 0) break;

    FUNC_5(VAR_2->idPool);
    VAR_2->numOfMeters = FUNC_4(VAR_2->idPool);

    VAR_3 = FUNC_2(VAR_2->dbName);
    VAR_3->numOfTables += VAR_2->numOfMeters;
    if (VAR_2->numOfMeters >= VAR_3->cfg.maxSessions - 1)
      FUNC_1(VAR_3, VAR_2);
    else
      FUNC_0(VAR_3, VAR_2);
  }
}
