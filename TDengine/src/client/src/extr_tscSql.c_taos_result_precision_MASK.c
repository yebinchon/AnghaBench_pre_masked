
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int precision; } ;
struct TYPE_4__ {TYPE_1__ res; struct TYPE_4__* signature; } ;
typedef int TAOS_RES ;
typedef TYPE_2__ SSqlObj ;



int FUNC_0(TAOS_RES *VAR_0) {
  SSqlObj *VAR_1 = (SSqlObj *)VAR_0;
  if (VAR_1 == ((void*)0) || VAR_1->signature != VAR_1) return 0;

  return VAR_1->res.precision;
}
