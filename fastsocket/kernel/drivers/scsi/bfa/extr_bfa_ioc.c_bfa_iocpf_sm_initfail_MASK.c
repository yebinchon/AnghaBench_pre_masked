
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_iocpf_s {struct bfa_ioc_s* ioc; } ;
struct bfa_ioc_s {int dummy; } ;
typedef enum iocpf_event { ____Placeholder_iocpf_event } iocpf_event ;




 int FUNC_0 (struct bfa_iocpf_s*,int ) ;
 int FUNC_1 (struct bfa_ioc_s*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct bfa_ioc_s*,int) ;
 int FUNC_3 (struct bfa_ioc_s*,int) ;

__attribute__((used)) static void
FUNC_4(struct bfa_iocpf_s *VAR_2, enum iocpf_event VAR_3)
{
 struct bfa_ioc_s *VAR_4 = VAR_2->ioc;

 FUNC_3(VAR_4, VAR_3);

 switch (VAR_3) {
 case 129:
  FUNC_0(VAR_2, VAR_0);
  break;

 case 128:
  FUNC_1(VAR_4);
  FUNC_0(VAR_2, VAR_1);
  break;

 default:
  FUNC_2(VAR_4, VAR_3);
 }
}
