
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcport_s {int bfa; } ;
typedef enum bfa_fcport_sm_event { ____Placeholder_bfa_fcport_sm_event } bfa_fcport_sm_event ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct bfa_fcport_s*,int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void
FUNC_3(struct bfa_fcport_s *VAR_3,
   enum bfa_fcport_sm_event VAR_4)
{
 FUNC_2(VAR_3->bfa, VAR_4);

 switch (VAR_4) {
 case 134:
 case 135:
  FUNC_1(VAR_3, VAR_0);
  break;

 case 132:
 case 133:
 case 131:
 case 129:



  break;

 case 128:
  FUNC_1(VAR_3, VAR_2);
  break;

 case 130:
  FUNC_1(VAR_3, VAR_1);
  break;

 default:
  FUNC_0(VAR_3->bfa, VAR_4);
 }
}
