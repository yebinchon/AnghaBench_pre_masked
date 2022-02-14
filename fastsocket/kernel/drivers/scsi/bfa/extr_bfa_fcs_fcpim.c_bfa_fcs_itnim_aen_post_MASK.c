
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct bfad_s {int dummy; } ;
struct bfa_fcs_rport_s {TYPE_4__* fcs; int pwwn; TYPE_5__* port; int pid; } ;
struct bfa_fcs_itnim_s {TYPE_7__* fcs; struct bfa_fcs_rport_s* rport; } ;
struct TYPE_9__ {int rpwwn; void* lpwwn; void* ppwwn; int vf_id; } ;
struct TYPE_10__ {TYPE_2__ itnim; } ;
struct bfa_aen_entry_s {TYPE_3__ aen_data; } ;
typedef enum bfa_itnim_aen_event { ____Placeholder_bfa_itnim_aen_event } bfa_itnim_aen_event ;
struct TYPE_13__ {scalar_t__ bfad; } ;
struct TYPE_12__ {TYPE_1__* fabric; } ;
struct TYPE_11__ {int fcs_aen_seq; } ;
struct TYPE_8__ {int vf_id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_5__* FUNC_1 (TYPE_7__*) ;
 void* FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (struct bfad_s*,struct bfa_aen_entry_s*) ;
 int FUNC_4 (struct bfa_aen_entry_s*,struct bfad_s*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct bfa_fcs_itnim_s *VAR_1,
   enum bfa_itnim_aen_event VAR_2)
{
 struct bfa_fcs_rport_s *VAR_3 = VAR_1->rport;
 struct bfad_s *VAR_4 = (struct bfad_s *)VAR_1->fcs->bfad;
 struct bfa_aen_entry_s *VAR_5;


 if (FUNC_0(VAR_3->pid))
  return;

 FUNC_3(VAR_4, VAR_5);
 if (!VAR_5)
  return;

 VAR_5->aen_data.itnim.vf_id = VAR_3->port->fabric->vf_id;
 VAR_5->aen_data.itnim.ppwwn = FUNC_2(
     FUNC_1(VAR_1->fcs));
 VAR_5->aen_data.itnim.lpwwn = FUNC_2(VAR_3->port);
 VAR_5->aen_data.itnim.rpwwn = VAR_3->pwwn;


 FUNC_4(VAR_5, VAR_4, ++VAR_3->fcs->fcs_aen_seq,
      VAR_0, VAR_2);
}
