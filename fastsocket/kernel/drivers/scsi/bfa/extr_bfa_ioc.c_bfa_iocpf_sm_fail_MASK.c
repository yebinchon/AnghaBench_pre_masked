
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_iocpf_s {struct bfa_ioc_s* ioc; } ;
struct bfa_ioc_s {int dummy; } ;
typedef enum iocpf_event { ____Placeholder_iocpf_event } iocpf_event ;



 int FUNC_0 (struct bfa_iocpf_s*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct bfa_ioc_s*,int) ;
 int FUNC_2 (struct bfa_ioc_s*,int) ;

__attribute__((used)) static void
FUNC_3(struct bfa_iocpf_s *VAR_1, enum iocpf_event VAR_2)
{
 struct bfa_ioc_s *VAR_3 = VAR_1->ioc;

 FUNC_2(VAR_3, VAR_2);

 switch (VAR_2) {
 case 128:
  FUNC_0(VAR_1, VAR_0);
  break;

 default:
  FUNC_1(VAR_3, VAR_2);
 }
}
