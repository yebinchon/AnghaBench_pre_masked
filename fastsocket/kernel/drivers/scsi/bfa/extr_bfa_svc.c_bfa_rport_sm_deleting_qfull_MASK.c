
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_rport_s {int rport_tag; int bfa; int reqq_wait; } ;
typedef enum bfa_rport_event { ____Placeholder_bfa_rport_event } bfa_rport_event ;




 int FUNC_0 (int *) ;
 int FUNC_1 (struct bfa_rport_s*) ;
 int FUNC_2 (struct bfa_rport_s*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct bfa_rport_s*,int ) ;
 int FUNC_5 (struct bfa_rport_s*,int ) ;
 int FUNC_6 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_7(struct bfa_rport_s *VAR_4, enum bfa_rport_event VAR_5)
{
 FUNC_6(VAR_4->bfa, VAR_4->rport_tag);
 FUNC_6(VAR_4->bfa, VAR_5);

 switch (VAR_5) {
 case 128:
  FUNC_5(VAR_4, VAR_2);
  FUNC_4(VAR_4, VAR_0);
  FUNC_2(VAR_4);
  break;

 case 129:
  FUNC_5(VAR_4, VAR_3);
  FUNC_4(VAR_4, VAR_1);
  FUNC_0(&VAR_4->reqq_wait);
  FUNC_1(VAR_4);
  break;

 default:
  FUNC_3(VAR_4->bfa, VAR_5);
 }
}
