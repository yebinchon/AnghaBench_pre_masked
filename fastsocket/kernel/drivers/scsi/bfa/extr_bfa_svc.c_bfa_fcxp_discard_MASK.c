
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcxp_s {int send_cbfn; int reqq_wqe; scalar_t__ reqq_waiting; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bfa_fcxp_s*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct bfa_fcxp_s *VAR_2)
{




 if (VAR_2->reqq_waiting) {
  VAR_2->reqq_waiting = VAR_0;
  FUNC_1(&VAR_2->reqq_wqe);
  FUNC_0(VAR_2);
  return;
 }

 VAR_2->send_cbfn = VAR_1;
}
