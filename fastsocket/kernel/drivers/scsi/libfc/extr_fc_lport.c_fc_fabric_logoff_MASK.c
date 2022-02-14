
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* rport_flush_queue ) () ;int (* rport_logoff ) (scalar_t__) ;int (* disc_stop_final ) (struct fc_lport*) ;} ;
struct fc_lport {int retry_work; int lp_mutex; TYPE_1__ tt; scalar_t__ dns_rdata; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct fc_lport*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct fc_lport*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 () ;

int FUNC_7(struct fc_lport *VAR_0)
{
 VAR_0->tt.disc_stop_final(VAR_0);
 FUNC_2(&VAR_0->lp_mutex);
 if (VAR_0->dns_rdata)
  VAR_0->tt.rport_logoff(VAR_0->dns_rdata);
 FUNC_3(&VAR_0->lp_mutex);
 VAR_0->tt.rport_flush_queue();
 FUNC_2(&VAR_0->lp_mutex);
 FUNC_1(VAR_0);
 FUNC_3(&VAR_0->lp_mutex);
 FUNC_0(&VAR_0->retry_work);
 return 0;
}
