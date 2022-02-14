
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int numOfOutputCols; int numOfHiddenCols; } ;
struct TYPE_4__ {TYPE_3__ fieldsInfo; } ;
struct TYPE_5__ {TYPE_1__ cmd; struct TYPE_5__* signature; } ;
typedef int TAOS_RES ;
typedef TYPE_2__ SSqlObj ;
typedef TYPE_3__ SFieldInfo ;



int FUNC_0(TAOS_RES *VAR_0) {
  SSqlObj *VAR_1 = (SSqlObj *)VAR_0;
  if (VAR_1 == ((void*)0) || VAR_1->signature != VAR_1) return 0;

  SFieldInfo *VAR_2 = &VAR_1->cmd.fieldsInfo;

  return (VAR_2->numOfOutputCols - VAR_2->numOfHiddenCols);
}
