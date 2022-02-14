
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {uintptr_t id; int wheel; void* param; int fp; TYPE_2__* ctrl; int state; } ;
typedef TYPE_1__ tmr_obj_t ;
struct TYPE_10__ {int label; } ;
typedef TYPE_2__ tmr_ctrl_t ;
typedef int TAOS_TMR_CALLBACK ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 uintptr_t FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char const*,int ,uintptr_t,int ,void*) ;
 int VAR_1 ;

__attribute__((used)) static uintptr_t FUNC_7(tmr_obj_t* VAR_2, TAOS_TMR_CALLBACK VAR_3, int VAR_4, void* VAR_5, tmr_ctrl_t* VAR_6) {
  uintptr_t VAR_7 = FUNC_3();
  VAR_2->id = VAR_7;
  VAR_2->state = VAR_0;
  VAR_2->fp = VAR_3;
  VAR_2->param = VAR_5;
  VAR_2->ctrl = VAR_6;
  FUNC_0(VAR_2);

  const char* VAR_8 = "%s timer[id=%lld, fp=%p, param=%p] started";
  FUNC_6(VAR_8, VAR_6->label, VAR_2->id, VAR_2->fp, VAR_2->param);

  if (VAR_4 == 0) {
    VAR_2->wheel = FUNC_4(VAR_1);
    FUNC_5(VAR_2);
    FUNC_1(VAR_2);
  } else {
    FUNC_2(VAR_2, VAR_4);
  }


  return VAR_7;
}
