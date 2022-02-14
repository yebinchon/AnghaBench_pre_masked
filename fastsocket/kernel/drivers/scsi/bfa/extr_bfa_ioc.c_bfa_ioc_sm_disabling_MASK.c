
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_ioc_s {int iocpf; } ;
typedef enum ioc_event { ____Placeholder_ioc_event } ioc_event ;


 int VAR_0 ;



 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct bfa_ioc_s*,int ) ;
 int FUNC_2 (struct bfa_ioc_s*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct bfa_ioc_s*,int) ;
 int FUNC_4 (struct bfa_ioc_s*,int) ;

__attribute__((used)) static void
FUNC_5(struct bfa_ioc_s *VAR_3, enum ioc_event VAR_4)
{
 FUNC_4(VAR_3, VAR_4);

 switch (VAR_4) {
 case 130:
  FUNC_1(VAR_3, VAR_1);
  break;

 case 129:





  FUNC_0(&VAR_3->iocpf, VAR_0);
  break;

 case 128:
  FUNC_1(VAR_3, VAR_2);
  FUNC_2(VAR_3);
  break;

 default:
  FUNC_3(VAR_3, VAR_4);
 }
}
