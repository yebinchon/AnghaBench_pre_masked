
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {int bfad_lock; int bfa_fcs; } ;
struct bfa_vf_stats_s {int dummy; } ;
struct bfa_fcs_fabric_s {int stats; } ;
struct bfa_bsg_vf_stats_s {int status; int stats; int vf_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bfa_fcs_fabric_s* FUNC_0 (int *,int ) ;
 int FUNC_1 (void*,void*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int
FUNC_4(struct bfad_s *VAR_2, void *VAR_3)
{
 struct bfa_bsg_vf_stats_s *VAR_4 =
   (struct bfa_bsg_vf_stats_s *)VAR_3;
 struct bfa_fcs_fabric_s *VAR_5;
 unsigned long VAR_6;

 FUNC_2(&VAR_2->bfad_lock, VAR_6);
 VAR_5 = FUNC_0(&VAR_2->bfa_fcs, VAR_4->vf_id);
 if (VAR_5 == ((void*)0)) {
  FUNC_3(&VAR_2->bfad_lock, VAR_6);
  VAR_4->status = VAR_1;
  goto out;
 }
 FUNC_1((void *)&VAR_4->stats, (void *)&VAR_5->stats,
  sizeof(struct bfa_vf_stats_s));
 FUNC_3(&VAR_2->bfad_lock, VAR_6);
 VAR_4->status = VAR_0;
out:
 return 0;
}
