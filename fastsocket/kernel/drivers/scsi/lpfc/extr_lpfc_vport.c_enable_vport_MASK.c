
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int fc_flag; int load_flag; struct lpfc_hba* phba; } ;
struct lpfc_nodelist {scalar_t__ nlp_state; } ;
struct lpfc_hba {scalar_t__ link_state; scalar_t__ fc_topology; int link_flag; int pport; } ;
struct fc_vport {scalar_t__ dd_data; } ;
struct Scsi_Host {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (struct lpfc_nodelist*) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 struct lpfc_nodelist* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct lpfc_vport*) ;
 int FUNC_3 (struct lpfc_vport*,int ,int ,char*) ;
 int FUNC_4 (struct lpfc_vport*) ;
 struct Scsi_Host* FUNC_5 (struct lpfc_vport*) ;
 int FUNC_6 (struct lpfc_vport*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(struct fc_vport *VAR_14)
{
 struct lpfc_vport *VAR_15 = *(struct lpfc_vport **)VAR_14->dd_data;
 struct lpfc_hba *VAR_16 = VAR_15->phba;
 struct lpfc_nodelist *VAR_17 = ((void*)0);
 struct Scsi_Host *VAR_18 = FUNC_5(VAR_15);

 if ((VAR_16->link_state < VAR_9) ||
     (VAR_16->fc_topology == VAR_10)) {
  FUNC_6(VAR_15, VAR_2);
  return VAR_13;
 }

 FUNC_7(VAR_18->host_lock);
 VAR_15->load_flag |= VAR_0;
 VAR_15->fc_flag |= VAR_3;
 FUNC_8(VAR_18->host_lock);




 VAR_17 = FUNC_1(VAR_16->pport, VAR_5);
 if (VAR_17 && FUNC_0(VAR_17)
     && VAR_17->nlp_state == VAR_12) {
  if (VAR_16->link_flag & VAR_11) {
   FUNC_4(VAR_15);
   FUNC_2(VAR_15);
  } else {
   FUNC_6(VAR_15, VAR_4);
   FUNC_3(VAR_15, VAR_6, VAR_7,
      "0264 No NPIV Fabric support\n");
  }
 } else {
  FUNC_6(VAR_15, VAR_1);
 }
 FUNC_3(VAR_15, VAR_6, VAR_8,
    "1827 Vport Enabled.\n");
 return VAR_13;
}
