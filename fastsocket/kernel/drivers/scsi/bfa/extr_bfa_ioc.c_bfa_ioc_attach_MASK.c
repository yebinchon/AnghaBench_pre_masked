
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_timer_mod_s {int dummy; } ;
struct TYPE_2__ {struct bfa_ioc_s* ioc; } ;
struct bfa_ioc_s {int notify_q; TYPE_1__ iocpf; int dbg_fwsave_once; void* pllinit; void* fcmode; struct bfa_timer_mod_s* timer_mod; struct bfa_ioc_cbfn_s* cbfn; void* bfa; } ;
struct bfa_ioc_cbfn_s {int dummy; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (struct bfa_ioc_s*,int ) ;
 int FUNC_2 (struct bfa_ioc_s*,int ) ;
 int FUNC_3 (struct bfa_ioc_s*) ;
 int VAR_3 ;

void
FUNC_4(struct bfa_ioc_s *VAR_4, void *VAR_5, struct bfa_ioc_cbfn_s *VAR_6,
        struct bfa_timer_mod_s *VAR_7)
{
 VAR_4->bfa = VAR_5;
 VAR_4->cbfn = VAR_6;
 VAR_4->timer_mod = VAR_7;
 VAR_4->fcmode = VAR_0;
 VAR_4->pllinit = VAR_0;
 VAR_4->dbg_fwsave_once = VAR_1;
 VAR_4->iocpf.ioc = VAR_4;

 FUNC_3(VAR_4);
 FUNC_0(&VAR_4->notify_q);

 FUNC_2(VAR_4, VAR_3);
 FUNC_1(VAR_4, VAR_2);
}
