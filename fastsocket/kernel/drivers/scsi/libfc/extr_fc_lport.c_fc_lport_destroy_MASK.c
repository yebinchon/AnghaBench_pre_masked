
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* exch_mgr_reset ) (struct fc_lport*,int ,int ) ;int (* disc_stop_final ) (struct fc_lport*) ;int (* fcp_abort_io ) (struct fc_lport*) ;int frame_send; } ;
struct fc_lport {int retry_work; TYPE_1__ tt; int lp_mutex; scalar_t__ link_up; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct fc_lport*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct fc_lport*) ;
 int FUNC_5 (struct fc_lport*) ;
 int FUNC_6 (struct fc_lport*,int ,int ) ;

int FUNC_7(struct fc_lport *VAR_2)
{
 FUNC_2(&VAR_2->lp_mutex);
 VAR_2->state = VAR_0;
 VAR_2->link_up = 0;
 VAR_2->tt.frame_send = VAR_1;
 FUNC_3(&VAR_2->lp_mutex);

 VAR_2->tt.fcp_abort_io(VAR_2);
 VAR_2->tt.disc_stop_final(VAR_2);
 VAR_2->tt.exch_mgr_reset(VAR_2, 0, 0);
 FUNC_0(&VAR_2->retry_work);
 FUNC_1(VAR_2);
 return 0;
}
