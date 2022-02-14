
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_rport_s {int qe; } ;
struct bfa_rport_mod_s {int rp_active_q; int rp_free_q; } ;


 int FUNC_0 (int *,struct bfa_rport_s**) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static struct bfa_rport_s *
FUNC_2(struct bfa_rport_mod_s *VAR_0)
{
 struct bfa_rport_s *VAR_1;

 FUNC_0(&VAR_0->rp_free_q, &VAR_1);
 if (VAR_1)
  FUNC_1(&VAR_1->qe, &VAR_0->rp_active_q);

 return VAR_1;
}
