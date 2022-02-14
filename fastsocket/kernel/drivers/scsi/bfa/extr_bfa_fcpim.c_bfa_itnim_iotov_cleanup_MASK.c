
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_itnim_s {int pending_q; } ;
struct bfa_ioim_s {TYPE_1__* fcpim; int qe; } ;
struct TYPE_2__ {int ioim_comp_q; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_ioim_s*) ;
 int FUNC_1 (struct bfa_itnim_s*,int ) ;
 int FUNC_2 (int *,struct bfa_ioim_s**) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct bfa_itnim_s *VAR_1)
{
 struct bfa_ioim_s *VAR_2;




 FUNC_1(VAR_1, VAR_0);




 while (!FUNC_4(&VAR_1->pending_q)) {
  FUNC_2(&VAR_1->pending_q, &VAR_2);
  FUNC_3(&VAR_2->qe, &VAR_2->fcpim->ioim_comp_q);
  FUNC_0(VAR_2);
 }
}
