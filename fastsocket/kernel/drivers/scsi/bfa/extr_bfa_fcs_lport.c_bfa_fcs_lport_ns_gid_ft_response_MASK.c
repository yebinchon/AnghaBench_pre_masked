
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct fchs_s {int dummy; } ;
struct ct_hdr_s {int cmd_rsp_code; int reason_code; int exp_code; } ;
struct bfa_fcxp_s {int dummy; } ;
struct TYPE_4__ {int ns_gidft_unknown_rsp; int ns_gidft_rejects; int ns_gidft_accepts; int ns_gidft_rsp_err; } ;
struct TYPE_3__ {int pwwn; } ;
struct bfa_fcs_lport_s {int fcs; TYPE_2__ stats; TYPE_1__ port_cfg; } ;
struct bfa_fcs_lport_ns_s {struct bfa_fcs_lport_s* port; } ;
typedef int bfa_status_t ;


 scalar_t__ FUNC_0 (struct bfa_fcxp_s*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct bfa_fcs_lport_s*,int*,int) ;
 int FUNC_3 (struct bfa_fcs_lport_ns_s*,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(void *VAR_5, struct bfa_fcxp_s *VAR_6,
    void *VAR_7, bfa_status_t VAR_8,
    u32 VAR_9, u32 VAR_10,
    struct fchs_s *VAR_11)
{
 struct bfa_fcs_lport_ns_s *VAR_12 = (struct bfa_fcs_lport_ns_s *) VAR_7;
 struct bfa_fcs_lport_s *VAR_13 = VAR_12->port;
 struct ct_hdr_s *VAR_14 = ((void*)0);
 u32 VAR_15;

 FUNC_4(VAR_13->fcs, VAR_13->port_cfg.pwwn);




 if (VAR_8 != VAR_0) {
  FUNC_4(VAR_13->fcs, VAR_8);
  VAR_13->stats.ns_gidft_rsp_err++;
  FUNC_3(VAR_12, VAR_3);
  return;
 }

 if (VAR_10 != 0) {




  FUNC_4(VAR_13->fcs, VAR_9);
  FUNC_4(VAR_13->fcs, VAR_10);
  return;
 }

 VAR_14 = (struct ct_hdr_s *) FUNC_0(VAR_6);
 VAR_14->cmd_rsp_code = FUNC_1(VAR_14->cmd_rsp_code);

 switch (VAR_14->cmd_rsp_code) {

 case 129:

  VAR_13->stats.ns_gidft_accepts++;
  VAR_15 = (FUNC_5(VAR_9) / sizeof(u32));
  FUNC_4(VAR_13->fcs, VAR_15);
  FUNC_2(VAR_13,
         (u32 *) (VAR_14 + 1),
         VAR_15);
  FUNC_3(VAR_12, VAR_4);
  break;

 case 128:





  VAR_13->stats.ns_gidft_rejects++;
  FUNC_4(VAR_13->fcs, VAR_14->reason_code);
  FUNC_4(VAR_13->fcs, VAR_14->exp_code);

  if ((VAR_14->reason_code == VAR_2)
      && (VAR_14->exp_code == VAR_1)) {

   FUNC_3(VAR_12, VAR_4);
  } else {



   FUNC_3(VAR_12, VAR_3);
  }
  break;

 default:
  VAR_13->stats.ns_gidft_unknown_rsp++;
  FUNC_4(VAR_13->fcs, VAR_14->cmd_rsp_code);
  FUNC_3(VAR_12, VAR_3);
 }
}
