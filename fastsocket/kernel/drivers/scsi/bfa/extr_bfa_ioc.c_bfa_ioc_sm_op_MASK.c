
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int auto_recover; } ;
struct bfa_ioc_s {TYPE_1__ iocpf; } ;
typedef enum ioc_event { ____Placeholder_ioc_event } ioc_event ;


 int VAR_0 ;





 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (struct bfa_ioc_s*,int ) ;
 int FUNC_2 (struct bfa_ioc_s*) ;
 int FUNC_3 (struct bfa_ioc_s*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct bfa_ioc_s*,int) ;
 int FUNC_5 (struct bfa_ioc_s*,int) ;

__attribute__((used)) static void
FUNC_6(struct bfa_ioc_s *VAR_4, enum ioc_event VAR_5)
{
 FUNC_5(VAR_4, VAR_5);

 switch (VAR_5) {
 case 131:
  break;

 case 132:
  FUNC_2(VAR_4);
  FUNC_1(VAR_4, VAR_1);
  break;

 case 128:
 case 129:
  FUNC_2(VAR_4);

 case 130:
  if (VAR_4->iocpf.auto_recover)
   FUNC_1(VAR_4, VAR_3);
  else
   FUNC_1(VAR_4, VAR_2);

  FUNC_3(VAR_4);

  if (VAR_5 != 128)
   FUNC_0(&VAR_4->iocpf, VAR_0);
  break;

 default:
  FUNC_4(VAR_4, VAR_5);
 }
}
