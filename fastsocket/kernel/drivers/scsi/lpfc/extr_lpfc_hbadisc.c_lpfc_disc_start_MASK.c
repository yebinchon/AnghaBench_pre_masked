
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_vport {scalar_t__ port_state; scalar_t__ fc_prevDID; scalar_t__ fc_myDID; int fc_flag; scalar_t__ port_type; scalar_t__ fc_rscn_id_cnt; scalar_t__ num_disc_nodes; scalar_t__ fc_npr_cnt; int fc_adisc_cnt; int fc_plogi_cnt; struct lpfc_hba* phba; } ;
struct lpfc_hba {scalar_t__ link_state; int sli3_options; scalar_t__ sli_rev; } ;
struct Scsi_Host {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (struct lpfc_vport*) ;
 int FUNC_1 (struct lpfc_vport*) ;
 int FUNC_2 (struct lpfc_vport*) ;
 int FUNC_3 (struct lpfc_vport*) ;
 int FUNC_4 (struct lpfc_hba*) ;
 int FUNC_5 (struct lpfc_hba*,struct lpfc_vport*) ;
 int FUNC_6 (struct lpfc_hba*,struct lpfc_vport*) ;
 int FUNC_7 (struct lpfc_vport*,int ,int ,char*,scalar_t__,...) ;
 int FUNC_8 (struct lpfc_vport*) ;
 struct Scsi_Host* FUNC_9 (struct lpfc_vport*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

void
FUNC_12(struct lpfc_vport *VAR_14)
{
 struct Scsi_Host *VAR_15 = FUNC_9(VAR_14);
 struct lpfc_hba *VAR_16 = VAR_14->phba;
 uint32_t VAR_17;
 uint32_t VAR_18;
 int VAR_19;

 if (!FUNC_4(VAR_16)) {
  FUNC_7(VAR_14, VAR_5, VAR_7,
     "3315 Link is not up %x\n",
     VAR_16->link_state);
  return;
 }

 if (VAR_16->link_state == VAR_8)
  VAR_18 = 1;
 else
  VAR_18 = 0;

 if (VAR_14->port_state < VAR_13)
  VAR_14->port_state = VAR_9;

 FUNC_8(VAR_14);

 if (VAR_14->fc_prevDID == VAR_14->fc_myDID)
  VAR_19 = 0;
 else
  VAR_19 = 1;

 VAR_14->fc_prevDID = VAR_14->fc_myDID;
 VAR_14->num_disc_nodes = 0;


 FUNC_7(VAR_14, VAR_5, VAR_6,
    "0202 Start Discovery hba state x%x "
    "Data: x%x x%x x%x\n",
    VAR_14->port_state, VAR_14->fc_flag, VAR_14->fc_plogi_cnt,
    VAR_14->fc_adisc_cnt);


 VAR_17 = FUNC_1(VAR_14);

 if (VAR_17)
  return;


 if ((VAR_16->sli3_options & VAR_11) &&
     !(VAR_14->fc_flag & VAR_2) &&
     !(VAR_14->fc_flag & VAR_4) &&
     (VAR_16->sli_rev < VAR_12)) {
  if (VAR_14->port_type == VAR_10)
   FUNC_5(VAR_16, VAR_14);
  FUNC_6(VAR_16, VAR_14);
  return;
 }





 if (VAR_14->port_state < VAR_13 && !VAR_18) {

  if (VAR_14->port_type == VAR_10)
   FUNC_5(VAR_16, VAR_14);

  if (!(VAR_14->fc_flag & VAR_0)) {
   VAR_14->num_disc_nodes = 0;

   if (VAR_14->fc_npr_cnt)
    FUNC_2(VAR_14);

   if (!VAR_14->num_disc_nodes) {
    FUNC_10(VAR_15->host_lock);
    VAR_14->fc_flag &= ~VAR_1;
    FUNC_11(VAR_15->host_lock);
    FUNC_0(VAR_14);
   }
  }
  VAR_14->port_state = VAR_13;
 } else {

  VAR_17 = FUNC_2(VAR_14);

  if (VAR_17)
   return;

  if (VAR_14->fc_flag & VAR_4) {



   if ((VAR_14->fc_rscn_id_cnt == 0) &&
       (!(VAR_14->fc_flag & VAR_3))) {
    FUNC_10(VAR_15->host_lock);
    VAR_14->fc_flag &= ~VAR_4;
    FUNC_11(VAR_15->host_lock);
    FUNC_0(VAR_14);
   } else
    FUNC_3(VAR_14);
  }
 }
 return;
}
