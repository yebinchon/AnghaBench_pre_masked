
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {uintptr_t id; int param; int fp; TYPE_1__* ctrl; struct TYPE_7__* next; } ;
typedef TYPE_2__ tmr_obj_t ;
struct TYPE_8__ {int * thandle; TYPE_2__* ahandle; int tfp; int * fp; } ;
struct TYPE_6__ {int label; } ;
typedef TYPE_3__ SSchedMsg ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_1 (char const*,uintptr_t,...) ;

__attribute__((used)) static void FUNC_2(tmr_obj_t* VAR_2) {
  const char* VAR_3 = "%s adding expired timer[id=%lld, fp=%p, param=%p] to queue.";

  while (VAR_2 != ((void*)0)) {
    uintptr_t VAR_4 = VAR_2->id;
    tmr_obj_t* VAR_5 = VAR_2->next;
    FUNC_1(VAR_3, VAR_2->ctrl->label, VAR_4, VAR_2->fp, VAR_2->param);

    SSchedMsg VAR_6;
    VAR_6.fp = ((void*)0);
    VAR_6.tfp = VAR_0;
    VAR_6.ahandle = VAR_2;
    VAR_6.thandle = ((void*)0);
    FUNC_0(VAR_1, &VAR_6);

    FUNC_1("timer[id=%lld] has been added to queue.", VAR_4);
    VAR_2 = VAR_5;
  }
}
