
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int fc_flag; scalar_t__ cfg_fdmi_on; int delayed_disc_tmo; } ;
struct lpfc_nodelist {int nlp_DID; int nlp_type; } ;
struct lpfc_hba {int fc_ratov; scalar_t__ fc_topology; int nlp_mem_pool; } ;
struct Scsi_Host {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (struct lpfc_vport*) ;
 struct lpfc_nodelist* FUNC_2 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 struct lpfc_nodelist* FUNC_3 (struct lpfc_vport*,int ) ;
 scalar_t__ FUNC_4 (struct lpfc_vport*,int ,int ) ;
 int FUNC_5 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_6 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_7 (struct lpfc_hba*,int ,int ,char*,int) ;
 int FUNC_8 (struct lpfc_vport*,int ,int ,char*) ;
 struct Scsi_Host* FUNC_9 (struct lpfc_vport*) ;
 int FUNC_10 (struct lpfc_vport*,int ) ;
 struct lpfc_nodelist* FUNC_11 (int ,int ) ;
 int FUNC_12 (int *,scalar_t__) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;

void
FUNC_16(struct lpfc_hba *VAR_14, struct lpfc_vport *VAR_15)
{
 struct lpfc_nodelist *VAR_16, *VAR_17;
 struct Scsi_Host *VAR_18 = FUNC_9(VAR_15);






 FUNC_14(VAR_18->host_lock);
 if (VAR_15->fc_flag & VAR_0) {
  FUNC_15(VAR_18->host_lock);
  FUNC_7(VAR_14, VAR_4, VAR_5,
    "3334 Delay fc port discovery for %d seconds\n",
    VAR_14->fc_ratov);
  FUNC_12(&VAR_15->delayed_disc_tmo,
   VAR_13 + FUNC_13(1000 * VAR_14->fc_ratov));
  return;
 }
 FUNC_15(VAR_18->host_lock);

 VAR_16 = FUNC_3(VAR_15, VAR_12);
 if (!VAR_16) {
  VAR_16 = FUNC_11(VAR_14->nlp_mem_pool, VAR_3);
  if (!VAR_16) {
   if (VAR_14->fc_topology == VAR_7) {
    FUNC_1(VAR_15);
    return;
   }
   FUNC_10(VAR_15, VAR_1);
   FUNC_8(VAR_15, VAR_4, VAR_6,
      "0251 NameServer login: no memory\n");
   return;
  }
  FUNC_5(VAR_15, VAR_16, VAR_12);
 } else if (!FUNC_0(VAR_16)) {
  VAR_16 = FUNC_2(VAR_15, VAR_16, VAR_11);
  if (!VAR_16) {
   if (VAR_14->fc_topology == VAR_7) {
    FUNC_1(VAR_15);
    return;
   }
   FUNC_10(VAR_15, VAR_1);
   FUNC_8(VAR_15, VAR_4, VAR_6,
     "0348 NameServer login: node freed\n");
   return;
  }
 }
 VAR_16->nlp_type |= VAR_8;

 FUNC_6(VAR_15, VAR_16, VAR_10);

 if (FUNC_4(VAR_15, VAR_16->nlp_DID, 0)) {
  FUNC_10(VAR_15, VAR_1);
  FUNC_8(VAR_15, VAR_4, VAR_6,
     "0252 Cannot issue NameServer login\n");
  return;
 }

 if (VAR_15->cfg_fdmi_on) {




  VAR_17 = FUNC_3(VAR_15, VAR_2);
  if (!VAR_17) {
   VAR_17 = FUNC_11(VAR_14->nlp_mem_pool,
        VAR_3);
   if (VAR_17) {
    FUNC_5(VAR_15, VAR_17, VAR_2);
    VAR_17->nlp_type |= VAR_8;
   } else
    return;
  }
  if (!FUNC_0(VAR_17))
   VAR_17 = FUNC_2(VAR_15,
           VAR_17,
           VAR_9);

  if (VAR_17) {
   FUNC_6(VAR_15, VAR_17,
        VAR_10);
   FUNC_4(VAR_15, VAR_17->nlp_DID, 0);
  }
 }
}
