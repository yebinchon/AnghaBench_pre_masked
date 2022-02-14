
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * pSql; struct TYPE_2__* signature; } ;
typedef int TAOS_RES ;
typedef int TAOS ;
typedef TYPE_1__ STscObj ;


 int VAR_0 ;
 int VAR_1 ;

TAOS_RES *FUNC_0(TAOS *VAR_2) {
  STscObj *VAR_3 = (STscObj *)VAR_2;
  if (VAR_3 == ((void*)0) || VAR_3->signature != VAR_3) {
    VAR_1 = VAR_0;
    return ((void*)0);
  }

  return VAR_3->pSql;
}
