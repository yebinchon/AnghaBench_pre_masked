
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct se_portal_group {int se_tpg_tfo; } ;
struct tcm_loop_tpg {struct se_portal_group tl_se_tpg; } ;
struct tcm_loop_tmr {int tmr_complete; int tl_tmr_wait; } ;
struct tcm_loop_nexus {struct se_session* se_sess; } ;
struct tcm_loop_hba {struct tcm_loop_tpg* tl_hba_tpgs; struct tcm_loop_nexus* tl_nexus; } ;
struct se_cmd {TYPE_2__* se_tmr_req; } ;
struct tcm_loop_cmd {int * tl_sense_buf; struct se_cmd tl_se_cmd; } ;
struct se_session {int dummy; } ;
struct scsi_cmnd {TYPE_1__* device; } ;
struct TYPE_4__ {scalar_t__ response; } ;
struct TYPE_3__ {size_t id; int lun; int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct se_cmd*,struct tcm_loop_tmr*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tcm_loop_tmr*) ;
 int FUNC_4 (int ,struct tcm_loop_cmd*) ;
 struct tcm_loop_cmd* FUNC_5 (int ,int ) ;
 struct tcm_loop_tmr* FUNC_6 (int,int ) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_7 ;
 int FUNC_9 (struct se_cmd*,int) ;
 int FUNC_10 (struct se_cmd*) ;
 int FUNC_11 (struct se_cmd*,int ,struct se_session*,int ,int ,int ,int *) ;
 scalar_t__ FUNC_12 (struct se_cmd*,int ) ;
 int FUNC_13 (int ,int ) ;

__attribute__((used)) static int FUNC_14(struct scsi_cmnd *VAR_8)
{
 struct se_cmd *VAR_9 = ((void*)0);
 struct se_portal_group *VAR_10;
 struct se_session *VAR_11;
 struct tcm_loop_cmd *VAR_12 = ((void*)0);
 struct tcm_loop_hba *VAR_13;
 struct tcm_loop_nexus *VAR_14;
 struct tcm_loop_tmr *VAR_15 = ((void*)0);
 struct tcm_loop_tpg *VAR_16;
 int VAR_17 = VAR_1, VAR_18;



 VAR_13 = *(struct tcm_loop_hba **)FUNC_8(VAR_8->device->host);



 VAR_14 = VAR_13->tl_nexus;
 if (!VAR_14) {
  FUNC_7("Unable to perform device reset without"
    " active I_T Nexus\n");
  return VAR_1;
 }
 VAR_11 = VAR_14->se_sess;



 VAR_16 = &VAR_13->tl_hba_tpgs[VAR_8->device->id];
 VAR_10 = &VAR_16->tl_se_tpg;

 VAR_12 = FUNC_5(VAR_7, VAR_2);
 if (!VAR_12) {
  FUNC_7("Unable to allocate memory for tl_cmd\n");
  return VAR_1;
 }

 VAR_15 = FUNC_6(sizeof(struct tcm_loop_tmr), VAR_2);
 if (!VAR_15) {
  FUNC_7("Unable to allocate memory for tl_tmr\n");
  goto release;
 }
 FUNC_2(&VAR_15->tl_tmr_wait);

 VAR_9 = &VAR_12->tl_se_cmd;



 FUNC_11(VAR_9, VAR_10->se_tpg_tfo, VAR_11, 0,
    VAR_0, VAR_3,
    &VAR_12->tl_sense_buf[0]);

 VAR_18 = FUNC_1(VAR_9, VAR_15, VAR_6, VAR_2);
 if (VAR_18 < 0)
  goto release;



 if (FUNC_12(VAR_9, VAR_8->device->lun) < 0)
  goto release;




 FUNC_10(VAR_9);
 FUNC_13(VAR_15->tl_tmr_wait, FUNC_0(&VAR_15->tmr_complete));




 VAR_17 = (VAR_9->se_tmr_req->response == VAR_5) ?
  VAR_4 : VAR_1;
release:
 if (VAR_9)
  FUNC_9(VAR_9, 1);
 else
  FUNC_4(VAR_7, VAR_12);
 FUNC_3(VAR_15);
 return VAR_17;
}
