
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcs_fabric_s {struct bfa_fcs_s* fcs; int bport; int wc; int lps; int vf_q; int vport_q; } ;
struct bfa_fcs_s {int bfa; struct bfa_fcs_fabric_s fabric; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,struct bfa_fcs_s*,int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct bfa_fcs_fabric_s*,int ) ;
 int FUNC_5 (int *,int ,struct bfa_fcs_fabric_s*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct bfa_fcs_fabric_s*,int ,int) ;

void
FUNC_8(struct bfa_fcs_s *VAR_3)
{
 struct bfa_fcs_fabric_s *VAR_4;

 VAR_4 = &VAR_3->fabric;
 FUNC_7(VAR_4, 0, sizeof(struct bfa_fcs_fabric_s));




 VAR_4->fcs = VAR_3;
 FUNC_0(&VAR_4->vport_q);
 FUNC_0(&VAR_4->vf_q);
 VAR_4->lps = FUNC_3(VAR_3->bfa);
 FUNC_1(!VAR_4->lps);





 FUNC_5(&VAR_4->wc, VAR_1, VAR_4);
 FUNC_6(&VAR_4->wc);

 FUNC_4(VAR_4, VAR_2);
 FUNC_2(&VAR_4->bport, VAR_4->fcs, VAR_0, ((void*)0));
}
