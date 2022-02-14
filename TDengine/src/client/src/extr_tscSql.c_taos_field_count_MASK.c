
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pSql; struct TYPE_2__* signature; } ;
typedef int TAOS ;
typedef TYPE_1__ STscObj ;


 int FUNC_0 (int ) ;

int FUNC_1(TAOS *VAR_0) {
  STscObj *VAR_1 = (STscObj *)VAR_0;
  if (VAR_1 == ((void*)0) || VAR_1->signature != VAR_1) return 0;

  return FUNC_0(VAR_1->pSql);
}
