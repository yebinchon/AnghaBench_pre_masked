
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct fchs_s {int dummy; } ;
struct fc_rpsc2_acc_s {scalar_t__ els_cmd; scalar_t__ num_pids; TYPE_1__* port_info; } ;
struct fc_ls_rjt_s {scalar_t__ reason_code; scalar_t__ reason_code_expl; } ;
struct bfa_fcxp_s {int dummy; } ;
struct TYPE_4__ {int rpsc_rejects; int rpsc_accs; int rpsc_failed; } ;
struct bfa_fcs_rport_s {TYPE_2__ stats; int fcs; int pid; } ;
struct bfa_fcs_rpf_s {int rpsc_speed; struct bfa_fcs_rport_s* rport; } ;
typedef scalar_t__ bfa_status_t ;
struct TYPE_3__ {scalar_t__ speed; scalar_t__ index; scalar_t__ type; int pid; } ;


 scalar_t__ FUNC_0 (struct bfa_fcxp_s*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct bfa_fcs_rpf_s*,int ) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static void
FUNC_8(void *VAR_7, struct bfa_fcxp_s *VAR_8, void *VAR_9,
       bfa_status_t VAR_10, u32 VAR_11,
       u32 VAR_12, struct fchs_s *VAR_13)
{
 struct bfa_fcs_rpf_s *VAR_14 = (struct bfa_fcs_rpf_s *) VAR_9;
 struct bfa_fcs_rport_s *VAR_15 = VAR_14->rport;
 struct fc_ls_rjt_s *VAR_16;
 struct fc_rpsc2_acc_s *VAR_17;
 u16 VAR_18;

 FUNC_6(VAR_15->fcs, VAR_10);

 if (VAR_10 != VAR_1) {
  FUNC_6(VAR_15->fcs, VAR_10);
  if (VAR_10 == VAR_0)
   VAR_15->stats.rpsc_failed++;
  FUNC_5(VAR_14, VAR_5);
  return;
 }

 VAR_17 = (struct fc_rpsc2_acc_s *) FUNC_0(VAR_8);
 if (VAR_17->els_cmd == VAR_2) {
  VAR_15->stats.rpsc_accs++;
  VAR_18 = FUNC_2(VAR_17->num_pids);
  FUNC_6(VAR_15->fcs, VAR_18);
  if (VAR_18 > 0) {
   FUNC_1(FUNC_3(VAR_17->port_info[0].pid) !=
      FUNC_4(VAR_15->pid));
   FUNC_6(VAR_15->fcs,
    FUNC_3(VAR_17->port_info[0].pid));
   FUNC_6(VAR_15->fcs,
    FUNC_2(VAR_17->port_info[0].speed));
   FUNC_6(VAR_15->fcs,
    FUNC_2(VAR_17->port_info[0].index));
   FUNC_6(VAR_15->fcs,
    VAR_17->port_info[0].type);

   if (VAR_17->port_info[0].speed == 0) {
    FUNC_5(VAR_14, VAR_5);
    return;
   }

   VAR_14->rpsc_speed = FUNC_7(
    FUNC_2(VAR_17->port_info[0].speed));

   FUNC_5(VAR_14, VAR_4);
  }
 } else {
  VAR_16 = (struct fc_ls_rjt_s *) FUNC_0(VAR_8);
  FUNC_6(VAR_15->fcs, VAR_16->reason_code);
  FUNC_6(VAR_15->fcs, VAR_16->reason_code_expl);
  VAR_15->stats.rpsc_rejects++;
  if (VAR_16->reason_code == VAR_3)
   FUNC_5(VAR_14, VAR_6);
  else
   FUNC_5(VAR_14, VAR_5);
 }
}
