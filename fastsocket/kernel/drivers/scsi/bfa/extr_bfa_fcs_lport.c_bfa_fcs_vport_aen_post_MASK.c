
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct bfad_s {int dummy; } ;
struct TYPE_9__ {int roles; } ;
struct bfa_fcs_lport_s {TYPE_6__* fcs; TYPE_3__ port_cfg; TYPE_2__* fabric; } ;
struct TYPE_10__ {void* lpwwn; void* ppwwn; int roles; int vf_id; } ;
struct TYPE_11__ {TYPE_4__ lport; } ;
struct bfa_aen_entry_s {TYPE_5__ aen_data; } ;
typedef enum bfa_lport_aen_event { ____Placeholder_bfa_lport_aen_event } bfa_lport_aen_event ;
struct TYPE_12__ {int fcs_aen_seq; } ;
struct TYPE_8__ {int vf_id; TYPE_1__* fcs; } ;
struct TYPE_7__ {scalar_t__ bfad; } ;


 int VAR_0 ;
 struct bfa_fcs_lport_s* FUNC_0 (TYPE_6__*) ;
 void* FUNC_1 (struct bfa_fcs_lport_s*) ;
 int FUNC_2 (struct bfad_s*,struct bfa_aen_entry_s*) ;
 int FUNC_3 (struct bfa_aen_entry_s*,struct bfad_s*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct bfa_fcs_lport_s *VAR_1,
         enum bfa_lport_aen_event VAR_2)
{
 struct bfad_s *VAR_3 = (struct bfad_s *)VAR_1->fabric->fcs->bfad;
 struct bfa_aen_entry_s *VAR_4;

 FUNC_2(VAR_3, VAR_4);
 if (!VAR_4)
  return;

 VAR_4->aen_data.lport.vf_id = VAR_1->fabric->vf_id;
 VAR_4->aen_data.lport.roles = VAR_1->port_cfg.roles;
 VAR_4->aen_data.lport.ppwwn = FUNC_1(
     FUNC_0(VAR_1->fcs));
 VAR_4->aen_data.lport.lpwwn = FUNC_1(VAR_1);


 FUNC_3(VAR_4, VAR_3, ++VAR_1->fcs->fcs_aen_seq,
      VAR_0, VAR_2);
}
