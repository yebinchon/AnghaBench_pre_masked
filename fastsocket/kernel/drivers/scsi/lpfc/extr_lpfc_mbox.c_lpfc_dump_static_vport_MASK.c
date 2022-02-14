
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct static_vport_info {int dummy; } ;
struct lpfc_hba {scalar_t__ sli_rev; } ;
struct lpfc_dmabuf {int phys; int list; TYPE_5__* virt; } ;
struct TYPE_10__ {int cv; int word_cnt; int sli4_length; int region_id; int entry_index; int type; } ;
struct TYPE_11__ {TYPE_2__ varDmp; int * varWords; } ;
struct TYPE_12__ {TYPE_3__ un; int mbxOwner; int mbxCommand; } ;
struct TYPE_9__ {TYPE_4__ mb; } ;
struct TYPE_13__ {int * context1; TYPE_1__ u; } ;
typedef TYPE_4__ MAILBOX_t ;
typedef TYPE_5__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct lpfc_dmabuf*) ;
 struct lpfc_dmabuf* FUNC_2 (int,int ) ;
 TYPE_5__* FUNC_3 (struct lpfc_hba*,int ,int *) ;
 int FUNC_4 (struct lpfc_hba*,int ,int ,char*) ;
 int FUNC_5 (TYPE_5__*,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

int
FUNC_8(struct lpfc_hba *VAR_10, LPFC_MBOXQ_t *VAR_11,
  uint16_t VAR_12)
{
 MAILBOX_t *VAR_13;
 struct lpfc_dmabuf *VAR_14;

 VAR_13 = &VAR_11->u.mb;


 FUNC_5(VAR_11, 0, sizeof(LPFC_MBOXQ_t));
 VAR_13->mbxCommand = VAR_8;
 VAR_13->un.varDmp.type = VAR_0;
 VAR_13->un.varDmp.entry_index = VAR_12;
 VAR_13->un.varDmp.region_id = VAR_1;
 VAR_13->mbxOwner = VAR_9;


 if (VAR_10->sli_rev != VAR_7) {
  VAR_13->un.varDmp.cv = 1;
  VAR_13->un.varDmp.word_cnt = VAR_2/sizeof(uint32_t);
  return 0;
 }


 VAR_14 = FUNC_2(sizeof(struct lpfc_dmabuf), VAR_3);
 if (VAR_14)
  VAR_14->virt = FUNC_3(VAR_10, 0, &VAR_14->phys);

 if (!VAR_14 || !VAR_14->virt) {
  FUNC_1(VAR_14);
  FUNC_4(VAR_10, VAR_4, VAR_5,
   "2605 lpfc_dump_static_vport: memory"
   " allocation failed\n");
  return 1;
 }
 FUNC_5(VAR_14->virt, 0, VAR_6);
 FUNC_0(&VAR_14->list);

 VAR_11->context1 = (uint8_t *)VAR_14;
 VAR_13->un.varWords[3] = FUNC_7(VAR_14->phys);
 VAR_13->un.varWords[4] = FUNC_6(VAR_14->phys);
 VAR_13->un.varDmp.sli4_length = sizeof(struct static_vport_info);

 return 0;
}
