
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {scalar_t__ port_type; int vport_flag; int load_flag; scalar_t__ port_state; int vpi_state; int unreg_vpi_cmpl; int listentry; scalar_t__ work_port_events; int vpi; struct lpfc_hba* phba; scalar_t__ ct_flags; scalar_t__ cfg_enable_da_id; } ;
struct lpfc_nodelist {scalar_t__ nlp_state; } ;
struct lpfc_hba {int fc_ratov; scalar_t__ link_state; scalar_t__ fc_topology; int hbalock; struct lpfc_vport* pport; int ndlp_lock; int nlp_mem_pool; } ;
struct fc_vport {scalar_t__ dd_data; scalar_t__ shost; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 scalar_t__ FUNC_1 (struct lpfc_nodelist*) ;
 int FUNC_2 (struct lpfc_nodelist*) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct lpfc_vport*) ;
 int FUNC_6 (struct lpfc_vport*) ;
 int FUNC_7 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 int FUNC_8 (struct lpfc_vport*) ;
 struct lpfc_nodelist* FUNC_9 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 struct lpfc_nodelist* FUNC_10 (struct lpfc_vport*,int ) ;
 int FUNC_11 (struct lpfc_vport*) ;
 int FUNC_12 (struct lpfc_hba*,int ) ;
 int FUNC_13 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 scalar_t__ FUNC_14 (struct lpfc_vport*) ;
 int FUNC_15 (struct lpfc_nodelist*) ;
 int FUNC_16 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_17 (struct lpfc_nodelist*) ;
 int FUNC_18 (struct lpfc_vport*,int ,int ,int ) ;
 int FUNC_19 (struct lpfc_hba*,int ,int ,char*) ;
 int FUNC_20 (struct lpfc_vport*,int ,int ,char*) ;
 int FUNC_21 (struct lpfc_vport*) ;
 int FUNC_22 (struct lpfc_vport*) ;
 int FUNC_23 (struct lpfc_vport*) ;
 int FUNC_24 (struct lpfc_vport*) ;
 int FUNC_25 (struct lpfc_vport*) ;
 struct lpfc_nodelist* FUNC_26 (int ,int ) ;
 long FUNC_27 (int) ;
 int FUNC_28 (int) ;
 long FUNC_29 (long) ;
 int FUNC_30 (struct Scsi_Host*) ;
 int FUNC_31 (struct Scsi_Host*) ;
 int FUNC_32 (int ) ;
 int FUNC_33 (int *) ;
 int FUNC_34 (int *) ;

