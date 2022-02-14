
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_lps_s {int bfa_tag; int bfa; int wqe; } ;
typedef enum bfa_lps_event { ____Placeholder_bfa_lps_event } bfa_lps_event ;





 int FUNC_0 (struct bfa_lps_s*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct bfa_lps_s*,int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void
FUNC_5(struct bfa_lps_s *VAR_2, enum bfa_lps_event VAR_3)
{
 FUNC_4(VAR_2->bfa, VAR_2->bfa_tag);
 FUNC_4(VAR_2->bfa, VAR_3);

 switch (VAR_3) {
 case 128:
  FUNC_3(VAR_2, VAR_1);
  FUNC_0(VAR_2);
  break;

 case 129:
 case 130:
  FUNC_3(VAR_2, VAR_0);
  FUNC_1(&VAR_2->wqe);
  break;

 default:
  FUNC_2(VAR_2->bfa, VAR_3);
 }
}
