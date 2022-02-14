
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int vlan; } ;
struct TYPE_14__ {TYPE_5__ fcf; int qos_vc_attr; } ;
struct TYPE_15__ {TYPE_6__ vc_fcf; int bbcr_attr; int loop_info; } ;
struct TYPE_16__ {TYPE_7__ attr; int fec_state; int qos_attr; int topology; int speed; } ;
struct bfi_fcport_event_s {TYPE_8__ link_state; } ;
struct TYPE_12__ {int state; } ;
struct bfa_fcport_trunk_s {TYPE_4__ attr; } ;
struct TYPE_11__ {int trunked; scalar_t__ bb_cr_enabled; } ;
struct TYPE_9__ {struct bfi_fcport_event_s* event; } ;
struct TYPE_10__ {TYPE_1__ i2hmsg; } ;
struct bfa_fcport_s {int topology; int bfa; int speed; int fcoe_vlan; TYPE_3__ cfg; int fec_state; int bbcr_attr; int qos_vc_attr; int qos_attr; struct bfa_fcport_trunk_s trunk; TYPE_2__ event_arg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bfa_fcport_s*,int *) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct bfa_fcport_s *VAR_2)
{
 struct bfi_fcport_event_s *VAR_3 = VAR_2->event_arg.i2hmsg.event;
 struct bfa_fcport_trunk_s *VAR_4 = &VAR_2->trunk;

 VAR_2->speed = VAR_3->link_state.speed;
 VAR_2->topology = VAR_3->link_state.topology;

 if (VAR_2->topology == VAR_0) {
  FUNC_1(VAR_2,
    &VAR_3->link_state.attr.loop_info);
  return;
 }


 VAR_2->qos_attr = VAR_3->link_state.qos_attr;
 VAR_2->qos_vc_attr = VAR_3->link_state.attr.vc_fcf.qos_vc_attr;

 if (VAR_2->cfg.bb_cr_enabled)
  VAR_2->bbcr_attr = VAR_3->link_state.attr.bbcr_attr;

 VAR_2->fec_state = VAR_3->link_state.fec_state;




 if (!VAR_2->cfg.trunked)
  VAR_4->attr.state = VAR_1;


 VAR_2->fcoe_vlan =
  FUNC_0(VAR_3->link_state.attr.vc_fcf.fcf.vlan);

 FUNC_2(VAR_2->bfa, VAR_2->speed);
 FUNC_2(VAR_2->bfa, VAR_2->topology);
}
