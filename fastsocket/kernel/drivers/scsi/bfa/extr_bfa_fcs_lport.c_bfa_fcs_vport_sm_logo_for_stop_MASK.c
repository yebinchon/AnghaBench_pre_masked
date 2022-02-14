
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcs_vport_s {int lps; } ;
typedef enum bfa_fcs_vport_event { ____Placeholder_bfa_fcs_vport_event } bfa_fcs_vport_event ;





 int VAR_0 ;
 int FUNC_0 (struct bfa_fcs_vport_s*) ;
 int FUNC_1 (struct bfa_fcs_vport_s*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct bfa_fcs_vport_s*,int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void
FUNC_6(struct bfa_fcs_vport_s *VAR_2,
          enum bfa_fcs_vport_event VAR_3)
{
 FUNC_5(FUNC_0(VAR_2), FUNC_1(VAR_2));
 FUNC_5(FUNC_0(VAR_2), VAR_3);

 switch (VAR_3) {
 case 130:
  FUNC_3(VAR_2->lps, VAR_0);




 case 128:
 case 129:
  FUNC_4(VAR_2, VAR_1);
  break;

 default:
  FUNC_2(FUNC_0(VAR_2), VAR_3);
 }
}
