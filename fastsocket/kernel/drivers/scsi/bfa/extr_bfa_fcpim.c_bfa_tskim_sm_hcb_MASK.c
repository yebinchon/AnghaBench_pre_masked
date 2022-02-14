
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_tskim_s {int tsk_tag; int bfa; } ;
typedef enum bfa_tskim_event { ____Placeholder_bfa_tskim_event } bfa_tskim_event ;





 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct bfa_tskim_s*,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct bfa_tskim_s*) ;
 int FUNC_4 (struct bfa_tskim_s*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(struct bfa_tskim_s *VAR_1, enum bfa_tskim_event VAR_2)
{
 FUNC_2(VAR_1->bfa, VAR_1->tsk_tag << 16 | VAR_2);

 switch (VAR_2) {
 case 129:
  FUNC_1(VAR_1, VAR_0);
  FUNC_3(VAR_1);
  break;

 case 130:
  FUNC_4(VAR_1);
  break;

 case 128:
  break;

 default:
  FUNC_0(VAR_1->bfa, VAR_2);
 }
}
