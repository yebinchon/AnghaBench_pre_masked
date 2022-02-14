
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ command; } ;
struct TYPE_6__ {scalar_t__ qhandle; int numOfRows; } ;
struct TYPE_7__ {struct TYPE_7__* signature; TYPE_1__ res; TYPE_3__ cmd; } ;
typedef int TAOS_RES ;
typedef TYPE_1__ SSqlRes ;
typedef TYPE_2__ SSqlObj ;
typedef TYPE_3__ SSqlCmd ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(TAOS_RES *VAR_4) {
  if (VAR_4 == ((void*)0)) return 0;
  SSqlObj *VAR_5 = (SSqlObj *)VAR_4;
  SSqlCmd *VAR_6 = &VAR_5->cmd;
  SSqlRes *VAR_7 = &VAR_5->res;
  if (VAR_5 == ((void*)0) || VAR_5->signature != VAR_5) return 0;
  if (VAR_7->qhandle == 0) return 0;

  FUNC_1(VAR_7);

  if (VAR_6->command < VAR_1) {
    VAR_6->command = (VAR_6->command > VAR_2) ? VAR_3 : VAR_0;
  }
  FUNC_0(VAR_5);

  return VAR_7->numOfRows;
}
