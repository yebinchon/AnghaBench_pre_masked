
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {int bfad_lock; int bfa; } ;
struct bfa_bsg_fcpim_s {int status; int param; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int
FUNC_3(struct bfad_s *VAR_1, void *VAR_2)
{
 struct bfa_bsg_fcpim_s *VAR_3 = (struct bfa_bsg_fcpim_s *)VAR_2;
 unsigned long VAR_4;

 FUNC_1(&VAR_1->bfad_lock, VAR_4);
 FUNC_0(&VAR_1->bfa, VAR_3->param);
 FUNC_2(&VAR_1->bfad_lock, VAR_4);
 VAR_3->status = VAR_0;
 return 0;
}
