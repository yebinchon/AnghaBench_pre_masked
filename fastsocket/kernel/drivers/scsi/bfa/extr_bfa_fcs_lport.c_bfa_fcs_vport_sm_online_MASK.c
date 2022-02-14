
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcs_vport_s {int lport; int * lps; } ;
typedef enum bfa_fcs_vport_event { ____Placeholder_bfa_fcs_vport_event } bfa_fcs_vport_event ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (struct bfa_fcs_vport_s*) ;
 int FUNC_1 (struct bfa_fcs_vport_s*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct bfa_fcs_vport_s*,int ) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static void
FUNC_8(struct bfa_fcs_vport_s *VAR_5,
   enum bfa_fcs_vport_event VAR_6)
{
 FUNC_7(FUNC_0(VAR_5), FUNC_1(VAR_5));
 FUNC_7(FUNC_0(VAR_5), VAR_6);

 switch (VAR_6) {
 case 130:
  FUNC_6(VAR_5, VAR_2);
  FUNC_2(&VAR_5->lport);
  break;

 case 128:
  FUNC_6(VAR_5, VAR_4);
  FUNC_5(&VAR_5->lport, VAR_0);
  break;

 case 129:
  FUNC_6(VAR_5, VAR_3);
  FUNC_5(VAR_5->lps, VAR_1);
  FUNC_3(&VAR_5->lport);
  break;

 default:
  FUNC_4(FUNC_0(VAR_5), VAR_6);
 }
}
