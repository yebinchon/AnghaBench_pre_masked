
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bfa_lport_info_s {void* node_wwn; void* port_wwn; scalar_t__ offline_reason; scalar_t__ port_state; int port_type; int num_rports_inuse; int max_rports_supp; int num_vports_inuse; int max_vports_supp; } ;
struct bfa_fcs_lport_s {int num_rports; TYPE_1__* fabric; TYPE_2__* fcs; int * vport; } ;
struct TYPE_4__ {int bfa; } ;
struct TYPE_3__ {int num_vports; int fabric_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (struct bfa_fcs_lport_s*) ;
 void* FUNC_1 (struct bfa_fcs_lport_s*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;

void
FUNC_4(struct bfa_fcs_lport_s *VAR_3,
  struct bfa_lport_info_s *VAR_4)
{

 FUNC_3(VAR_3->fcs, VAR_3->fabric->fabric_name);

 if (VAR_3->vport == ((void*)0)) {



  VAR_4->port_type = VAR_1;




  VAR_4->port_state = 0;
  VAR_4->offline_reason = 0;

  VAR_4->port_wwn = FUNC_1(VAR_3);
  VAR_4->node_wwn = FUNC_0(VAR_3);

  VAR_4->max_vports_supp =
   FUNC_2(VAR_3->fcs->bfa);
  VAR_4->num_vports_inuse =
   VAR_3->fabric->num_vports;
  VAR_4->max_rports_supp = VAR_0;
  VAR_4->num_rports_inuse = VAR_3->num_rports;
 } else {



  VAR_4->port_type = VAR_2;




  VAR_4->port_state = 0;
  VAR_4->offline_reason = 0;

  VAR_4->port_wwn = FUNC_1(VAR_3);
  VAR_4->node_wwn = FUNC_0(VAR_3);
 }
}
