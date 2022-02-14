
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct fchs_s {int dummy; } ;
struct ct_hdr_s {scalar_t__ cmd_rsp_code; scalar_t__ reason_code; scalar_t__ exp_code; } ;
struct bfa_fcxp_s {int dummy; } ;
struct TYPE_4__ {int ns_rffid_rejects; int ns_rffid_accepts; int ns_rffid_rsp_err; } ;
struct TYPE_3__ {scalar_t__ pwwn; } ;
struct bfa_fcs_lport_s {int fcs; TYPE_2__ stats; TYPE_1__ port_cfg; } ;
struct bfa_fcs_lport_ns_s {struct bfa_fcs_lport_s* port; } ;
typedef scalar_t__ bfa_status_t ;


 scalar_t__ FUNC_0 (struct bfa_fcxp_s*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct bfa_fcs_lport_ns_s*,int ) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(void *VAR_5, struct bfa_fcxp_s *VAR_6,
    void *VAR_7, bfa_status_t VAR_8,
    u32 VAR_9, u32 VAR_10,
    struct fchs_s *VAR_11)
{
 struct bfa_fcs_lport_ns_s *VAR_12 = (struct bfa_fcs_lport_ns_s *) VAR_7;
 struct bfa_fcs_lport_s *VAR_13 = VAR_12->port;
 struct ct_hdr_s *VAR_14 = ((void*)0);

 FUNC_3(VAR_13->fcs, VAR_13->port_cfg.pwwn);




 if (VAR_8 != VAR_0) {
  FUNC_3(VAR_13->fcs, VAR_8);
  VAR_13->stats.ns_rffid_rsp_err++;
  FUNC_2(VAR_12, VAR_3);
  return;
 }

 VAR_14 = (struct ct_hdr_s *) FUNC_0(VAR_6);
 VAR_14->cmd_rsp_code = FUNC_1(VAR_14->cmd_rsp_code);

 if (VAR_14->cmd_rsp_code == VAR_2) {
  VAR_13->stats.ns_rffid_accepts++;
  FUNC_2(VAR_12, VAR_4);
  return;
 }

 VAR_13->stats.ns_rffid_rejects++;
 FUNC_3(VAR_13->fcs, VAR_14->reason_code);
 FUNC_3(VAR_13->fcs, VAR_14->exp_code);

 if (VAR_14->reason_code == VAR_1) {

  FUNC_2(VAR_12, VAR_4);
 } else
  FUNC_2(VAR_12, VAR_3);
}
