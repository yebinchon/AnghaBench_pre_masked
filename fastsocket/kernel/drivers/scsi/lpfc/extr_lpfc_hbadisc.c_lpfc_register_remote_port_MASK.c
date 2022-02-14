
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct lpfc_vport {int load_flag; struct lpfc_hba* phba; } ;
struct lpfc_rport_data {struct lpfc_nodelist* pnode; } ;
struct TYPE_8__ {int wwn; } ;
struct TYPE_9__ {TYPE_3__ u; } ;
struct TYPE_6__ {int wwn; } ;
struct TYPE_7__ {TYPE_1__ u; } ;
struct lpfc_nodelist {int nlp_type; int nlp_sid; int nlp_DID; int vport; int nlp_class_sup; int nlp_maxframe; struct fc_rport* rport; int nlp_flag; TYPE_4__ nlp_portname; TYPE_2__ nlp_nodename; } ;
struct lpfc_hba {TYPE_5__* pcidev; } ;
struct fc_rport_identifiers {int roles; int port_id; void* port_name; void* node_name; } ;
struct fc_rport {int scsi_target_id; struct lpfc_rport_data* dd_data; int supported_classes; int maxframe_size; int dev; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_10__ {int dev; } ;


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
 int FUNC_0 (int ,int *,char*) ;
 struct fc_rport* FUNC_1 (struct Scsi_Host*,int ,struct fc_rport_identifiers*) ;
 int FUNC_2 (struct fc_rport*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct lpfc_vport*,int ,char*,int ,int ,int) ;
 struct lpfc_nodelist* FUNC_5 (struct lpfc_nodelist*) ;
 int FUNC_6 (struct lpfc_nodelist*) ;
 int FUNC_7 (int ,int ,int ,char*,int ,struct fc_rport*,int ) ;
 struct Scsi_Host* FUNC_8 (struct lpfc_vport*) ;
 void* FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(struct lpfc_vport *VAR_11, struct lpfc_nodelist *VAR_12)
{
 struct Scsi_Host *VAR_13 = FUNC_8(VAR_11);
 struct fc_rport *VAR_14;
 struct lpfc_rport_data *VAR_15;
 struct fc_rport_identifiers VAR_16;
 struct lpfc_hba *VAR_17 = VAR_11->phba;


 VAR_16.node_name = FUNC_9(VAR_12->nlp_nodename.u.wwn);
 VAR_16.port_name = FUNC_9(VAR_12->nlp_portname.u.wwn);
 VAR_16.port_id = VAR_12->nlp_DID;
 VAR_16.roles = VAR_2;
 if (VAR_12->rport && VAR_12->rport->dd_data &&
     ((struct lpfc_rport_data *) VAR_12->rport->dd_data)->pnode == VAR_12)
  FUNC_6(VAR_12);

 FUNC_4(VAR_11, VAR_7,
  "rport add:       did:x%x flg:x%x type x%x",
  VAR_12->nlp_DID, VAR_12->nlp_flag, VAR_12->nlp_type);


 if (VAR_11->load_flag & VAR_3)
  return;

 VAR_12->rport = VAR_14 = FUNC_1(VAR_13, 0, &VAR_16);
 if (!VAR_14 || !FUNC_3(&VAR_14->dev)) {
  FUNC_0(VAR_5, &VAR_17->pcidev->dev,
      "Warning: fc_remote_port_add failed\n");
  return;
 }


 VAR_14->maxframe_size = VAR_12->nlp_maxframe;
 VAR_14->supported_classes = VAR_12->nlp_class_sup;
 VAR_15 = VAR_14->dd_data;
 VAR_15->pnode = FUNC_5(VAR_12);

 if (VAR_12->nlp_type & VAR_10)
  VAR_16.roles |= VAR_1;
 if (VAR_12->nlp_type & VAR_9)
  VAR_16.roles |= VAR_0;

 if (VAR_16.roles != VAR_2)
  FUNC_2(VAR_14, VAR_16.roles);

 FUNC_7(VAR_12->vport, VAR_4, VAR_6,
    "3183 rport register x%06x, rport %p role x%x\n",
    VAR_12->nlp_DID, VAR_14, VAR_16.roles);

 if ((VAR_14->scsi_target_id != -1) &&
     (VAR_14->scsi_target_id < VAR_8)) {
  VAR_12->nlp_sid = VAR_14->scsi_target_id;
 }
 return;
}
