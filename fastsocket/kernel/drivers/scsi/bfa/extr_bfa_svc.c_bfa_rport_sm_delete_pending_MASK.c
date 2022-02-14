
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_rport_s {int rport_tag; int bfa; } ;
typedef enum bfa_rport_event { ____Placeholder_bfa_rport_event } bfa_rport_event ;




 int FUNC_0 (struct bfa_rport_s*) ;
 int FUNC_1 (struct bfa_rport_s*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct bfa_rport_s*,int ) ;
 int FUNC_4 (struct bfa_rport_s*,int ) ;
 int FUNC_5 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_6(struct bfa_rport_s *VAR_6,
    enum bfa_rport_event VAR_7)
{
 FUNC_5(VAR_6->bfa, VAR_6->rport_tag);
 FUNC_5(VAR_6->bfa, VAR_7);

 switch (VAR_7) {
 case 129:
  FUNC_4(VAR_6, VAR_3);
  if (FUNC_1(VAR_6))
   FUNC_3(VAR_6, VAR_0);
  else
   FUNC_3(VAR_6, VAR_1);
  break;

 case 128:
  FUNC_4(VAR_6, VAR_4);
  FUNC_3(VAR_6, VAR_2);
  FUNC_0(VAR_6);
  break;

 default:
  FUNC_4(VAR_6, VAR_5);
  FUNC_2(VAR_6->bfa, VAR_7);
 }
}
