
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcport_s {int bfa; } ;
typedef enum bfa_fcport_sm_event { ____Placeholder_bfa_fcport_sm_event } bfa_fcport_sm_event ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bfa_fcport_s*,int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void
FUNC_2(struct bfa_fcport_s *VAR_2,
    enum bfa_fcport_sm_event VAR_3)
{
 FUNC_1(VAR_2->bfa, VAR_3);

 switch (VAR_3) {
 case 128:
  FUNC_0(VAR_2, VAR_0);
  break;

 case 129:
  FUNC_0(VAR_2, VAR_1);
  break;

 default:



  ;
 }
}
