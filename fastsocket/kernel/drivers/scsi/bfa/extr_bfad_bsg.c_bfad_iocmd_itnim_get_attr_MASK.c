
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {int bfad_lock; int bfa_fcs; } ;
struct bfa_fcs_lport_s {int dummy; } ;
struct bfa_bsg_itnim_attr_s {int attr; int rpwwn; int status; int lpwwn; int vf_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_fcs_lport_s*,int ,int *) ;
 struct bfa_fcs_lport_s* FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_4(struct bfad_s *VAR_1, void *VAR_2)
{
 struct bfa_bsg_itnim_attr_s *VAR_3 = (struct bfa_bsg_itnim_attr_s *)VAR_2;
 struct bfa_fcs_lport_s *VAR_4;
 unsigned long VAR_5;

 FUNC_2(&VAR_1->bfad_lock, VAR_5);
 VAR_4 = FUNC_1(&VAR_1->bfa_fcs,
    VAR_3->vf_id, VAR_3->lpwwn);
 if (!VAR_4)
  VAR_3->status = VAR_0;
 else
  VAR_3->status = FUNC_0(VAR_4,
     VAR_3->rpwwn, &VAR_3->attr);
 FUNC_3(&VAR_1->bfad_lock, VAR_5);
 return 0;
}
