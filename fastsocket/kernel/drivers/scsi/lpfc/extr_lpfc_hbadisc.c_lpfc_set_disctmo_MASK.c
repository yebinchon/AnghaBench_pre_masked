
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_vport {int fc_adisc_cnt; int fc_plogi_cnt; int fc_disctmo; int port_state; int fc_flag; struct lpfc_hba* phba; } ;
struct lpfc_hba {int fc_edtov; int fc_ratov; } ;
struct Scsi_Host {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct lpfc_vport*,int ,char*,int,int ,int ) ;
 int FUNC_1 (struct lpfc_vport*,int ,int ,char*,int ,int,unsigned long,int ,int ) ;
 struct Scsi_Host* FUNC_2 (struct lpfc_vport*) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

void
FUNC_8(struct lpfc_vport *VAR_6)
{
 struct Scsi_Host *VAR_7 = FUNC_2(VAR_6);
 struct lpfc_hba *VAR_8 = VAR_6->phba;
 uint32_t VAR_9;

 if (VAR_6->port_state == VAR_4) {

  VAR_9 = (((VAR_8->fc_edtov + 999) / 1000) + 1);
 } else {



  VAR_9 = ((VAR_8->fc_ratov * 3) + 3);
 }


 if (!FUNC_7(&VAR_6->fc_disctmo)) {
  FUNC_0(VAR_6, VAR_3,
   "set disc timer:  tmo:x%x state:x%x flg:x%x",
   VAR_9, VAR_6->port_state, VAR_6->fc_flag);
 }

 FUNC_3(&VAR_6->fc_disctmo, VAR_5 + FUNC_4(1000 * VAR_9));
 FUNC_5(VAR_7->host_lock);
 VAR_6->fc_flag |= VAR_0;
 FUNC_6(VAR_7->host_lock);


 FUNC_1(VAR_6, VAR_1, VAR_2,
    "0247 Start Discovery Timer state x%x "
    "Data: x%x x%lx x%x x%x\n",
    VAR_6->port_state, VAR_9,
    (unsigned long)&VAR_6->fc_disctmo, VAR_6->fc_plogi_cnt,
    VAR_6->fc_adisc_cnt);

 return;
}
