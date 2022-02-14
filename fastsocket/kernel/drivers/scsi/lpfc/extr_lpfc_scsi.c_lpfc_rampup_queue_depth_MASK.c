
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct lpfc_vport {scalar_t__ cfg_lun_queue_depth; struct lpfc_hba* phba; } ;
struct lpfc_hba {TYPE_1__* pport; int hbalock; scalar_t__ last_ramp_up_time; scalar_t__ last_rsrc_error_time; int num_cmd_success; } ;
struct TYPE_2__ {scalar_t__ work_port_events; int work_port_lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_5(struct lpfc_vport *VAR_3,
   uint32_t VAR_4)
{
 unsigned long VAR_5;
 struct lpfc_hba *VAR_6 = VAR_3->phba;
 uint32_t VAR_7;
 FUNC_0(&VAR_6->num_cmd_success);

 if (VAR_3->cfg_lun_queue_depth <= VAR_4)
  return;
 FUNC_2(&VAR_6->hbalock, VAR_5);
 if (FUNC_4(VAR_2,
   VAR_6->last_ramp_up_time + VAR_0) ||
     FUNC_4(VAR_2,
   VAR_6->last_rsrc_error_time + VAR_0)) {
  FUNC_3(&VAR_6->hbalock, VAR_5);
  return;
 }
 VAR_6->last_ramp_up_time = VAR_2;
 FUNC_3(&VAR_6->hbalock, VAR_5);

 FUNC_2(&VAR_6->pport->work_port_lock, VAR_5);
 VAR_7 = VAR_6->pport->work_port_events & VAR_1;
 if (!VAR_7)
  VAR_6->pport->work_port_events |= VAR_1;
 FUNC_3(&VAR_6->pport->work_port_lock, VAR_5);

 if (!VAR_7)
  FUNC_1(VAR_6);
 return;
}
