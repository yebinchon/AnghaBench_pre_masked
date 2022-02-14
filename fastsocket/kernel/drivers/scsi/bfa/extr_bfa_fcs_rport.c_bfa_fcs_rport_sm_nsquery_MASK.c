
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcs_rport_s {int pwwn; int pid; int fcs; int fcxp; int ns_retries; } ;
typedef enum rport_event { ____Placeholder_rport_event } rport_event ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_fcs_rport_s*) ;
 int FUNC_1 (struct bfa_fcs_rport_s*,int *) ;
 int FUNC_2 (struct bfa_fcs_rport_s*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct bfa_fcs_rport_s*,int ) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static void
FUNC_7(struct bfa_fcs_rport_s *VAR_6, enum rport_event VAR_7)
{
 FUNC_6(VAR_6->fcs, VAR_6->pwwn);
 FUNC_6(VAR_6->fcs, VAR_6->pid);
 FUNC_6(VAR_6->fcs, VAR_7);

 switch (VAR_7) {
 case 137:
  FUNC_5(VAR_6, VAR_1);
  FUNC_1(VAR_6, ((void*)0));
  break;

 case 133:
  VAR_6->ns_retries++;
  if (VAR_6->ns_retries < VAR_0) {
   FUNC_5(VAR_6,
      VAR_5);
   FUNC_2(VAR_6, ((void*)0));
  } else {
   FUNC_5(VAR_6, VAR_4);
   FUNC_0(VAR_6);
  }
  break;

 case 135:
  FUNC_5(VAR_6, VAR_3);
  FUNC_3(VAR_6->fcxp);
  FUNC_0(VAR_6);
  break;

 case 134:
  break;

 case 131:
 case 128:
  FUNC_5(VAR_6, VAR_2);
  FUNC_3(VAR_6->fcxp);
  FUNC_0(VAR_6);
  break;

 case 130:
 case 136:
 case 129:
 case 132:
  FUNC_5(VAR_6, VAR_4);
  FUNC_3(VAR_6->fcxp);
  FUNC_0(VAR_6);
  break;

 default:
  FUNC_4(VAR_6->fcs, VAR_7);
 }
}
