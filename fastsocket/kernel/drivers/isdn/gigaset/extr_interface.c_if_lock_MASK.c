
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cardstate {scalar_t__ mstate; int control_state; int waiting; int cmd_result; int waitqueue; int at_state; TYPE_1__* ops; scalar_t__ connected; int minor_index; } ;
struct TYPE_2__ {int (* set_line_ctrl ) (struct cardstate*,int ) ;int (* baud_rate ) (struct cardstate*,int ) ;int (* set_modem_ctrl ) (struct cardstate*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct cardstate*,int *,int ,int *,int,int *) ;
 int FUNC_2 (struct cardstate*) ;
 int FUNC_3 (struct cardstate*,int ,int) ;
 int FUNC_4 (struct cardstate*,int ) ;
 int FUNC_5 (struct cardstate*,int ) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static int FUNC_7(struct cardstate *VAR_10, int *VAR_11)
{
 int VAR_12 = *VAR_11;

 FUNC_0(VAR_3, "%u: if_lock (%d)", VAR_10->minor_index, VAR_12);

 if (VAR_12 > 1)
  return -VAR_4;

 if (VAR_12 < 0) {
  *VAR_11 = VAR_10->mstate == VAR_7;
  return 0;
 }

 if (!VAR_12 && VAR_10->mstate == VAR_7 && VAR_10->connected) {
  VAR_10->ops->set_modem_ctrl(VAR_10, 0, VAR_8|VAR_9);
  VAR_10->ops->baud_rate(VAR_10, VAR_0);
  VAR_10->ops->set_line_ctrl(VAR_10, VAR_1);
  VAR_10->control_state = VAR_8|VAR_9;
 }

 VAR_10->waiting = 1;
 if (!FUNC_1(VAR_10, &VAR_10->at_state, VAR_6,
          ((void*)0), VAR_12, ((void*)0))) {
  VAR_10->waiting = 0;
  return -VAR_5;
 }

 FUNC_0(VAR_2, "scheduling IF_LOCK");
 FUNC_2(VAR_10);

 FUNC_6(VAR_10->waitqueue, !VAR_10->waiting);

 if (VAR_10->cmd_result >= 0) {
  *VAR_11 = VAR_10->cmd_result;
  return 0;
 }

 return VAR_10->cmd_result;
}
