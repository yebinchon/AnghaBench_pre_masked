
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_rport_s {int rport_tag; int bfa; int reqq_wait; } ;
typedef enum bfa_rport_event { ____Placeholder_bfa_rport_event } bfa_rport_event ;






 int FUNC_0 (int *) ;
 int FUNC_1 (struct bfa_rport_s*) ;
 int FUNC_2 (struct bfa_rport_s*) ;
 int FUNC_3 (struct bfa_rport_s*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct bfa_rport_s*,int ) ;
 int FUNC_6 (struct bfa_rport_s*,int ) ;
 int FUNC_7 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_8(struct bfa_rport_s *VAR_8, enum bfa_rport_event VAR_9)
{
 FUNC_7(VAR_8->bfa, VAR_8->rport_tag);
 FUNC_7(VAR_8->bfa, VAR_9);

 switch (VAR_9) {
 case 128:
  FUNC_5(VAR_8, VAR_0);
  FUNC_3(VAR_8);
  break;

 case 131:
  FUNC_6(VAR_8, VAR_4);
  FUNC_5(VAR_8, VAR_3);
  FUNC_0(&VAR_8->reqq_wait);
  FUNC_1(VAR_8);
  break;

 case 129:
  FUNC_6(VAR_8, VAR_6);
  FUNC_5(VAR_8, VAR_2);
  FUNC_0(&VAR_8->reqq_wait);
  FUNC_2(VAR_8);
  break;

 case 130:
  FUNC_6(VAR_8, VAR_5);
  FUNC_5(VAR_8, VAR_1);
  FUNC_0(&VAR_8->reqq_wait);
  break;

 default:
  FUNC_6(VAR_8, VAR_7);
  FUNC_4(VAR_8->bfa, VAR_9);
 }
}
