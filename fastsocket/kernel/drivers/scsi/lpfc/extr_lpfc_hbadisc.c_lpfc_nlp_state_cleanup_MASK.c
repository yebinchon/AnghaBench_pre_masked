
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lpfc_vport {scalar_t__ stat_data_enabled; TYPE_1__* phba; } ;
struct lpfc_scsicmd_bkt {int dummy; } ;
struct lpfc_nodelist {int nlp_flag; TYPE_2__* rport; int nlp_DID; int lat_data; int nlp_type; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_4__ {int scsi_target_id; } ;
struct TYPE_3__ {int nport_event_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct lpfc_vport*,struct lpfc_nodelist*,int) ;
 int FUNC_2 (struct lpfc_vport*,int ,int ,char*,int ) ;
 int FUNC_3 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 struct Scsi_Host* FUNC_4 (struct lpfc_vport*) ;
 int FUNC_5 (struct lpfc_nodelist*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(struct lpfc_vport *VAR_12, struct lpfc_nodelist *VAR_13,
         int VAR_14, int VAR_15)
{
 struct Scsi_Host *VAR_16 = FUNC_4(VAR_12);

 if (VAR_15 == VAR_10) {
  VAR_13->nlp_flag &= ~VAR_6;
  VAR_13->nlp_type |= VAR_5;
 }
 if (VAR_15 == VAR_8)
  VAR_13->nlp_flag &= ~VAR_6;
 if (VAR_15 == VAR_9)
  VAR_13->nlp_flag &= ~VAR_7;


 if (VAR_13->rport && (VAR_14 == VAR_8 ||
       VAR_14 == VAR_10)) {
  VAR_12->phba->nport_event_cnt++;
  FUNC_5(VAR_13);
 }

 if (VAR_15 == VAR_8 ||
     VAR_15 == VAR_10) {
  VAR_12->phba->nport_event_cnt++;





  FUNC_3(VAR_12, VAR_13);
 }
 if ((VAR_15 == VAR_8) &&
  (VAR_12->stat_data_enabled)) {




  VAR_13->lat_data = FUNC_0(VAR_3,
      sizeof(struct lpfc_scsicmd_bkt),
      VAR_0);

  if (!VAR_13->lat_data)
   FUNC_2(VAR_12, VAR_1, VAR_2,
    "0286 lpfc_nlp_state_cleanup failed to "
    "allocate statistical data buffer DID "
    "0x%x\n", VAR_13->nlp_DID);
 }






 if (VAR_15 == VAR_8 &&
     (!VAR_13->rport ||
      VAR_13->rport->scsi_target_id == -1 ||
      VAR_13->rport->scsi_target_id >= VAR_4)) {
  FUNC_6(VAR_16->host_lock);
  VAR_13->nlp_flag |= VAR_11;
  FUNC_7(VAR_16->host_lock);
  FUNC_1(VAR_12, VAR_13, VAR_10);
 }
}
