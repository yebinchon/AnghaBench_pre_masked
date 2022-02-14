
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcport_s {int bfa; int reqq_wait; } ;
typedef enum bfa_fcport_sm_event { ____Placeholder_bfa_fcport_sm_event } bfa_fcport_sm_event ;
 int VAR_0 ;
 int FUNC_0 (struct bfa_fcport_s*,int ) ;
 int FUNC_1 (struct bfa_fcport_s*) ;
 int FUNC_2 (struct bfa_fcport_s*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct bfa_fcport_s*,int ) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static void
FUNC_7(struct bfa_fcport_s *VAR_6,
     enum bfa_fcport_sm_event VAR_7)
{
 FUNC_6(VAR_6->bfa, VAR_7);

 switch (VAR_7) {
 case 129:
  FUNC_5(VAR_6, VAR_1);
  FUNC_2(VAR_6);
  break;

 case 128:
  FUNC_5(VAR_6, VAR_4);
  FUNC_3(&VAR_6->reqq_wait);
  break;

 case 134:
  FUNC_5(VAR_6, VAR_5);
  break;

 case 135:



  break;

 case 130:
 case 131:




  break;

 case 132:
  FUNC_5(VAR_6, VAR_3);
  FUNC_3(&VAR_6->reqq_wait);
  break;

 case 133:
  FUNC_1(VAR_6);
  FUNC_0(VAR_6, VAR_0);
  FUNC_5(VAR_6, VAR_2);
  break;

 default:
  FUNC_4(VAR_6->bfa, VAR_7);
 }
}
