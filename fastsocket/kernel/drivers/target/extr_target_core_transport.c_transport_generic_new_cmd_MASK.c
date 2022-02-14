
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_cmd {int se_cmd_flags; scalar_t__ data_direction; int se_dev; int t_state; TYPE_1__* se_tfo; int t_state_lock; int t_fe_count; scalar_t__ data_length; } ;
typedef int sense_reason_t ;
struct TYPE_2__ {int (* write_pending ) (struct se_cmd*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,struct se_cmd*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct se_cmd*) ;
 int FUNC_6 (struct se_cmd*) ;
 int FUNC_7 (struct se_cmd*) ;
 int FUNC_8 (struct se_cmd*,int) ;
 int FUNC_9 (struct se_cmd*) ;
 int FUNC_10 (struct se_cmd*,int ) ;

sense_reason_t
FUNC_11(struct se_cmd *VAR_7)
{
 int VAR_8 = 0;






 if (!(VAR_7->se_cmd_flags & VAR_3) &&
     VAR_7->data_length) {
  VAR_8 = FUNC_9(VAR_7);
  if (VAR_8 < 0)
   return VAR_4;
 }

 FUNC_1(&VAR_7->t_fe_count);






 FUNC_6(VAR_7);
 if (VAR_7->data_direction != VAR_0) {
  FUNC_7(VAR_7);
  return 0;
 }

 FUNC_3(&VAR_7->t_state_lock);
 VAR_7->t_state = VAR_6;
 FUNC_4(&VAR_7->t_state_lock);

 FUNC_8(VAR_7, 0);

 VAR_8 = VAR_7->se_tfo->write_pending(VAR_7);
 if (VAR_8 == -VAR_1 || VAR_8 == -VAR_2)
  goto queue_full;


 FUNC_0(VAR_8);

 return (!VAR_8) ? 0 : VAR_4;

queue_full:
 FUNC_2("Handling write_pending QUEUE__FULL: se_cmd: %p\n", VAR_7);
 VAR_7->t_state = VAR_5;
 FUNC_10(VAR_7, VAR_7->se_dev);
 return 0;
}