int
FUNC_35(struct fc_vport *VAR_21)
{
 struct lpfc_nodelist *VAR_22 = ((void*)0);
 struct Scsi_Host *VAR_23 = (struct Scsi_Host *) VAR_21->shost;
 struct lpfc_vport *VAR_24 = *(struct lpfc_vport **)VAR_21->dd_data;
 struct lpfc_hba *VAR_25 = VAR_24->phba;
 long VAR_26;
 bool VAR_27 = 0;

 if (VAR_24->port_type == VAR_8) {
  FUNC_20(VAR_24, VAR_4, VAR_6,
     "1812 vport_delete failed: Cannot delete "
     "physical host\n");
  return VAR_18;
 }


 if ((VAR_24->vport_flag & VAR_17) &&
  !(VAR_25->pport->load_flag & VAR_1)) {
  FUNC_20(VAR_24, VAR_4, VAR_6,
     "1837 vport_delete failed: Cannot delete "
     "static vport.\n");
  return VAR_18;
 }
 FUNC_33(&VAR_25->hbalock);
 VAR_24->load_flag |= VAR_1;
 FUNC_34(&VAR_25->hbalock);




 if (!(VAR_25->pport->load_flag & VAR_1)) {
  int VAR_28 = 0;
  while (VAR_28 < ((VAR_25->fc_ratov * 3) + 3) &&
         VAR_24->port_state > VAR_11 &&
         VAR_24->port_state < VAR_12) {
   VAR_28++;
   FUNC_28(1000);
  }
  if (VAR_24->port_state > VAR_11 &&
      VAR_24->port_state < VAR_12)
   return -VAR_0;
 }
 if (!FUNC_30(VAR_23))
  return VAR_19;
 if (!FUNC_30(VAR_23)) {
  FUNC_31(VAR_23);
  return VAR_19;
 }
 FUNC_11(VAR_24);

 FUNC_6(VAR_24);







 VAR_22 = FUNC_10(VAR_24, VAR_15);
 if (VAR_22 && FUNC_1(VAR_22)) {
  FUNC_15(VAR_22);
  VAR_27 = 1;
 }


 FUNC_3(FUNC_21(VAR_24));
 FUNC_32(FUNC_21(VAR_24));

 VAR_22 = FUNC_10(VAR_25->pport, VAR_2);





 if (VAR_25->pport->load_flag & VAR_1) {
  if (VAR_22 && FUNC_1(VAR_22) &&
      VAR_22->nlp_state == VAR_13 &&
      VAR_25->link_state >= VAR_7) {

   VAR_22 = FUNC_10(VAR_24, VAR_2);
   if (!VAR_22)
    goto skip_logo;
   else if (!FUNC_1(VAR_22)) {
    VAR_22 = FUNC_9(VAR_24, VAR_22,
       VAR_14);
    if (!VAR_22)
     goto skip_logo;
   }

   FUNC_7(VAR_24, VAR_22);


   FUNC_33(&VAR_25->ndlp_lock);
   FUNC_2(VAR_22);
   FUNC_34(&VAR_25->ndlp_lock);

   FUNC_17(VAR_22);
  }
  goto skip_logo;
 }


 if (VAR_22 && FUNC_1(VAR_22) &&
     VAR_22->nlp_state == VAR_13 &&
     VAR_25->link_state >= VAR_7 &&
     VAR_25->fc_topology != VAR_9) {
  if (VAR_24->cfg_enable_da_id) {
   VAR_26 = FUNC_27(VAR_25->fc_ratov * 2000);
   if (!FUNC_18(VAR_24, VAR_16, 0, 0))
    while (VAR_24->ct_flags && VAR_26)
     VAR_26 = FUNC_29(VAR_26);
   else
    FUNC_19(VAR_24->phba, VAR_5,
      VAR_6,
      "1829 CT command failed to "
      "delete objects on fabric\n");
  }

  VAR_22 = FUNC_10(VAR_24, VAR_2);
  if (!VAR_22) {

   VAR_22 = FUNC_26(VAR_25->nlp_mem_pool, VAR_3);
   if (!VAR_22)
    goto skip_logo;
   FUNC_16(VAR_24, VAR_22, VAR_2);

   FUNC_2(VAR_22);
  } else {
   if (!FUNC_1(VAR_22)) {
    VAR_22 = FUNC_9(VAR_24, VAR_22,
      VAR_14);
    if (!VAR_22)
     goto skip_logo;
   }


   FUNC_7(VAR_24, VAR_22);
   FUNC_33(&VAR_25->ndlp_lock);
   if (!FUNC_0(VAR_22))

    FUNC_2(VAR_22);
   else {

    FUNC_34(&VAR_25->ndlp_lock);
    goto skip_logo;
   }
   FUNC_34(&VAR_25->ndlp_lock);
  }






  if (!(VAR_24->vpi_state & VAR_10)) {
   FUNC_17(VAR_22);
   goto skip_logo;
  }

  VAR_24->unreg_vpi_cmpl = VAR_19;
  VAR_26 = FUNC_27(VAR_25->fc_ratov * 2000);
  if (!FUNC_13(VAR_24, VAR_22))
   while (VAR_24->unreg_vpi_cmpl == VAR_19 && VAR_26)
    VAR_26 = FUNC_29(VAR_26);
 }

 if (!(VAR_25->pport->load_flag & VAR_1))
  FUNC_8(VAR_24);

skip_logo:





 if (VAR_27) {
  VAR_22 = FUNC_10(VAR_24, VAR_15);
  FUNC_17(VAR_22);
 }

 FUNC_5(VAR_24);
 FUNC_22(VAR_24);

 FUNC_23(VAR_24);

 if (!(VAR_25->pport->load_flag & VAR_1)) {
  FUNC_24(VAR_24);
  FUNC_25(VAR_24);




  if (FUNC_14(VAR_24))
   FUNC_31(VAR_23);
 } else
  FUNC_31(VAR_23);

 FUNC_12(VAR_25, VAR_24->vpi);
 VAR_24->work_port_events = 0;
 FUNC_33(&VAR_25->hbalock);
 FUNC_4(&VAR_24->listentry);
 FUNC_34(&VAR_25->hbalock);
 FUNC_20(VAR_24, VAR_4, VAR_6,
    "1828 Vport Deleted.\n");
 FUNC_31(VAR_23);
 return VAR_20;
}
