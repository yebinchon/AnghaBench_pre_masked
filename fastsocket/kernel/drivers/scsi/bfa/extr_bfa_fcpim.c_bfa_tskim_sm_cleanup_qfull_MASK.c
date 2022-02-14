
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_tskim_s {int tsk_tag; int bfa; int reqq_wait; } ;
typedef enum bfa_tskim_event { ____Placeholder_bfa_tskim_event } bfa_tskim_event ;





 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct bfa_tskim_s*,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct bfa_tskim_s*) ;
 int FUNC_5 (struct bfa_tskim_s*,int ) ;
 int FUNC_6 (struct bfa_tskim_s*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_7(struct bfa_tskim_s *VAR_3,
  enum bfa_tskim_event VAR_4)
{
 FUNC_3(VAR_3->bfa, VAR_3->tsk_tag << 16 | VAR_4);

 switch (VAR_4) {
 case 130:
  FUNC_0(&VAR_3->reqq_wait);



 case 128:
  FUNC_2(VAR_3, VAR_1);
  FUNC_6(VAR_3);
  break;

 case 129:
  FUNC_2(VAR_3, VAR_2);
  FUNC_0(&VAR_3->reqq_wait);
  FUNC_4(VAR_3);
  FUNC_5(VAR_3, VAR_0);
  break;

 default:
  FUNC_1(VAR_3->bfa, VAR_4);
 }
}
