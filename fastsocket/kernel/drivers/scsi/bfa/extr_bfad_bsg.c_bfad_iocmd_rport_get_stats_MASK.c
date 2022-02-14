
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bfad_s {int bfad_lock; int bfa_fcs; } ;
struct bfa_rport_stats_s {int dummy; } ;
struct bfa_rport_hal_stats_s {int dummy; } ;
struct bfa_fcs_rport_s {int stats; } ;
struct bfa_fcs_lport_s {int dummy; } ;
struct TYPE_3__ {int hal_stats; } ;
struct bfa_bsg_rport_stats_s {int status; TYPE_1__ stats; int rpwwn; int pwwn; int vf_id; } ;
struct TYPE_4__ {int stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bfa_fcs_lport_s* FUNC_0 (int *,int ,int ) ;
 TYPE_2__* FUNC_1 (struct bfa_fcs_rport_s*) ;
 struct bfa_fcs_rport_s* FUNC_2 (struct bfa_fcs_lport_s*,int ) ;
 int FUNC_3 (struct bfad_s*,int ) ;
 int FUNC_4 (void*,void*,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int
FUNC_7(struct bfad_s *VAR_3, void *VAR_4)
{
 struct bfa_bsg_rport_stats_s *VAR_5 =
   (struct bfa_bsg_rport_stats_s *)VAR_4;
 struct bfa_fcs_lport_s *VAR_6;
 struct bfa_fcs_rport_s *VAR_7;
 unsigned long VAR_8;

 FUNC_5(&VAR_3->bfad_lock, VAR_8);
 VAR_6 = FUNC_0(&VAR_3->bfa_fcs,
    VAR_5->vf_id, VAR_5->pwwn);
 if (VAR_6 == ((void*)0)) {
  FUNC_3(VAR_3, 0);
  FUNC_6(&VAR_3->bfad_lock, VAR_8);
  VAR_5->status = VAR_1;
  goto out;
 }

 VAR_7 = FUNC_2(VAR_6, VAR_5->rpwwn);
 if (VAR_7 == ((void*)0)) {
  FUNC_3(VAR_3, 0);
  FUNC_6(&VAR_3->bfad_lock, VAR_8);
  VAR_5->status = VAR_2;
  goto out;
 }

 FUNC_4((void *)&VAR_5->stats, (void *)&VAR_7->stats,
  sizeof(struct bfa_rport_stats_s));
 if (FUNC_1(VAR_7)) {
  FUNC_4((void *)&VAR_5->stats.hal_stats,
         (void *)&(FUNC_1(VAR_7)->stats),
   sizeof(struct bfa_rport_hal_stats_s));
 }

 FUNC_6(&VAR_3->bfad_lock, VAR_8);
 VAR_5->status = VAR_0;
out:
 return 0;
}
