
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int * msg; int thandle; TYPE_2__* ahandle; int fp; } ;
struct TYPE_10__ {scalar_t__ command; } ;
struct TYPE_8__ {scalar_t__ qhandle; scalar_t__ row; scalar_t__ numOfRows; int tsrow; } ;
struct TYPE_9__ {void (* fetchFp ) (void*,int *,VAR_0) ;int fp; void* param; TYPE_3__ cmd; TYPE_1__ res; struct TYPE_9__* signature; } ;
typedef int TAOS_RES ;
typedef TYPE_1__ SSqlRes ;
typedef TYPE_2__ SSqlObj ;
typedef TYPE_3__ SSqlCmd ;
typedef TYPE_4__ SSchedMsg ;


 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,TYPE_4__*) ;
 int FUNC_1 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_8 ;
 int FUNC_3 (void (*) (void*,int *,VAR_9),void*) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(TAOS_RES *VAR_10, void (*VAR_11)(void *, TAOS_RES *, VAR_12), void *VAR_13) {
  SSqlObj *VAR_14 = (SSqlObj *)VAR_10;
  if (VAR_14 == ((void*)0) || VAR_14->signature != VAR_14) {
    FUNC_1("sql object is NULL");
    VAR_5 = VAR_1;
    FUNC_3(VAR_11, VAR_13);
    return;
  }

  SSqlRes *VAR_15 = &VAR_14->res;
  SSqlCmd *VAR_16 = &VAR_14->cmd;

  if (VAR_15->qhandle == 0) {
    FUNC_1("qhandle is NULL");
    FUNC_3(VAR_11, VAR_13);
    return;
  }

  VAR_14->fetchFp = VAR_11;
  VAR_14->param = VAR_13;

  if (VAR_15->row >= VAR_15->numOfRows) {
    FUNC_4(VAR_15);
    VAR_14->fp = VAR_6;
    VAR_16->command = (VAR_16->command > VAR_3) ? VAR_4 : VAR_2;
    FUNC_2(VAR_14);
  } else {
    SSchedMsg VAR_17;
    VAR_17.fp = VAR_7;
    VAR_17.ahandle = VAR_14;
    VAR_17.thandle = VAR_15->tsrow;
    VAR_17.msg = ((void*)0);
    FUNC_0(VAR_8, &VAR_17);
  }
}
