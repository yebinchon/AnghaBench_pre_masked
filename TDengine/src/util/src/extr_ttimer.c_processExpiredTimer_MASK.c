
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_5__ {scalar_t__ id; int param; int (* fp ) (int ,int ) ;TYPE_1__* ctrl; int state; int executedBy; } ;
typedef TYPE_2__ tmr_obj_t ;
typedef int tmr_h ;
struct TYPE_4__ {int label; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (char const*,int ,scalar_t__,int (*) (int ,int ),int ) ;

__attribute__((used)) static void FUNC_7(void* VAR_3, void* VAR_4) {
  tmr_obj_t* VAR_5 = (tmr_obj_t*)VAR_3;
  VAR_5->executedBy = FUNC_4();
  uint8_t VAR_6 = FUNC_1(&VAR_5->state, VAR_2, VAR_0);
  if (VAR_6 == VAR_2) {
    const char* VAR_7 = "%s timer[id=%lld, fp=%p, param=%p] execution start.";
    FUNC_6(VAR_7, VAR_5->ctrl->label, VAR_5->id, VAR_5->fp, VAR_5->param);

    (*VAR_5->fp)(VAR_5->param, (tmr_h)VAR_5->id);
    FUNC_0(&VAR_5->state, VAR_1);

    VAR_7 = "%s timer[id=%lld, fp=%p, param=%p] execution end.";
    FUNC_6(VAR_7, VAR_5->ctrl->label, VAR_5->id, VAR_5->fp, VAR_5->param);
  }
  FUNC_2(VAR_5->id);
  FUNC_5(VAR_5);
}
