
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_port_s {int dport_enabled; void* endis_pending; int (* endis_cbfn ) (int ,int ) ;int endis_cbarg; void* stats_busy; int (* stats_cbfn ) (int ,int ) ;int stats_cbarg; } ;
typedef enum bfa_ioc_event_e { ____Placeholder_bfa_ioc_event_e } bfa_ioc_event_e ;


 void* VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (struct bfa_port_s*,void*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3(void *VAR_2, enum bfa_ioc_event_e VAR_3)
{
 struct bfa_port_s *VAR_4 = (struct bfa_port_s *) VAR_2;

 switch (VAR_3) {
 case 129:
 case 128:

  if (VAR_4->stats_busy) {
   if (VAR_4->stats_cbfn)
    VAR_4->stats_cbfn(VAR_4->stats_cbarg,
      VAR_1);
   VAR_4->stats_cbfn = ((void*)0);
   VAR_4->stats_busy = VAR_0;
  }


  if (VAR_4->endis_pending) {
   if (VAR_4->endis_cbfn)
    VAR_4->endis_cbfn(VAR_4->endis_cbarg,
      VAR_1);
   VAR_4->endis_cbfn = ((void*)0);
   VAR_4->endis_pending = VAR_0;
  }


  if (VAR_4->dport_enabled)
   FUNC_0(VAR_4, VAR_0);
  break;
 default:
  break;
 }
}
