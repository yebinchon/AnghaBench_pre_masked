
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct TYPE_3__ {int * ulpWord; } ;
struct TYPE_4__ {TYPE_1__ un; int ulpStatus; } ;
struct lpfc_iocbq {int iocb_flag; TYPE_2__ iocb; int iocb_cmpl; int sli4_xritag; } ;
struct lpfc_scsi_buf {int status; int timeout; struct lpfc_iocbq cur_iocbq; struct lpfc_rport_data* rdata; } ;
struct lpfc_rport_data {struct lpfc_nodelist* pnode; } ;
struct lpfc_nodelist {int nlp_flag; int nlp_rpi; } ;
struct lpfc_hba {int cfg_task_mgmt_tmo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_9 ;
 int VAR_10 ;
 struct lpfc_scsi_buf* FUNC_1 (struct lpfc_hba*,struct lpfc_nodelist*) ;
 int FUNC_2 (struct lpfc_vport*,int ,int ,char*,int ,unsigned int,unsigned int,int ,int ,int ,...) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_scsi_buf*) ;
 int FUNC_4 (struct lpfc_vport*,struct lpfc_scsi_buf*,unsigned int,int ) ;
 struct lpfc_iocbq* FUNC_5 (struct lpfc_hba*) ;
 int FUNC_6 (struct lpfc_hba*,int ,struct lpfc_iocbq*,struct lpfc_iocbq*,int ) ;
 int FUNC_7 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_8 (int ) ;
 int VAR_11 ;

__attribute__((used)) static int
FUNC_9(struct lpfc_vport *VAR_12, struct lpfc_rport_data *VAR_13,
      unsigned VAR_14, unsigned int VAR_15,
      uint8_t VAR_16)
{
 struct lpfc_hba *VAR_17 = VAR_12->phba;
 struct lpfc_scsi_buf *VAR_18;
 struct lpfc_iocbq *VAR_19;
 struct lpfc_iocbq *VAR_20;
 struct lpfc_nodelist *VAR_21 = VAR_13->pnode;
 int VAR_22;
 int VAR_23;

 if (!VAR_21 || !FUNC_0(VAR_21))
  return VAR_0;

 VAR_18 = FUNC_1(VAR_17, VAR_13->pnode);
 if (VAR_18 == ((void*)0))
  return VAR_0;
 VAR_18->timeout = VAR_17->cfg_task_mgmt_tmo;
 VAR_18->rdata = VAR_13;

 VAR_23 = FUNC_4(VAR_12, VAR_18, VAR_15,
        VAR_16);
 if (!VAR_23) {
  FUNC_3(VAR_17, VAR_18);
  return VAR_0;
 }

 VAR_19 = &VAR_18->cur_iocbq;
 VAR_20 = FUNC_5(VAR_17);
 if (VAR_20 == ((void*)0)) {
  FUNC_3(VAR_17, VAR_18);
  return VAR_0;
 }

 FUNC_2(VAR_12, VAR_6, VAR_7,
    "0702 Issue %s to TGT %d LUN %d "
    "rpi x%x nlp_flag x%x Data: x%x x%x\n",
    FUNC_8(VAR_16), VAR_14, VAR_15,
    VAR_21->nlp_rpi, VAR_21->nlp_flag, VAR_19->sli4_xritag,
    VAR_19->iocb_flag);

 VAR_23 = FUNC_6(VAR_17, VAR_8,
       VAR_19, VAR_20, VAR_18->timeout);
 if (VAR_23 != VAR_2) {
  if (VAR_23 == VAR_3) {
   VAR_19->iocb_cmpl = VAR_11;
   VAR_22 = VAR_10;
  } else
   VAR_22 = VAR_0;
  VAR_18->status = VAR_4;
  FUNC_2(VAR_12, VAR_5, VAR_7,
    "0727 TMF %s to TGT %d LUN %d failed (%d, %d) "
    "iocb_flag x%x\n",
    FUNC_8(VAR_16),
    VAR_14, VAR_15, VAR_20->iocb.ulpStatus,
    VAR_20->iocb.un.ulpWord[4],
    VAR_19->iocb_flag);
 } else if (VAR_23 == VAR_1)
  VAR_22 = VAR_0;
 else
  VAR_22 = VAR_9;

 FUNC_7(VAR_17, VAR_20);

 if (VAR_22 != VAR_10)
  FUNC_3(VAR_17, VAR_18);

 return VAR_22;
}
