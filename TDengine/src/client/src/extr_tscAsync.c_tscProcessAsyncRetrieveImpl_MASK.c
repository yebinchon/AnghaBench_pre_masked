
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ command; } ;
struct TYPE_5__ {scalar_t__ qhandle; int code; } ;
struct TYPE_6__ {void (* fp ) () ;int fetchFp; TYPE_1__ res; TYPE_3__ cmd; } ;
typedef int TAOS_RES ;
typedef TYPE_1__ SSqlRes ;
typedef TYPE_2__ SSqlObj ;
typedef TYPE_3__ SSqlCmd ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,void*) ;

__attribute__((used)) static void FUNC_3(void *VAR_5, TAOS_RES *VAR_6, int VAR_7, void (*VAR_8)()) {
  SSqlObj *VAR_9 = (SSqlObj *)VAR_6;
  if (VAR_9 == ((void*)0)) {
    FUNC_0("sql object is NULL");
    FUNC_2(VAR_9->fetchFp, VAR_5);
    return;
  }

  SSqlCmd *VAR_10 = &VAR_9->cmd;
  SSqlRes *VAR_11 = &VAR_9->res;

  if (VAR_11->qhandle == 0 || VAR_7 != 0) {
    if (VAR_11->qhandle == 0) {
      FUNC_0("qhandle is NULL");
    } else {
      VAR_11->code = VAR_7;
    }

    FUNC_2(VAR_9->fetchFp, VAR_5);
    return;
  }

  VAR_9->fp = VAR_8;
  if (VAR_10->command != VAR_4 && VAR_10->command < VAR_1) {
    VAR_10->command = (VAR_10->command > VAR_2) ? VAR_3 : VAR_0;
  }
  FUNC_1(VAR_9);
}
