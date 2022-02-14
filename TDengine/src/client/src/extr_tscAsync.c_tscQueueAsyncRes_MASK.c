
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int * msg; void* thandle; TYPE_2__* ahandle; int fp; } ;
struct TYPE_7__ {int code; } ;
struct TYPE_8__ {TYPE_1__ res; struct TYPE_8__* signature; } ;
typedef TYPE_2__ SSqlObj ;
typedef TYPE_3__ SSchedMsg ;


 int FUNC_0 (int ,TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,TYPE_2__*,...) ;

void FUNC_2(SSqlObj *VAR_2) {
  if (VAR_2 == ((void*)0) || VAR_2->signature != VAR_2) {
    FUNC_1("%p SqlObj is freed, not add into queue async res", VAR_2);
    return;
  } else {
    FUNC_1("%p add into queued async res, code:%d", VAR_2, VAR_2->res.code);
  }

  SSchedMsg VAR_3;
  VAR_3.fp = VAR_0;
  VAR_3.ahandle = VAR_2;
  VAR_3.thandle = (void *)1;
  VAR_3.msg = ((void*)0);
  FUNC_0(VAR_1, &VAR_3);
}
