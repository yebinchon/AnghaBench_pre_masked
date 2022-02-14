
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_ablk_s {int busy; int (* cbfn ) (int ,int ) ;int cbarg; int * pcifn; int ioc; } ;
typedef enum bfa_ioc_event_e { ____Placeholder_bfa_ioc_event_e } bfa_ioc_event_e ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_2, enum bfa_ioc_event_e VAR_3)
{
 struct bfa_ablk_s *VAR_4 = (struct bfa_ablk_s *)VAR_2;

 FUNC_1(VAR_4->ioc, VAR_3);

 switch (VAR_3) {
 case 129:
  FUNC_0(VAR_4->busy != VAR_0);
  break;

 case 130:
 case 128:

  VAR_4->pcifn = ((void*)0);
  if (VAR_4->busy) {
   if (VAR_4->cbfn)
    VAR_4->cbfn(VAR_4->cbarg, VAR_1);
   VAR_4->cbfn = ((void*)0);
   VAR_4->busy = VAR_0;
  }
  break;

 default:
  FUNC_0(1);
  break;
 }
}
