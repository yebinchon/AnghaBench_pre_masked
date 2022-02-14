
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int8_t ;
struct TYPE_6__ {TYPE_2__* pSql; struct TYPE_6__* signature; } ;
struct TYPE_4__ {int code; } ;
struct TYPE_5__ {TYPE_1__ res; } ;
typedef int TAOS ;
typedef TYPE_3__ STscObj ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(TAOS *VAR_2) {
  STscObj *VAR_3 = (STscObj *)VAR_2;
  int VAR_4;

  if (VAR_3 == ((void*)0) || VAR_3->signature != VAR_3) return VAR_1;

  if ((int8_t)(VAR_3->pSql->res.code) == -1)
    VAR_4 = VAR_0;
  else
    VAR_4 = VAR_3->pSql->res.code;

  return VAR_4;
}
