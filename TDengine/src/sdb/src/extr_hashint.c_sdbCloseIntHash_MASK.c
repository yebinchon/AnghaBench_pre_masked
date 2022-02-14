
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ maxSessions; struct TYPE_4__* longHashList; scalar_t__ longHashMemPool; } ;
typedef TYPE_1__ SHashObj ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(void *VAR_0) {
  SHashObj *VAR_1;

  VAR_1 = (SHashObj *)VAR_0;
  if (VAR_1 == ((void*)0) || VAR_1->maxSessions == 0) return;

  if (VAR_1->longHashMemPool) FUNC_2(VAR_1->longHashMemPool);

  if (VAR_1->longHashList) FUNC_0(VAR_1->longHashList);

  FUNC_1(VAR_1, 0, sizeof(SHashObj));
  FUNC_0(VAR_1);
}
