
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* pSql; struct TYPE_6__* signature; } ;
struct TYPE_4__ {int numOfRows; } ;
struct TYPE_5__ {TYPE_1__ res; } ;
typedef int TAOS ;
typedef TYPE_3__ STscObj ;



int FUNC_0(TAOS *VAR_0) {
  STscObj *VAR_1 = (STscObj *)VAR_0;
  if (VAR_1 == ((void*)0) || VAR_1->signature != VAR_1) return 0;

  return (VAR_1->pSql->res.numOfRows);
}
