
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ command; } ;
struct TYPE_6__ {scalar_t__ qhandle; } ;
struct TYPE_7__ {void (* fetchFp ) (void*,int *,int) ;void* param; int fp; TYPE_3__ cmd; TYPE_1__ res; struct TYPE_7__* signature; } ;
typedef int TAOS_RES ;
typedef TYPE_1__ SSqlRes ;
typedef TYPE_2__ SSqlObj ;
typedef TYPE_3__ SSqlCmd ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int VAR_7 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (void (*) (void*,int *,int),void*) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(TAOS_RES *VAR_8, void (*VAR_9)(void *, TAOS_RES *, int), void *VAR_10) {
  SSqlObj *VAR_11 = (SSqlObj *)VAR_8;
  if (VAR_11 == ((void*)0) || VAR_11->signature != VAR_11) {
    FUNC_0("sql object is NULL");
    VAR_6 = VAR_0;
    FUNC_2(VAR_9, VAR_10);
    return;
  }

  SSqlRes *VAR_12 = &VAR_11->res;
  SSqlCmd *VAR_13 = &VAR_11->cmd;

  if (VAR_12->qhandle == 0) {
    FUNC_0("qhandle is NULL");
    FUNC_2(VAR_9, VAR_10);
    return;
  }


  VAR_11->fetchFp = VAR_9;
  VAR_11->fp = VAR_7;

  VAR_11->param = VAR_10;
  FUNC_3(VAR_12);

  if (VAR_13->command != VAR_5 && VAR_13->command < VAR_2) {
    VAR_13->command = (VAR_13->command > VAR_3) ? VAR_4 : VAR_1;
  }

  FUNC_1(VAR_11);
}
