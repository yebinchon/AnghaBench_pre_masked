
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {int bfad_lock; int bfa; } ;
struct bfad_hal_comp {scalar_t__ status; int comp; } ;
struct bfa_bsg_diag_qtest_s {scalar_t__ status; int result; int queue; int force; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int ,int *,int ,struct bfad_hal_comp*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;

int
FUNC_5(struct bfad_s *VAR_2, void *VAR_3)
{
 struct bfa_bsg_diag_qtest_s *VAR_4 = (struct bfa_bsg_diag_qtest_s *)VAR_3;
 struct bfad_hal_comp VAR_5;
 unsigned long VAR_6;

 FUNC_1(&VAR_5.comp);
 FUNC_2(&VAR_2->bfad_lock, VAR_6);
 VAR_4->status = FUNC_0(&VAR_2->bfa, VAR_4->force,
    VAR_4->queue, &VAR_4->result,
    VAR_1, &VAR_5);
 FUNC_3(&VAR_2->bfad_lock, VAR_6);
 if (VAR_4->status != VAR_0)
  goto out;
 FUNC_4(&VAR_5.comp);
 VAR_4->status = VAR_5.status;
out:
 return 0;
}
