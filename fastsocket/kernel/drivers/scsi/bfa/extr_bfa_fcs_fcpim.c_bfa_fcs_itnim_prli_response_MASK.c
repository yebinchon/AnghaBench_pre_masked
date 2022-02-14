
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct fchs_s {int dummy; } ;
struct fc_prli_params_s {int confirm; int task_retry_id; int rec_support; int retry; scalar_t__ initiator; } ;
struct TYPE_5__ {scalar_t__ type; struct fc_prli_params_s servparams; } ;
struct fc_prli_s {TYPE_2__ parampage; } ;
struct fc_ls_rjt_s {scalar_t__ reason_code; scalar_t__ reason_code_expl; } ;
struct fc_els_cmd_s {scalar_t__ els_code; } ;
struct bfa_fcxp_s {int dummy; } ;
struct TYPE_6__ {int prli_rsp_rjt; int prli_rsp_acc; int prli_rsp_parse_err; int initiator; int prli_rsp_err; } ;
struct bfa_fcs_itnim_s {TYPE_3__ stats; int fcs; int conf_comp; int task_retry_id; int rec_support; int seq_rec; TYPE_1__* rport; } ;
typedef scalar_t__ bfa_status_t ;
struct TYPE_4__ {int scsi_function; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct bfa_fcxp_s*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct bfa_fcs_itnim_s*,int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (struct fc_prli_s*,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(void *VAR_9, struct bfa_fcxp_s *VAR_10, void *VAR_11,
       bfa_status_t VAR_12, u32 VAR_13,
       u32 VAR_14, struct fchs_s *VAR_15)
{
 struct bfa_fcs_itnim_s *VAR_16 = (struct bfa_fcs_itnim_s *) VAR_11;
 struct fc_els_cmd_s *VAR_17;
 struct fc_prli_s *VAR_18;
 struct fc_ls_rjt_s *VAR_19;
 struct fc_prli_params_s *VAR_20;

 FUNC_2(VAR_16->fcs, VAR_12);




 if (VAR_12 != VAR_5) {
  VAR_16->stats.prli_rsp_err++;
  FUNC_1(VAR_16, VAR_0);
  return;
 }

 VAR_17 = (struct fc_els_cmd_s *) FUNC_0(VAR_10);

 if (VAR_17->els_code == VAR_6) {
  VAR_18 = (struct fc_prli_s *) VAR_17;

  if (FUNC_3(VAR_18, VAR_13) != VAR_8) {
   FUNC_2(VAR_16->fcs, VAR_13);




   if (VAR_18->parampage.servparams.initiator) {
    FUNC_2(VAR_16->fcs, VAR_18->parampage.type);
    VAR_16->rport->scsi_function =
      VAR_3;
    VAR_16->stats.prli_rsp_acc++;
    VAR_16->stats.initiator++;
    FUNC_1(VAR_16,
        VAR_2);
    return;
   }

   VAR_16->stats.prli_rsp_parse_err++;
   return;
  }
  VAR_16->rport->scsi_function = VAR_4;

  VAR_20 = &VAR_18->parampage.servparams;
  VAR_16->seq_rec = VAR_20->retry;
  VAR_16->rec_support = VAR_20->rec_support;
  VAR_16->task_retry_id = VAR_20->task_retry_id;
  VAR_16->conf_comp = VAR_20->confirm;

  VAR_16->stats.prli_rsp_acc++;
  FUNC_1(VAR_16, VAR_2);
 } else {
  VAR_19 = (struct fc_ls_rjt_s *) FUNC_0(VAR_10);

  FUNC_2(VAR_16->fcs, VAR_19->reason_code);
  FUNC_2(VAR_16->fcs, VAR_19->reason_code_expl);

  VAR_16->stats.prli_rsp_rjt++;
  if (VAR_19->reason_code == VAR_7) {
   FUNC_1(VAR_16, VAR_1);
   return;
  }
  FUNC_1(VAR_16, VAR_0);
 }
}
