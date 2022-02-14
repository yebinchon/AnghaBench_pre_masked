
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_tskim_s {int tsk_tag; int bfa; } ;
typedef enum bfa_tskim_event { ____Placeholder_bfa_tskim_event } bfa_tskim_event ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct bfa_tskim_s*,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct bfa_tskim_s*) ;
 int FUNC_4 (struct bfa_tskim_s*,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_5(struct bfa_tskim_s *VAR_3, enum bfa_tskim_event VAR_4)
{
 FUNC_2(VAR_3->bfa, VAR_3->tsk_tag << 16 | VAR_4);

 switch (VAR_4) {
 case 128:
  FUNC_1(VAR_3, VAR_2);
  FUNC_4(VAR_3, VAR_0);
  break;

 case 130:




  break;

 case 129:
  FUNC_1(VAR_3, VAR_2);
  FUNC_3(VAR_3);
  FUNC_4(VAR_3, VAR_1);
  break;

 default:
  FUNC_0(VAR_3->bfa, VAR_4);
 }
}
