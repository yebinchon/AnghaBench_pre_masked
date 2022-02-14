
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int portName; int nodeName; } ;
struct TYPE_8__ {int wwn; } ;
struct TYPE_9__ {TYPE_3__ u; } ;
struct TYPE_6__ {int wwn; } ;
struct TYPE_7__ {TYPE_1__ u; } ;
struct lpfc_vport {int vpi; int fc_flag; scalar_t__ port_state; struct fc_vport* fc_vport; TYPE_5__ fc_sparam; TYPE_4__ fc_nodename; TYPE_2__ fc_portname; struct lpfc_hba* phba; } ;
struct lpfc_nodelist {scalar_t__ nlp_state; } ;
struct lpfc_hba {int sli_rev; scalar_t__ link_state; scalar_t__ fc_topology; int link_flag; int pport; int max_vpi; int cfg_enable_npiv; } ;
struct fc_vport {scalar_t__ dd_data; int port_name; int node_name; int dev; struct Scsi_Host* shost; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;


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
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_0 (struct lpfc_nodelist*) ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (struct lpfc_vport*) ;
 int FUNC_2 (struct lpfc_vport*) ;
 int FUNC_3 (struct lpfc_hba*) ;
 struct lpfc_vport* FUNC_4 (struct lpfc_hba*,int,int *) ;
 int FUNC_5 (struct lpfc_vport*) ;
 struct lpfc_nodelist* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct lpfc_hba*,int) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct lpfc_vport*) ;
 int FUNC_11 (struct lpfc_hba*,int ,int ,char*,...) ;
 int FUNC_12 (struct lpfc_vport*,int ,int ,char*) ;
 int FUNC_13 (struct lpfc_vport*) ;
 int FUNC_14 (struct lpfc_vport*) ;
 int FUNC_15 (struct lpfc_vport*) ;
 int FUNC_16 (struct lpfc_hba*,struct lpfc_vport*) ;
 int FUNC_17 (struct lpfc_hba*,int *,char*) ;
 int FUNC_18 (struct lpfc_vport*,int ) ;
 int FUNC_19 (struct lpfc_hba*,struct lpfc_vport*) ;
 int FUNC_20 (int *,int ,int) ;
 int FUNC_21 (int ,int ) ;

