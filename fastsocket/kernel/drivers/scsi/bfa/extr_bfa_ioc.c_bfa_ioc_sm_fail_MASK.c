
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_ioc_s {int iocpf; int bfa; TYPE_1__* cbfn; } ;
typedef enum ioc_event { ____Placeholder_ioc_event } ioc_event ;
struct TYPE_2__ {int (* enable_cbfn ) (int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct bfa_ioc_s*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct bfa_ioc_s*,int) ;
 int FUNC_3 (struct bfa_ioc_s*,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct bfa_ioc_s *VAR_4, enum ioc_event VAR_5)
{
 FUNC_3(VAR_4, VAR_5);

 switch (VAR_5) {

 case 130:
  VAR_4->cbfn->enable_cbfn(VAR_4->bfa, VAR_0);
  break;

 case 131:
  FUNC_1(VAR_4, VAR_2);
  break;

 case 132:
  FUNC_1(VAR_4, VAR_3);
  FUNC_0(&VAR_4->iocpf, VAR_1);
  break;

 case 129:
 case 128:



  break;
 default:
  FUNC_2(VAR_4, VAR_5);
 }
}
