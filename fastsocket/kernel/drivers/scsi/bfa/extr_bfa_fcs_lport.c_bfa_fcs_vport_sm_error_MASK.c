
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcs_vport_s {int lport; } ;
typedef enum bfa_fcs_vport_event { ____Placeholder_bfa_fcs_vport_event } bfa_fcs_vport_event ;



 int FUNC_0 (struct bfa_fcs_vport_s*) ;
 int FUNC_1 (struct bfa_fcs_vport_s*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (struct bfa_fcs_vport_s*,int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void
FUNC_5(struct bfa_fcs_vport_s *VAR_1,
   enum bfa_fcs_vport_event VAR_2)
{
 FUNC_4(FUNC_0(VAR_1), FUNC_1(VAR_1));
 FUNC_4(FUNC_0(VAR_1), VAR_2);

 switch (VAR_2) {
 case 128:
  FUNC_3(VAR_1, VAR_0);
  FUNC_2(&VAR_1->lport);
  break;

 default:
  FUNC_4(FUNC_0(VAR_1), VAR_2);
 }
}
