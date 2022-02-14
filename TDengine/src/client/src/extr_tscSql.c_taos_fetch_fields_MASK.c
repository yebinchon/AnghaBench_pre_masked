
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * pFields; } ;
struct TYPE_5__ {TYPE_1__ fieldsInfo; } ;
struct TYPE_6__ {TYPE_2__ cmd; struct TYPE_6__* signature; } ;
typedef int TAOS_RES ;
typedef int TAOS_FIELD ;
typedef TYPE_3__ SSqlObj ;



TAOS_FIELD *FUNC_0(TAOS_RES *VAR_0) {
  SSqlObj *VAR_1 = (SSqlObj *)VAR_0;
  if (VAR_1 == ((void*)0) || VAR_1->signature != VAR_1) return 0;

  return VAR_1->cmd.fieldsInfo.pFields;
}
