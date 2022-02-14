
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {int tv_sec; } ;
struct bfa_trc_mod_s {int dummy; } ;
struct TYPE_3__ {int qe; } ;
struct bfa_port_s {int stats_reset_time; struct bfa_ioc_s* ioc; TYPE_1__ ioc_notify; void* dport_enabled; void* pbc_disabled; int * endis_cbfn; int * stats_cbfn; void* endis_pending; void* stats_busy; struct bfa_trc_mod_s* trcmod; void* dev; } ;
struct bfa_ioc_s {int notify_q; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bfa_ioc_s*,int ,int ,struct bfa_port_s*) ;
 int FUNC_2 (TYPE_1__*,int ,struct bfa_port_s*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct bfa_port_s*,int ) ;
 int FUNC_5 (struct timeval*) ;
 int FUNC_6 (int *,int *) ;

void
FUNC_7(struct bfa_port_s *VAR_4, struct bfa_ioc_s *VAR_5,
   void *VAR_6, struct bfa_trc_mod_s *VAR_7)
{
 struct timeval VAR_8;

 FUNC_0(!VAR_4);

 VAR_4->dev = VAR_6;
 VAR_4->ioc = VAR_5;
 VAR_4->trcmod = VAR_7;

 VAR_4->stats_busy = VAR_0;
 VAR_4->endis_pending = VAR_0;
 VAR_4->stats_cbfn = ((void*)0);
 VAR_4->endis_cbfn = ((void*)0);
 VAR_4->pbc_disabled = VAR_0;
 VAR_4->dport_enabled = VAR_0;

 FUNC_1(VAR_4->ioc, VAR_1, VAR_2, VAR_4);
 FUNC_3(&VAR_4->ioc_notify);
 FUNC_2(&VAR_4->ioc_notify, VAR_3, VAR_4);
 FUNC_6(&VAR_4->ioc_notify.qe, &VAR_4->ioc->notify_q);




 FUNC_5(&VAR_8);
 VAR_4->stats_reset_time = VAR_8.tv_sec;

 FUNC_4(VAR_4, 0);
}
