
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {int bfad_lock; int bfa; } ;
struct bfad_hal_comp {scalar_t__ status; int comp; } ;
struct bfa_cb_pending_q_s {int dummy; } ;
struct bfa_bsg_fcport_stats_s {scalar_t__ status; int stats; } ;
typedef int bfa_cb_cbfn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,struct bfa_cb_pending_q_s*) ;
 int FUNC_1 (struct bfa_cb_pending_q_s*,int ,struct bfad_hal_comp*,int *) ;
 int FUNC_2 (struct bfad_s*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;

int
FUNC_7(struct bfad_s *VAR_2, void *VAR_3)
{
 struct bfa_bsg_fcport_stats_s *VAR_4 =
    (struct bfa_bsg_fcport_stats_s *)VAR_3;
 struct bfad_hal_comp VAR_5;
 unsigned long VAR_6;
 struct bfa_cb_pending_q_s VAR_7;

 FUNC_3(&VAR_5.comp);
 FUNC_1(&VAR_7, (bfa_cb_cbfn_t)VAR_1,
      &VAR_5, &VAR_4->stats);
 FUNC_4(&VAR_2->bfad_lock, VAR_6);
 VAR_4->status = FUNC_0(&VAR_2->bfa, &VAR_7);
 FUNC_5(&VAR_2->bfad_lock, VAR_6);
 if (VAR_4->status != VAR_0) {
  FUNC_2(VAR_2, VAR_4->status);
  goto out;
 }
 FUNC_6(&VAR_5.comp);
 VAR_4->status = VAR_5.status;
out:
 return 0;
}
