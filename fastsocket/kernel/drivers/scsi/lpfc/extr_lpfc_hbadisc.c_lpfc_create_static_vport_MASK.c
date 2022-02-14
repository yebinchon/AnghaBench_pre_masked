
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vport_id ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct static_vport_info {int phys; int virt; TYPE_6__* vport_list; int rev; int signature; } ;
struct lpfc_vport {int vport_flag; } ;
struct lpfc_hba {scalar_t__ sli_rev; int mbox_mem_pool; int pport; } ;
struct lpfc_dmabuf {int phys; int virt; TYPE_6__* vport_list; int rev; int signature; } ;
struct TYPE_8__ {int* mb_words; } ;
struct TYPE_9__ {TYPE_1__ un; } ;
struct TYPE_11__ {int word_cnt; } ;
struct TYPE_12__ {TYPE_4__ varDmp; } ;
struct TYPE_14__ {TYPE_5__ un; scalar_t__ mbxStatus; } ;
struct TYPE_10__ {TYPE_2__ mqe; TYPE_7__ mb; } ;
struct fc_vport_identifiers {int disable; scalar_t__ context1; int vport_type; int roles; void* node_name; void* port_name; TYPE_3__ u; int vport; } ;
struct fc_vport {scalar_t__ dd_data; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_13__ {int wwnn; int wwpn; } ;
typedef TYPE_7__ MAILBOX_t ;
typedef struct fc_vport_identifiers LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct fc_vport* FUNC_0 (struct Scsi_Host*,int ,struct fc_vport_identifiers*) ;
 int FUNC_1 (struct static_vport_info*) ;
 struct static_vport_info* FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct lpfc_hba*,struct fc_vport_identifiers*,int) ;
 int FUNC_5 (struct lpfc_hba*,int ,int ) ;
 int FUNC_6 (struct lpfc_hba*,int ,int ,char*,...) ;
 struct Scsi_Host* FUNC_7 (int ) ;
 int FUNC_8 (struct lpfc_hba*,struct fc_vport_identifiers*,int ) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (int *,int ,int) ;
 struct fc_vport_identifiers* FUNC_11 (int ,int ) ;
 int FUNC_12 (struct fc_vport_identifiers*,int ) ;
 int FUNC_13 (struct fc_vport_identifiers*,int ,int) ;
 void* FUNC_14 (int ) ;

