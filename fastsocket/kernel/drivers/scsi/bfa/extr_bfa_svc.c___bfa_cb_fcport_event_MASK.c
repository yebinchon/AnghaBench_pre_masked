
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_fcport_ln_s {int ln_event; TYPE_1__* fcport; } ;
typedef scalar_t__ bfa_boolean_t ;
struct TYPE_2__ {int event_cbarg; int (* event_cbfn ) (int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_fcport_ln_s*,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1, bfa_boolean_t VAR_2)
{
 struct bfa_fcport_ln_s *VAR_3 = VAR_1;

 if (VAR_2)
  VAR_3->fcport->event_cbfn(VAR_3->fcport->event_cbarg, VAR_3->ln_event);
 else
  FUNC_0(VAR_3, VAR_0);
}
