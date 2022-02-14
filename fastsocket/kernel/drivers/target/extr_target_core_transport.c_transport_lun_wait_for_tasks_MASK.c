
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_lun {int dummy; } ;
struct se_cmd {int transport_state; TYPE_1__* se_tfo; int transport_lun_stop_comp; int t_state_lock; } ;
struct TYPE_2__ {int (* get_task_tag ) (struct se_cmd*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,struct se_cmd*,...) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct se_cmd*) ;
 int FUNC_4 (struct se_cmd*) ;
 int FUNC_5 (struct se_cmd*) ;
 int FUNC_6 (struct se_cmd*,unsigned long*) ;
 int FUNC_7 (struct se_cmd*,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct se_cmd *VAR_6, struct se_lun *VAR_7)
{
 unsigned long VAR_8;
 int VAR_9 = 0;





 FUNC_1(&VAR_6->t_state_lock, VAR_8);
 if (VAR_6->transport_state & VAR_4) {
  VAR_6->transport_state &= ~VAR_2;

  FUNC_0("ConfigFS ITT[0x%08x] - CMD_T_STOP, skipping\n",
    VAR_6->se_tfo->get_task_tag(VAR_6));
  FUNC_2(&VAR_6->t_state_lock, VAR_8);
  FUNC_7(VAR_6, 0);
  return -VAR_5;
 }
 VAR_6->transport_state |= VAR_1;
 FUNC_2(&VAR_6->t_state_lock, VAR_8);


 FUNC_1(&VAR_6->t_state_lock, VAR_8);
 if ((VAR_6->transport_state & VAR_0) &&
     (VAR_6->transport_state & VAR_3)) {
  if (!FUNC_6(VAR_6, &VAR_8))
   VAR_9++;
 }
 FUNC_2(&VAR_6->t_state_lock, VAR_8);

 FUNC_0("ConfigFS: cmd: %p stop tasks ret:"
   " %d\n", VAR_6, VAR_9);
 if (!VAR_9) {
  FUNC_0("ConfigFS: ITT[0x%08x] - stopping cmd....\n",
    VAR_6->se_tfo->get_task_tag(VAR_6));
  FUNC_8(&VAR_6->transport_lun_stop_comp);
  FUNC_0("ConfigFS: ITT[0x%08x] - stopped cmd....\n",
    VAR_6->se_tfo->get_task_tag(VAR_6));
 }

 return 0;
}
