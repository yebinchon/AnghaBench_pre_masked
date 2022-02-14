
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {int bfad_lock; int bfa_fcs; } ;
struct bfa_fcs_lport_s {int dummy; } ;
struct bfa_fcs_itnim_s {int dummy; } ;
struct bfa_bsg_rport_reset_stats_s {int rpwwn; int status; int pwwn; int vf_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bfa_fcs_itnim_s*) ;
 struct bfa_fcs_itnim_s* FUNC_1 (struct bfa_fcs_lport_s*,int ) ;
 int FUNC_2 (struct bfa_fcs_lport_s*,int ) ;
 struct bfa_fcs_lport_s* FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_7(struct bfad_s *VAR_3, void *VAR_4)
{
 struct bfa_bsg_rport_reset_stats_s *VAR_5 =
   (struct bfa_bsg_rport_reset_stats_s *)VAR_4;
 struct bfa_fcs_lport_s *VAR_6;
 struct bfa_fcs_itnim_s *VAR_7;
 unsigned long VAR_8;

 FUNC_5(&VAR_3->bfad_lock, VAR_8);
 VAR_6 = FUNC_3(&VAR_3->bfa_fcs,
    VAR_5->vf_id, VAR_5->pwwn);
 if (!VAR_6)
  VAR_5->status = VAR_1;
 else {
  VAR_7 = FUNC_1(VAR_6, VAR_5->rpwwn);
  if (VAR_7 == ((void*)0))
   VAR_5->status = VAR_2;
  else {
   VAR_5->status = VAR_0;
   FUNC_2(VAR_6, VAR_5->rpwwn);
   FUNC_4(FUNC_0(VAR_7));
  }
 }
 FUNC_6(&VAR_3->bfad_lock, VAR_8);

 return 0;
}
