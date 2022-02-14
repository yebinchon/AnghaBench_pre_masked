
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
 int VAR_4 ;
 int FUNC_2 (struct bfa_ioc_s*) ;
 int FUNC_3 (struct bfa_ioc_s*,int) ;
 int FUNC_4 (struct bfa_ioc_s*,int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6(struct bfa_ioc_s *VAR_5, enum ioc_event VAR_6)
{
 FUNC_4(VAR_5, VAR_6);

 switch (VAR_6) {
 case 131:
  FUNC_2(VAR_5);
  FUNC_1(VAR_5, VAR_4);
  break;

 case 129:
 case 130:
  FUNC_2(VAR_5);

 case 128:
  VAR_5->cbfn->enable_cbfn(VAR_5->bfa, VAR_0);
  FUNC_1(VAR_5, VAR_3);
  if (VAR_6 != 129)
   FUNC_0(&VAR_5->iocpf, VAR_1);
  break;

 case 133:
  FUNC_2(VAR_5);
  FUNC_1(VAR_5, VAR_2);
  break;

 case 132:
  break;

 default:
  FUNC_3(VAR_5, VAR_6);
 }
}
