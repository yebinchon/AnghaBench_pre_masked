
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcs_vport_s {int dummy; } ;
typedef enum bfa_fcs_vport_event { ____Placeholder_bfa_fcs_vport_event } bfa_fcs_vport_event ;



 int FUNC_0 (struct bfa_fcs_vport_s*) ;
 int FUNC_1 (struct bfa_fcs_vport_s*) ;
 int FUNC_2 (struct bfa_fcs_vport_s*) ;
 int FUNC_3 (int ,struct bfa_fcs_vport_s*) ;
 int VAR_0 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct bfa_fcs_vport_s*,int ) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static void
FUNC_7(struct bfa_fcs_vport_s *VAR_1,
   enum bfa_fcs_vport_event VAR_2)
{
 FUNC_6(FUNC_1(VAR_1), FUNC_2(VAR_1));
 FUNC_6(FUNC_1(VAR_1), VAR_2);

 switch (VAR_2) {
 case 128:
  FUNC_5(VAR_1, VAR_0);
  FUNC_3(FUNC_0(VAR_1), VAR_1);
  break;

 default:
  FUNC_4(FUNC_1(VAR_1), VAR_2);
 }
}
