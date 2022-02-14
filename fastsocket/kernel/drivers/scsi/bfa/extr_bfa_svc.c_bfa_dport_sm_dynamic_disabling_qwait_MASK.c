
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_dport_s {int bfa; int reqq_wait; } ;
typedef enum bfa_dport_sm_event { ____Placeholder_bfa_dport_sm_event } bfa_dport_sm_event ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bfa_dport_s*,int ) ;
 int FUNC_1 (struct bfa_dport_s*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct bfa_dport_s*,int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void
FUNC_6(struct bfa_dport_s *VAR_4,
       enum bfa_dport_sm_event VAR_5)
{
 FUNC_5(VAR_4->bfa, VAR_5);

 switch (VAR_5) {
 case 129:
  FUNC_4(VAR_4, VAR_3);
  FUNC_1(VAR_4, VAR_1);
  break;

 case 130:
  FUNC_4(VAR_4, VAR_2);
  FUNC_2(&VAR_4->reqq_wait);
  FUNC_0(VAR_4, VAR_0);
  break;

 case 128:

  break;

 default:
  FUNC_3(VAR_4->bfa, VAR_5);
 }
}
