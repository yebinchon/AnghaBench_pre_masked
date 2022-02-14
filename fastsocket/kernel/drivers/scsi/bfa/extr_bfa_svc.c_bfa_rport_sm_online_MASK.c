
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int qos_flow_id; int qos_priority; } ;
struct TYPE_7__ {int qos_flow_id; int qos_priority; } ;
struct bfi_rport_qos_scn_s {TYPE_3__ new_qos_attr; TYPE_2__ old_qos_attr; } ;
struct TYPE_6__ {scalar_t__ fw_msg; } ;
struct bfa_rport_s {int rport_tag; int bfa; int rport_drv; TYPE_3__ qos_attr; TYPE_1__ event_arg; } ;
typedef enum bfa_rport_event { ____Placeholder_bfa_rport_event } bfa_rport_event ;







 void* FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_2__,TYPE_3__) ;
 int FUNC_2 (int ,TYPE_2__,TYPE_3__) ;
 int FUNC_3 (struct bfa_rport_s*) ;
 int FUNC_4 (struct bfa_rport_s*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct bfa_rport_s*,int ) ;
 int FUNC_7 (struct bfa_rport_s*,int ) ;
 int FUNC_8 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_9(struct bfa_rport_s *VAR_9, enum bfa_rport_event VAR_10)
{
 struct bfi_rport_qos_scn_s *VAR_11;

 FUNC_8(VAR_9->bfa, VAR_9->rport_tag);
 FUNC_8(VAR_9->bfa, VAR_10);

 switch (VAR_10) {
 case 130:
  FUNC_7(VAR_9, VAR_7);
  if (FUNC_3(VAR_9))
   FUNC_6(VAR_9, VAR_2);
  else
   FUNC_6(VAR_9, VAR_3);
  break;

 case 132:
  FUNC_7(VAR_9, VAR_5);
  if (FUNC_3(VAR_9))
   FUNC_6(VAR_9, VAR_0);
  else
   FUNC_6(VAR_9, VAR_1);
  break;

 case 131:
  FUNC_7(VAR_9, VAR_6);
  FUNC_6(VAR_9, VAR_4);
  break;

 case 128:
  FUNC_4(VAR_9);
  break;

 case 129:
  VAR_11 = (struct bfi_rport_qos_scn_s *) VAR_9->event_arg.fw_msg;
  VAR_9->qos_attr = VAR_11->new_qos_attr;
  FUNC_8(VAR_9->bfa, VAR_11->old_qos_attr.qos_flow_id);
  FUNC_8(VAR_9->bfa, VAR_11->new_qos_attr.qos_flow_id);
  FUNC_8(VAR_9->bfa, VAR_11->old_qos_attr.qos_priority);
  FUNC_8(VAR_9->bfa, VAR_11->new_qos_attr.qos_priority);

  VAR_11->old_qos_attr.qos_flow_id =
   FUNC_0(VAR_11->old_qos_attr.qos_flow_id);
  VAR_11->new_qos_attr.qos_flow_id =
   FUNC_0(VAR_11->new_qos_attr.qos_flow_id);

  if (VAR_11->old_qos_attr.qos_flow_id !=
   VAR_11->new_qos_attr.qos_flow_id)
   FUNC_1(VAR_9->rport_drv,
          VAR_11->old_qos_attr,
          VAR_11->new_qos_attr);
  if (VAR_11->old_qos_attr.qos_priority !=
   VAR_11->new_qos_attr.qos_priority)
   FUNC_2(VAR_9->rport_drv,
        VAR_11->old_qos_attr,
        VAR_11->new_qos_attr);
  break;

 default:
  FUNC_7(VAR_9, VAR_8);
  FUNC_5(VAR_9->bfa, VAR_10);
 }
}
