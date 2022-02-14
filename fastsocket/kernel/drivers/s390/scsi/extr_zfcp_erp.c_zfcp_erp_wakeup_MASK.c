
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_adapter {int erp_lock; int erp_done_wqh; int status; int erp_running_head; int erp_ready_head; } ;
struct TYPE_2__ {int config_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_7(struct zfcp_adapter *VAR_2)
{
 unsigned long VAR_3;

 FUNC_3(&VAR_1.config_lock, VAR_3);
 FUNC_2(&VAR_2->erp_lock);
 if (FUNC_1(&VAR_2->erp_ready_head) &&
     FUNC_1(&VAR_2->erp_running_head)) {
   FUNC_0(VAR_0,
       &VAR_2->status);
   FUNC_6(&VAR_2->erp_done_wqh);
 }
 FUNC_4(&VAR_2->erp_lock);
 FUNC_5(&VAR_1.config_lock, VAR_3);
}
