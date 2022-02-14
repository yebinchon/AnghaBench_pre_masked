
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcs_rport_s {int pwwn; int pid; int fcs; int ns_retries; int plogi_retries; } ;
typedef enum rport_event { ____Placeholder_rport_event } rport_event ;







 int FUNC_0 (struct bfa_fcs_rport_s*) ;
 int FUNC_1 (struct bfa_fcs_rport_s*,int *) ;
 int FUNC_2 (struct bfa_fcs_rport_s*,int *) ;
 int FUNC_3 (struct bfa_fcs_rport_s*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct bfa_fcs_rport_s*,int ) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static void
FUNC_7(struct bfa_fcs_rport_s *VAR_4, enum rport_event VAR_5)
{
 FUNC_6(VAR_4->fcs, VAR_4->pwwn);
 FUNC_6(VAR_4->fcs, VAR_4->pid);
 FUNC_6(VAR_4->fcs, VAR_5);

 switch (VAR_5) {
 case 128:
  FUNC_5(VAR_4, VAR_2);
  VAR_4->plogi_retries = 0;
  FUNC_2(VAR_4, ((void*)0));
  break;

 case 129:
  FUNC_5(VAR_4, VAR_3);
  FUNC_3(VAR_4, ((void*)0));
  break;

 case 130:
  FUNC_5(VAR_4, VAR_0);
  FUNC_0(VAR_4);
  break;

 case 132:
 case 131:
  FUNC_5(VAR_4, VAR_1);
  VAR_4->ns_retries = 0;
  FUNC_1(VAR_4, ((void*)0));
  break;
 default:
  FUNC_4(VAR_4->fcs, VAR_5);
 }
}
