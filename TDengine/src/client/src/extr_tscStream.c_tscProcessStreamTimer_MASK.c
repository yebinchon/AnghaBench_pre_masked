
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ stime; scalar_t__ etime; } ;
struct TYPE_9__ {int * msg; void* thandle; TYPE_1__* ahandle; int fp; } ;
struct TYPE_8__ {TYPE_6__ cmd; } ;
struct TYPE_7__ {void* pTimer; scalar_t__ stime; scalar_t__ etime; scalar_t__ interval; int precision; TYPE_2__* pSql; scalar_t__ numOfRes; } ;
typedef TYPE_1__ SSqlStream ;
typedef TYPE_2__ SSqlObj ;
typedef TYPE_3__ SSchedMsg ;


 scalar_t__ FUNC_0 (TYPE_6__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(void *VAR_2, void *VAR_3) {
  SSqlStream *VAR_4 = (SSqlStream *)VAR_2;
  if (VAR_4 == ((void*)0)) return;
  if (VAR_4->pTimer != VAR_3) return;
  VAR_4->pTimer = ((void*)0);

  VAR_4->numOfRes = 0;
  SSqlObj *VAR_5 = VAR_4->pSql;
  FUNC_3("%p add into timer", VAR_5);

  if (FUNC_0(&VAR_5->cmd)) {




    VAR_5->cmd.stime = VAR_4->stime;

    VAR_5->cmd.etime = FUNC_1(VAR_4->precision);
    if (VAR_5->cmd.etime > VAR_4->etime) {
      VAR_5->cmd.etime = VAR_4->etime;
    }
  } else {
    VAR_5->cmd.stime = VAR_4->stime - VAR_4->interval;
    VAR_5->cmd.etime = VAR_4->stime - 1;
  }


  SSchedMsg VAR_6;
  VAR_6.fp = VAR_0;
  VAR_6.ahandle = VAR_4;
  VAR_6.thandle = (void *)1;
  VAR_6.msg = ((void*)0);
  FUNC_2(VAR_1, &VAR_6);
}
