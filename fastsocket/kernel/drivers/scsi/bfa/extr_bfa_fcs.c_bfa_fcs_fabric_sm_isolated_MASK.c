
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bfad_s {int dummy; } ;
struct TYPE_5__ {int swp_vfid; } ;
struct TYPE_6__ {int pwwn; } ;
struct TYPE_7__ {TYPE_2__ port_cfg; } ;
struct bfa_fcs_fabric_s {TYPE_1__ event_arg; TYPE_4__* fcs; TYPE_3__ bport; } ;
typedef enum bfa_fcs_fabric_event { ____Placeholder_bfa_fcs_fabric_event } bfa_fcs_fabric_event ;
struct TYPE_8__ {int port_vfid; scalar_t__ bfad; } ;


 int FUNC_0 (int ,struct bfad_s*,int ,char*,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void
FUNC_3(struct bfa_fcs_fabric_s *VAR_3,
      enum bfa_fcs_fabric_event VAR_4)
{
 struct bfad_s *VAR_5 = (struct bfad_s *)VAR_3->fcs->bfad;
 char VAR_6[VAR_0];

 FUNC_1(VAR_3->fcs, VAR_3->bport.port_cfg.pwwn);
 FUNC_1(VAR_3->fcs, VAR_4);
 FUNC_2(VAR_6, VAR_3->bport.port_cfg.pwwn);

 FUNC_0(VAR_1, VAR_5, VAR_2,
  "Port is isolated due to VF_ID mismatch. "
  "PWWN: %s Port VF_ID: %04x switch port VF_ID: %04x.",
  VAR_6, VAR_3->fcs->port_vfid,
  VAR_3->event_arg.swp_vfid);
}
