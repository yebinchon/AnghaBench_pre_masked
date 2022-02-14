
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_ioc_s {int iocpf; int bfa; TYPE_1__* cbfn; } ;
typedef enum ioc_event { ____Placeholder_ioc_event } ioc_event ;
struct TYPE_2__ {int (* disable_cbfn ) (int ) ;} ;


 int VAR_0 ;



 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct bfa_ioc_s*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct bfa_ioc_s*,int) ;
 int FUNC_3 (struct bfa_ioc_s*,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct bfa_ioc_s *VAR_3, enum ioc_event VAR_4)
{
 FUNC_3(VAR_3, VAR_4);

 switch (VAR_4) {
 case 128:
  FUNC_1(VAR_3, VAR_1);
  break;

 case 129:
  VAR_3->cbfn->disable_cbfn(VAR_3->bfa);
  break;

 case 130:
  FUNC_1(VAR_3, VAR_2);
  FUNC_0(&VAR_3->iocpf, VAR_0);
  break;

 default:
  FUNC_2(VAR_3, VAR_4);
 }
}
