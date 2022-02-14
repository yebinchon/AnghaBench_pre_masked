
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_fcport_s {TYPE_1__* bfa; int event_cbarg; int (* event_cbfn ) (int ,int) ;} ;
struct bfa_fcport_ln_s {int ln_event; int ln_qe; struct bfa_fcport_s* fcport; } ;
typedef enum bfa_port_linkstate { ____Placeholder_bfa_port_linkstate } bfa_port_linkstate ;
struct TYPE_2__ {scalar_t__ fcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *,int ,struct bfa_fcport_ln_s*) ;
 int FUNC_1 (struct bfa_fcport_ln_s*,int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void
FUNC_3(struct bfa_fcport_ln_s *VAR_2, enum bfa_port_linkstate VAR_3)
{
 struct bfa_fcport_s *VAR_4 = VAR_2->fcport;

 if (VAR_4->bfa->fcs) {
  VAR_4->event_cbfn(VAR_4->event_cbarg, VAR_3);
  FUNC_1(VAR_2, VAR_0);
 } else {
  VAR_2->ln_event = VAR_3;
  FUNC_0(VAR_4->bfa, &VAR_2->ln_qe,
   VAR_1, VAR_2);
 }
}
