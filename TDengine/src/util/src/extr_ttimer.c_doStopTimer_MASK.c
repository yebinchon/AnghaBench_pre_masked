
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_6__ {scalar_t__ executedBy; int param; int fp; int id; TYPE_1__* ctrl; int state; } ;
typedef TYPE_2__ tmr_obj_t ;
struct TYPE_5__ {int label; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (char const*,int ,int ,int ,int ) ;

__attribute__((used)) static bool FUNC_7(tmr_obj_t* VAR_3, uint8_t VAR_4) {
  bool VAR_5 = 0;

  if (VAR_4 == VAR_2) {
    if (FUNC_2(VAR_3)) {
      FUNC_3(VAR_3->id);


      VAR_5 = 1;
    }
    const char* VAR_6 = "%s timer[id=%lld, fp=%p, param=%p] is cancelled.";
    FUNC_6(VAR_6, VAR_3->ctrl->label, VAR_3->id, VAR_3->fp, VAR_3->param);
  } else if (VAR_4 != VAR_0) {

  } else if (VAR_3->executedBy == FUNC_5()) {



  } else {
    FUNC_0(VAR_3->executedBy != FUNC_5());

    const char* VAR_7 = "%s timer[id=%lld, fp=%p, param=%p] fired, waiting...";
    FUNC_6(VAR_7, VAR_3->ctrl->label, VAR_3->id, VAR_3->fp, VAR_3->param);

    for (int VAR_8 = 1; FUNC_1(&VAR_3->state) != VAR_1; VAR_8++) {
      if (VAR_8 % 1000 == 0) {
        FUNC_4();
      }
    }

    VAR_7 = "%s timer[id=%lld, fp=%p, param=%p] stopped.";
    FUNC_6(VAR_7, VAR_3->ctrl->label, VAR_3->id, VAR_3->fp, VAR_3->param);
  }

  return VAR_5;
}
