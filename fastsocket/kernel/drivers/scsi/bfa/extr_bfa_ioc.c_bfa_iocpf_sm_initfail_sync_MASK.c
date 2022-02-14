
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_iocpf_s {struct bfa_ioc_s* ioc; } ;
struct TYPE_2__ {int ioc_sem_reg; } ;
struct bfa_ioc_s {TYPE_1__ ioc_regs; } ;
typedef enum iocpf_event { ____Placeholder_iocpf_event } iocpf_event ;


 int VAR_0 ;





 int VAR_1 ;
 int FUNC_0 (struct bfa_ioc_s*,int ) ;
 int FUNC_1 (struct bfa_iocpf_s*,int ) ;
 int FUNC_2 (struct bfa_ioc_s*) ;
 int FUNC_3 (struct bfa_ioc_s*) ;
 int FUNC_4 (struct bfa_ioc_s*,int ) ;
 int FUNC_5 (struct bfa_ioc_s*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct bfa_ioc_s*) ;
 int FUNC_7 (struct bfa_ioc_s*,int) ;
 int FUNC_8 (struct bfa_ioc_s*,int) ;
 int FUNC_9 (int,int ) ;

__attribute__((used)) static void
FUNC_10(struct bfa_iocpf_s *VAR_6, enum iocpf_event VAR_7)
{
 struct bfa_ioc_s *VAR_8 = VAR_6->ioc;

 FUNC_8(VAR_8, VAR_7);

 switch (VAR_7) {
 case 130:
  FUNC_3(VAR_8);
  FUNC_5(VAR_8);
  FUNC_4(VAR_8, VAR_0);
  FUNC_9(1, VAR_8->ioc_regs.ioc_sem_reg);
  FUNC_1(VAR_6, VAR_4);
  break;

 case 129:
  FUNC_1(VAR_6, VAR_3);
  FUNC_0(VAR_8, VAR_1);
  break;

 case 132:
  FUNC_6(VAR_8);
  FUNC_1(VAR_6, VAR_2);
  break;

 case 128:
  FUNC_6(VAR_8);
  FUNC_2(VAR_8);
  FUNC_1(VAR_6, VAR_5);
  break;

 case 131:
  break;

 default:
  FUNC_7(VAR_8, VAR_7);
 }
}