int
FUNC_22(struct fc_vport *VAR_21, bool VAR_22)
{
 struct lpfc_nodelist *VAR_23;
 struct Scsi_Host *VAR_24 = VAR_21->shost;
 struct lpfc_vport *VAR_25 = (struct lpfc_vport *) VAR_24->hostdata;
 struct lpfc_hba *VAR_26 = VAR_25->phba;
 struct lpfc_vport *VAR_27 = ((void*)0);
 int VAR_28;
 int VAR_29;
 int VAR_30 = VAR_17;
 int VAR_31;

 if ((VAR_26->sli_rev < 3) || !(VAR_26->cfg_enable_npiv)) {
  FUNC_11(VAR_26, VAR_8, VAR_10,
    "1808 Create VPORT failed: "
    "NPIV is not enabled: SLImode:%d\n",
    VAR_26->sli_rev);
  VAR_30 = VAR_18;
  goto error_out;
 }

 VAR_29 = FUNC_3(VAR_26);
 if (VAR_29 == 0) {
  FUNC_11(VAR_26, VAR_8, VAR_10,
    "1809 Create VPORT failed: "
    "Max VPORTs (%d) exceeded\n",
    VAR_26->max_vpi);
  VAR_30 = VAR_19;
  goto error_out;
 }


 if ((VAR_28 = FUNC_8()) < 0) {
  FUNC_11(VAR_26, VAR_8, VAR_10,
    "1810 Create VPORT failed: Cannot get "
    "instance number\n");
  FUNC_7(VAR_26, VAR_29);
  VAR_30 = VAR_19;
  goto error_out;
 }

 VAR_27 = FUNC_4(VAR_26, VAR_28, &VAR_21->dev);
 if (!VAR_27) {
  FUNC_11(VAR_26, VAR_8, VAR_10,
    "1811 Create VPORT failed: vpi x%x\n", VAR_29);
  FUNC_7(VAR_26, VAR_29);
  VAR_30 = VAR_19;
  goto error_out;
 }

 VAR_27->vpi = VAR_29;
 FUNC_5(VAR_27);

 if ((VAR_31 = FUNC_19(VAR_26, VAR_27))) {
  if (VAR_31 == -VAR_0) {
   FUNC_12(VAR_27, VAR_8, VAR_10,
      "1831 Create VPORT Interrupted.\n");
   VAR_30 = VAR_17;
  } else {
   FUNC_12(VAR_27, VAR_8, VAR_10,
      "1813 Create VPORT failed. "
      "Cannot get sparam\n");
   VAR_30 = VAR_19;
  }
  FUNC_7(VAR_26, VAR_29);
  FUNC_1(VAR_27);
  goto error_out;
 }

 FUNC_21(VAR_21->node_name, VAR_27->fc_nodename.u.wwn);
 FUNC_21(VAR_21->port_name, VAR_27->fc_portname.u.wwn);

 FUNC_20(&VAR_27->fc_sparam.portName, VAR_27->fc_portname.u.wwn, 8);
 FUNC_20(&VAR_27->fc_sparam.nodeName, VAR_27->fc_nodename.u.wwn, 8);

 if (!FUNC_17(VAR_26, &VAR_27->fc_sparam.nodeName, "WWNN") ||
     !FUNC_17(VAR_26, &VAR_27->fc_sparam.portName, "WWPN")) {
  FUNC_12(VAR_27, VAR_8, VAR_10,
     "1821 Create VPORT failed. "
     "Invalid WWN format\n");
  FUNC_7(VAR_26, VAR_29);
  FUNC_1(VAR_27);
  VAR_30 = VAR_18;
  goto error_out;
 }

 if (!FUNC_16(VAR_26, VAR_27)) {
  FUNC_12(VAR_27, VAR_8, VAR_10,
     "1823 Create VPORT failed. "
     "Duplicate WWN on HBA\n");
  FUNC_7(VAR_26, VAR_29);
  FUNC_1(VAR_27);
  VAR_30 = VAR_18;
  goto error_out;
 }


 FUNC_2(VAR_27);

 *(struct lpfc_vport **)VAR_21->dd_data = VAR_27;
 VAR_27->fc_vport = VAR_21;





 if ((VAR_26->sli_rev == VAR_13) &&
     (VAR_25->fc_flag & VAR_1)) {
  VAR_30 = FUNC_15(VAR_27);
  if (VAR_30) {
   FUNC_11(VAR_26, VAR_8, VAR_10,
     "1838 Failed to INIT_VPI on vpi %d "
     "status %d\n", VAR_29, VAR_30);
   VAR_30 = VAR_19;
   FUNC_7(VAR_26, VAR_29);
   goto error_out;
  }
 } else if (VAR_26->sli_rev == VAR_13) {




  VAR_27->fc_flag |= VAR_5;
  FUNC_18(VAR_27, VAR_4);
  VAR_30 = VAR_20;
  goto out;
 }

 if ((VAR_26->link_state < VAR_12) ||
     (VAR_25->port_state < VAR_11) ||
     (VAR_26->fc_topology == VAR_14)) {
  FUNC_18(VAR_27, VAR_4);
  VAR_30 = VAR_20;
  goto out;
 }

 if (VAR_22) {
  FUNC_18(VAR_27, VAR_2);
  VAR_30 = VAR_20;
  goto out;
 }




 VAR_23 = FUNC_6(VAR_26->pport, VAR_7);
 if (VAR_23 && FUNC_0(VAR_23) &&
     VAR_23->nlp_state == VAR_16) {
  if (VAR_26->link_flag & VAR_15) {
   FUNC_13(VAR_27);
   FUNC_10(VAR_27);
  } else {
   FUNC_18(VAR_27, VAR_6);
   FUNC_12(VAR_27, VAR_8, VAR_9,
      "0262 No NPIV Fabric support\n");
  }
 } else {
  FUNC_18(VAR_27, VAR_3);
 }
 VAR_30 = VAR_20;

out:
 FUNC_12(VAR_27, VAR_8, VAR_10,
   "1825 Vport Created.\n");
 FUNC_9(FUNC_14(VAR_27));
error_out:
 return VAR_30;
}
