
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ command; } ;
struct TYPE_6__ {TYPE_1__* pSql; struct TYPE_6__* signature; } ;
struct TYPE_5__ {TYPE_3__ cmd; } ;
typedef TYPE_2__ STscObj ;
typedef TYPE_3__ SSqlCmd ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

bool FUNC_0(STscObj* VAR_5) {
  if (VAR_5 == ((void*)0) || VAR_5->signature != VAR_5) {
    VAR_4 = VAR_0;
    return VAR_0;
  }

  SSqlCmd* VAR_6 = &VAR_5->pSql->cmd;
  return ((VAR_6->command >= VAR_2 && VAR_6->command <= VAR_1) ||
      VAR_3 == VAR_6->command) ? 1 : 0;

}
