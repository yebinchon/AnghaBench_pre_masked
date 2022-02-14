
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_rport_info_s {scalar_t__ max_frmsz; } ;
struct bfa_rport_s {struct bfa_rport_info_s rport_info; int rport_tag; int bfa; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bfa_rport_s*,int ) ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3(struct bfa_rport_s *VAR_2, struct bfa_rport_info_s *VAR_3)
{
 FUNC_0(VAR_3->max_frmsz == 0);





 if (VAR_3->max_frmsz == 0) {
  FUNC_2(VAR_2->bfa, VAR_2->rport_tag);
  VAR_3->max_frmsz = VAR_1;
 }

 VAR_2->rport_info = *VAR_3;
 FUNC_1(VAR_2, VAR_0);
}
