
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct se_device {TYPE_1__* transport; } ;
struct se_cmd {int transport_state; int se_cmd_flags; int work; int t_state_lock; int t_state; int t_transport_stop_comp; int task_stop_comp; int t_data_sg; scalar_t__ scsi_status; struct se_device* se_dev; } ;
struct TYPE_2__ {int (* transport_complete ) (struct se_cmd*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct se_cmd*,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (struct se_cmd*) ;

void FUNC_7(struct se_cmd *VAR_13, u8 VAR_14)
{
 struct se_device *VAR_15 = VAR_13->se_dev;
 int VAR_16 = VAR_14 == VAR_7;
 unsigned long VAR_17;

 VAR_13->scsi_status = VAR_14;


 FUNC_3(&VAR_13->t_state_lock, VAR_17);
 VAR_13->transport_state &= ~VAR_2;

 if (VAR_15 && VAR_15->transport->transport_complete) {
  VAR_15->transport->transport_complete(VAR_13,
    VAR_13->t_data_sg,
    FUNC_6(VAR_13));
  if (VAR_13->se_cmd_flags & VAR_8)
   VAR_16 = 1;
 }




 if (VAR_13->transport_state & VAR_5) {
  FUNC_4(&VAR_13->t_state_lock, VAR_17);
  FUNC_1(&VAR_13->task_stop_comp);
  return;
 }

 if (!VAR_16)
  VAR_13->transport_state |= VAR_4;





 if (VAR_13->transport_state & VAR_0 &&
     VAR_13->transport_state & VAR_6) {
  FUNC_4(&VAR_13->t_state_lock, VAR_17);
  FUNC_1(&VAR_13->t_transport_stop_comp);
  return;
 } else if (VAR_13->transport_state & VAR_4) {
  FUNC_0(&VAR_13->work, VAR_10);
 } else {
  FUNC_0(&VAR_13->work, VAR_11);
 }

 VAR_13->t_state = VAR_9;
 VAR_13->transport_state |= (VAR_3 | VAR_1);
 FUNC_4(&VAR_13->t_state_lock, VAR_17);

 FUNC_2(VAR_12, &VAR_13->work);
}
