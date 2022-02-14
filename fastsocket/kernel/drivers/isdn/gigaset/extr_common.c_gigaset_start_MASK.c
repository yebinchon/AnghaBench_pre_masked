
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cardstate {int connected; scalar_t__ mstate; int control_state; int waiting; int mutex; int waitqueue; int at_state; TYPE_1__* ops; int lock; } ;
struct TYPE_2__ {int (* set_line_ctrl ) (struct cardstate*,int ) ;int (* baud_rate ) (struct cardstate*,int ) ;int (* set_modem_ctrl ) (struct cardstate*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct cardstate*,int *,int ,int *,int ,int *) ;
 int FUNC_2 (struct cardstate*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct cardstate*,int ,int) ;
 int FUNC_8 (struct cardstate*,int ) ;
 int FUNC_9 (struct cardstate*,int ) ;
 int FUNC_10 (int ,int) ;

int FUNC_11(struct cardstate *VAR_7)
{
 unsigned long VAR_8;

 if (FUNC_3(&VAR_7->mutex))
  return 0;

 FUNC_5(&VAR_7->lock, VAR_8);
 VAR_7->connected = 1;
 FUNC_6(&VAR_7->lock, VAR_8);

 if (VAR_7->mstate != VAR_4) {
  VAR_7->ops->set_modem_ctrl(VAR_7, 0, VAR_5|VAR_6);
  VAR_7->ops->baud_rate(VAR_7, VAR_0);
  VAR_7->ops->set_line_ctrl(VAR_7, VAR_1);
  VAR_7->control_state = VAR_5|VAR_6;
 } else {

 }

 VAR_7->waiting = 1;

 if (!FUNC_1(VAR_7, &VAR_7->at_state, VAR_3, ((void*)0), 0, ((void*)0))) {
  VAR_7->waiting = 0;

  goto error;
 }

 FUNC_0(VAR_2, "scheduling START");
 FUNC_2(VAR_7);

 FUNC_10(VAR_7->waitqueue, !VAR_7->waiting);

 FUNC_4(&VAR_7->mutex);
 return 1;

error:
 FUNC_4(&VAR_7->mutex);
 return 0;
}