void
FUNC_15(struct lpfc_hba *VAR_16)
{
 LPFC_MBOXQ_t *VAR_17 = ((void*)0);
 MAILBOX_t *VAR_18;
 struct static_vport_info *VAR_19;
 int VAR_20 = 0, VAR_21;
 struct fc_vport_identifiers VAR_22;
 struct fc_vport *VAR_23;
 struct Scsi_Host *VAR_24;
 struct lpfc_vport *VAR_25;
 uint16_t VAR_26 = 0;
 uint8_t *VAR_27;
 struct lpfc_dmabuf *VAR_28;
 uint32_t VAR_29 = 0;

 VAR_17 = FUNC_11(VAR_16->mbox_mem_pool, VAR_3);
 if (!VAR_17) {
  FUNC_6(VAR_16, VAR_4, VAR_6,
    "0542 lpfc_create_static_vport failed to"
    " allocate mailbox memory\n");
  return;
 }
 FUNC_13(VAR_17, 0, sizeof(LPFC_MBOXQ_t));
 VAR_18 = &VAR_17->u.mb;

 VAR_19 = FUNC_2(sizeof(struct static_vport_info), VAR_3);
 if (!VAR_19) {
  FUNC_6(VAR_16, VAR_4, VAR_6,
    "0543 lpfc_create_static_vport failed to"
    " allocate vport_info\n");
  FUNC_12(VAR_17, VAR_16->mbox_mem_pool);
  return;
 }

 VAR_27 = (uint8_t *) VAR_19;
 do {

  if (VAR_17->context1) {
   VAR_28 = (struct lpfc_dmabuf *)VAR_17->context1;
   FUNC_5(VAR_16, VAR_28->virt, VAR_28->phys);
   FUNC_1(VAR_28);
  }
  if (FUNC_4(VAR_16, VAR_17, VAR_26))
   goto out;

  VAR_17->vport = VAR_16->pport;
  VAR_20 = FUNC_8(VAR_16, VAR_17,
       VAR_7);

  if ((VAR_20 != VAR_10) || VAR_18->mbxStatus) {
   FUNC_6(VAR_16, VAR_5, VAR_6,
    "0544 lpfc_create_static_vport failed to"
    " issue dump mailbox command ret 0x%x "
    "status 0x%x\n",
    VAR_20, VAR_18->mbxStatus);
   goto out;
  }

  if (VAR_16->sli_rev == VAR_8) {
   VAR_29 = VAR_17->u.mqe.un.mb_words[5];
   VAR_28 = (struct lpfc_dmabuf *)VAR_17->context1;
   if (VAR_29 > sizeof(struct static_vport_info) -
     VAR_26)
    VAR_29 = sizeof(struct static_vport_info)
     - VAR_26;
   FUNC_10(VAR_27 + VAR_26, VAR_28->virt, VAR_29);
   VAR_26 += VAR_29;
  } else {
   if (VAR_18->un.varDmp.word_cnt >
    sizeof(struct static_vport_info) - VAR_26)
    VAR_18->un.varDmp.word_cnt =
     sizeof(struct static_vport_info)
      - VAR_26;
   VAR_29 = VAR_18->un.varDmp.word_cnt;
   FUNC_9(((uint8_t *)VAR_18) + VAR_0,
    VAR_27 + VAR_26,
    VAR_29);

   VAR_26 += VAR_29;
  }

 } while (VAR_29 &&
  VAR_26 < sizeof(struct static_vport_info));


 if ((FUNC_3(VAR_19->signature) != VAR_15) ||
  ((FUNC_3(VAR_19->rev) & VAR_14)
   != VAR_13)) {
  FUNC_6(VAR_16, VAR_4, VAR_6,
   "0545 lpfc_create_static_vport bad"
   " information header 0x%x 0x%x\n",
   FUNC_3(VAR_19->signature),
   FUNC_3(VAR_19->rev) & VAR_14);

  goto out;
 }

 VAR_24 = FUNC_7(VAR_16->pport);

 for (VAR_21 = 0; VAR_21 < VAR_9; VAR_21++) {
  FUNC_13(&VAR_22, 0, sizeof(VAR_22));
  VAR_22.port_name = FUNC_14(VAR_19->vport_list[VAR_21].wwpn);
  VAR_22.node_name = FUNC_14(VAR_19->vport_list[VAR_21].wwnn);
  if (!VAR_22.port_name || !VAR_22.node_name)
   continue;

  VAR_22.roles = VAR_2;
  VAR_22.vport_type = VAR_1;
  VAR_22.disable = 0;
  VAR_23 = FUNC_0(VAR_24, 0, &VAR_22);

  if (!VAR_23) {
   FUNC_6(VAR_16, VAR_5, VAR_6,
    "0546 lpfc_create_static_vport failed to"
    " create vport\n");
   continue;
  }

  VAR_25 = *(struct lpfc_vport **)VAR_23->dd_data;
  VAR_25->vport_flag |= VAR_12;
 }

out:
 FUNC_1(VAR_19);
 if (VAR_20 != VAR_11) {
  if (VAR_17->context1) {
   VAR_28 = (struct lpfc_dmabuf *)VAR_17->context1;
   FUNC_5(VAR_16, VAR_28->virt, VAR_28->phys);
   FUNC_1(VAR_28);
  }
  FUNC_12(VAR_17, VAR_16->mbox_mem_pool);
 }
 return;
}
