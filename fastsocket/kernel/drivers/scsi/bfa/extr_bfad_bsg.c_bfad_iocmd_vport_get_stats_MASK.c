
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bfad_s {int bfad_lock; int bfa_fcs; } ;
struct bfa_vport_stats_s {int dummy; } ;
struct bfa_lport_stats_s {int dummy; } ;
struct TYPE_4__ {int stats; } ;
struct bfa_fcs_vport_s {TYPE_2__ lport; int vport_stats; } ;
struct TYPE_3__ {int port_stats; } ;
struct bfa_bsg_vport_stats_s {int status; TYPE_1__ vport_stats; int vpwwn; int vf_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bfa_fcs_vport_s* FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (void*,void*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int
FUNC_4(struct bfad_s *VAR_2, void *VAR_3)
{
 struct bfa_fcs_vport_s *VAR_4;
 struct bfa_bsg_vport_stats_s *VAR_5 =
    (struct bfa_bsg_vport_stats_s *)VAR_3;
 unsigned long VAR_6;

 FUNC_2(&VAR_2->bfad_lock, VAR_6);
 VAR_4 = FUNC_0(&VAR_2->bfa_fcs,
    VAR_5->vf_id, VAR_5->vpwwn);
 if (VAR_4 == ((void*)0)) {
  FUNC_3(&VAR_2->bfad_lock, VAR_6);
  VAR_5->status = VAR_1;
  goto out;
 }

 FUNC_1((void *)&VAR_5->vport_stats, (void *)&VAR_4->vport_stats,
  sizeof(struct bfa_vport_stats_s));
 FUNC_1((void *)&VAR_5->vport_stats.port_stats,
        (void *)&VAR_4->lport.stats,
  sizeof(struct bfa_lport_stats_s));
 FUNC_3(&VAR_2->bfad_lock, VAR_6);
 VAR_5->status = VAR_0;
out:
 return 0;
}
