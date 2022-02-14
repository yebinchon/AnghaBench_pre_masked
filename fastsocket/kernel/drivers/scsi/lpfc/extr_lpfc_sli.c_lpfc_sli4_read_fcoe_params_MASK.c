
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_12__ {scalar_t__* mb_words; } ;
struct lpfc_mqe {TYPE_4__ un; } ;
struct lpfc_hba {int mbox_mem_pool; int * fc_map; scalar_t__ valid_vlan; } ;
struct lpfc_dmabuf {int phys; int virt; } ;
struct TYPE_11__ {int trailer; int mcqe_tag1; int mcqe_tag0; int word0; } ;
struct TYPE_9__ {struct lpfc_mqe mqe; } ;
struct TYPE_13__ {TYPE_3__ mcqe; TYPE_2__* vport; scalar_t__ context1; TYPE_1__ u; } ;
struct TYPE_10__ {int vpi; } ;
typedef TYPE_5__ LPFC_MBOXQ_t ;


 scalar_t__ VAR_0 ;
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
 int FUNC_0 (int ,struct lpfc_mqe*) ;
 int FUNC_1 (struct lpfc_dmabuf*) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct lpfc_hba*,int ,scalar_t__) ;
 int FUNC_4 (struct lpfc_hba*,int ,int,char*,int ,int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct lpfc_hba*,TYPE_5__*) ;
 int FUNC_6 (struct lpfc_hba*,TYPE_5__*,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_5__*,int ) ;

__attribute__((used)) static int
FUNC_9(struct lpfc_hba *VAR_13)
{
 LPFC_MBOXQ_t *VAR_14;
 struct lpfc_dmabuf *VAR_15;
 struct lpfc_mqe *VAR_16;
 uint32_t VAR_17;
 int VAR_18;


 VAR_13->valid_vlan = 0;
 VAR_13->fc_map[0] = VAR_7;
 VAR_13->fc_map[1] = VAR_8;
 VAR_13->fc_map[2] = VAR_9;

 VAR_14 = (LPFC_MBOXQ_t *)FUNC_7(VAR_13->mbox_mem_pool, VAR_3);
 if (!VAR_14)
  return -VAR_2;

 VAR_16 = &VAR_14->u.mqe;
 if (FUNC_5(VAR_13, VAR_14)) {
  VAR_18 = -VAR_2;
  goto out_free_mboxq;
 }

 VAR_15 = (struct lpfc_dmabuf *) VAR_14->context1;
 VAR_18 = FUNC_6(VAR_13, VAR_14, VAR_10);

 FUNC_4(VAR_13, VAR_4, VAR_5 | VAR_6,
   "(%d):2571 Mailbox cmd x%x Status x%x "
   "Data: x%x x%x x%x x%x x%x x%x x%x x%x x%x "
   "x%x x%x x%x x%x x%x x%x x%x x%x x%x "
   "CQ: x%x x%x x%x x%x\n",
   VAR_14->vport ? VAR_14->vport->vpi : 0,
   FUNC_0(VAR_11, VAR_16),
   FUNC_0(VAR_12, VAR_16),
   VAR_16->un.mb_words[0], VAR_16->un.mb_words[1],
   VAR_16->un.mb_words[2], VAR_16->un.mb_words[3],
   VAR_16->un.mb_words[4], VAR_16->un.mb_words[5],
   VAR_16->un.mb_words[6], VAR_16->un.mb_words[7],
   VAR_16->un.mb_words[8], VAR_16->un.mb_words[9],
   VAR_16->un.mb_words[10], VAR_16->un.mb_words[11],
   VAR_16->un.mb_words[12], VAR_16->un.mb_words[13],
   VAR_16->un.mb_words[14], VAR_16->un.mb_words[15],
   VAR_16->un.mb_words[16], VAR_16->un.mb_words[50],
   VAR_14->mcqe.word0,
   VAR_14->mcqe.mcqe_tag0, VAR_14->mcqe.mcqe_tag1,
   VAR_14->mcqe.trailer);

 if (VAR_18) {
  FUNC_2(VAR_13, VAR_15->virt, VAR_15->phys);
  FUNC_1(VAR_15);
  VAR_18 = -VAR_1;
  goto out_free_mboxq;
 }
 VAR_17 = VAR_16->un.mb_words[5];
 if (VAR_17 > VAR_0) {
  FUNC_2(VAR_13, VAR_15->virt, VAR_15->phys);
  FUNC_1(VAR_15);
  VAR_18 = -VAR_1;
  goto out_free_mboxq;
 }

 FUNC_3(VAR_13, VAR_15->virt, VAR_17);
 FUNC_2(VAR_13, VAR_15->virt, VAR_15->phys);
 FUNC_1(VAR_15);
 VAR_18 = 0;

out_free_mboxq:
 FUNC_8(VAR_14, VAR_13->mbox_mem_pool);
 return VAR_18;
}
