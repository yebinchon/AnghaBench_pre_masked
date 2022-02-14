
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfad_itnim_s {int dummy; } ;
struct bfa_fcs_rport_s {int fcs; int pwwn; struct bfa_fcs_lport_s* port; } ;
struct bfa_fcs_lport_s {TYPE_1__* fcs; } ;
struct bfa_fcs_itnim_s {void* task_retry_id; void* conf_comp; void* rec_support; void* seq_rec; int * bfa_itnim; struct bfad_itnim_s* itnim_drv; int fcs; struct bfa_fcs_rport_s* rport; } ;
struct TYPE_2__ {int bfad; } ;


 void* VAR_0 ;
 int FUNC_0 (int ,struct bfa_fcs_itnim_s**,struct bfad_itnim_s**) ;
 int VAR_1 ;
 int FUNC_1 (struct bfa_fcs_itnim_s*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;

struct bfa_fcs_itnim_s *
FUNC_3(struct bfa_fcs_rport_s *VAR_2)
{
 struct bfa_fcs_lport_s *VAR_3 = VAR_2->port;
 struct bfa_fcs_itnim_s *VAR_4;
 struct bfad_itnim_s *VAR_5;




 FUNC_0(VAR_3->fcs->bfad, &VAR_4, &VAR_5);
 if (VAR_4 == ((void*)0)) {
  FUNC_2(VAR_3->fcs, VAR_2->pwwn);
  return ((void*)0);
 }




 VAR_4->rport = VAR_2;
 VAR_4->fcs = VAR_2->fcs;
 VAR_4->itnim_drv = VAR_5;

 VAR_4->bfa_itnim = ((void*)0);
 VAR_4->seq_rec = VAR_0;
 VAR_4->rec_support = VAR_0;
 VAR_4->conf_comp = VAR_0;
 VAR_4->task_retry_id = VAR_0;




 FUNC_1(VAR_4, VAR_1);

 return VAR_4;
}
