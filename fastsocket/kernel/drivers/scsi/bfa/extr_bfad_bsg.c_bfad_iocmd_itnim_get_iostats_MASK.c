
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfad_s {int bfad_lock; int bfa_fcs; } ;
struct bfa_itnim_iostats_s {int dummy; } ;
struct bfa_fcs_lport_s {int dummy; } ;
struct bfa_fcs_itnim_s {int dummy; } ;
struct bfa_bsg_itnim_iostats_s {int iostats; int status; int rpwwn; int lpwwn; int vf_id; } ;
struct TYPE_2__ {int stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct bfa_fcs_itnim_s*) ;
 struct bfa_fcs_itnim_s* FUNC_1 (struct bfa_fcs_lport_s*,int ) ;
 struct bfa_fcs_lport_s* FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (struct bfad_s*,int ) ;
 int FUNC_4 (void*,void*,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_7(struct bfad_s *VAR_3, void *VAR_4)
{
 struct bfa_bsg_itnim_iostats_s *VAR_5 =
   (struct bfa_bsg_itnim_iostats_s *)VAR_4;
 struct bfa_fcs_lport_s *VAR_6;
 struct bfa_fcs_itnim_s *VAR_7;
 unsigned long VAR_8;

 FUNC_5(&VAR_3->bfad_lock, VAR_8);
 VAR_6 = FUNC_2(&VAR_3->bfa_fcs,
    VAR_5->vf_id, VAR_5->lpwwn);
 if (!VAR_6) {
  VAR_5->status = VAR_1;
  FUNC_3(VAR_3, 0);
 } else {
  VAR_7 = FUNC_1(VAR_6, VAR_5->rpwwn);
  if (VAR_7 == ((void*)0))
   VAR_5->status = VAR_2;
  else {
   VAR_5->status = VAR_0;
   if (FUNC_0(VAR_7))
    FUNC_4((void *)&VAR_5->iostats, (void *)
    &(FUNC_0(VAR_7)->stats),
           sizeof(struct bfa_itnim_iostats_s));
  }
 }
 FUNC_6(&VAR_3->bfad_lock, VAR_8);
 return 0;
}
