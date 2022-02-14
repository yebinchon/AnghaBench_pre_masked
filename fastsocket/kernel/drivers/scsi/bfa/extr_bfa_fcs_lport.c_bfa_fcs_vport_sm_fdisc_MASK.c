
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcs_vport_s {int timer; int lport; int lps; } ;
typedef enum bfa_fcs_vport_event { ____Placeholder_bfa_fcs_vport_event } bfa_fcs_vport_event ;


 int VAR_0 ;







 int VAR_1 ;
 int FUNC_0 (struct bfa_fcs_vport_s*) ;
 int FUNC_1 (struct bfa_fcs_vport_s*) ;
 int FUNC_2 (struct bfa_fcs_vport_s*) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct bfa_fcs_vport_s*,int ) ;
 int FUNC_7 (int ,int *,int ,struct bfa_fcs_vport_s*,int ) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static void
FUNC_9(struct bfa_fcs_vport_s *VAR_8,
   enum bfa_fcs_vport_event VAR_9)
{
 FUNC_8(FUNC_1(VAR_8), FUNC_2(VAR_8));
 FUNC_8(FUNC_1(VAR_8), VAR_9);

 switch (VAR_9) {
 case 134:
  FUNC_6(VAR_8, VAR_4);
  break;

 case 132:
  FUNC_6(VAR_8, VAR_5);
  FUNC_5(VAR_8->lps, VAR_1);
  break;

 case 128:
  FUNC_6(VAR_8, VAR_6);
  FUNC_3(&VAR_8->lport);
  break;

 case 130:
  FUNC_6(VAR_8, VAR_3);
  FUNC_7(FUNC_0(VAR_8), &VAR_8->timer,
        VAR_7, VAR_8,
        VAR_0);
  break;

 case 129:
 case 133:
  FUNC_6(VAR_8, VAR_5);
  break;

 case 131:
  FUNC_6(VAR_8, VAR_2);
  break;

 default:
  FUNC_4(FUNC_1(VAR_8), VAR_9);
 }
}
