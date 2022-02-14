
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {int dummy; } ;
struct TYPE_7__ {int link_event; } ;
struct lpfc_sli {int sli_flag; TYPE_2__* ring; TYPE_1__ slistat; } ;
struct lpfc_hba {int link_state; int hbalock; int HAregaddr; int HCregaddr; int mbox_mem_pool; struct lpfc_sli sli; struct lpfc_vport* pport; } ;
struct lpfc_dmabuf {int phys; int virt; } ;
struct TYPE_9__ {struct lpfc_vport* vport; int mbox_cmpl; } ;
struct TYPE_8__ {int flag; } ;
typedef TYPE_3__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int volatile VAR_1 ;
 int volatile VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct lpfc_dmabuf*) ;
 struct lpfc_dmabuf* FUNC_1 (int,int ) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct lpfc_hba*) ;
 int FUNC_4 (struct lpfc_hba*,int ,int *) ;
 int FUNC_5 (struct lpfc_hba*,int ,int ) ;
 int VAR_11 ;
 int FUNC_6 (struct lpfc_hba*,int ,int ,char*,int) ;
 int FUNC_7 (struct lpfc_hba*,TYPE_3__*,struct lpfc_dmabuf*) ;
 int FUNC_8 (struct lpfc_hba*,TYPE_3__*,int ) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_3__*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int volatile,int ) ;

void
FUNC_15(struct lpfc_hba *VAR_12)
{
 struct lpfc_vport *VAR_13 = VAR_12->pport;
 struct lpfc_sli *VAR_14 = &VAR_12->sli;
 LPFC_MBOXQ_t *VAR_15;
 volatile uint32_t VAR_16;
 struct lpfc_dmabuf *VAR_17;
 int VAR_18 = 0;

 VAR_15 = (LPFC_MBOXQ_t *)FUNC_9(VAR_12->mbox_mem_pool, VAR_0);
 if (!VAR_15) {
  VAR_18 = 1;
  goto lpfc_handle_latt_err_exit;
 }

 VAR_17 = FUNC_1(sizeof(struct lpfc_dmabuf), VAR_0);
 if (!VAR_17) {
  VAR_18 = 2;
  goto lpfc_handle_latt_free_pmb;
 }

 VAR_17->virt = FUNC_4(VAR_12, 0, &VAR_17->phys);
 if (!VAR_17->virt) {
  VAR_18 = 3;
  goto lpfc_handle_latt_free_mp;
 }


 FUNC_2(VAR_12);

 VAR_14->slistat.link_event++;
 FUNC_7(VAR_12, VAR_15, VAR_17);
 VAR_15->mbox_cmpl = VAR_11;
 VAR_15->vport = VAR_13;

 VAR_12->sli.ring[VAR_5].flag |= VAR_8;
 VAR_18 = FUNC_8 (VAR_12, VAR_15, VAR_10);
 if (VAR_18 == VAR_9) {
  VAR_18 = 4;
  goto lpfc_handle_latt_free_mbuf;
 }


 FUNC_12(&VAR_12->hbalock);
 FUNC_14(VAR_1, VAR_12->HAregaddr);
 FUNC_11(VAR_12->HAregaddr);
 FUNC_13(&VAR_12->hbalock);

 return;

lpfc_handle_latt_free_mbuf:
 VAR_12->sli.ring[VAR_5].flag &= ~VAR_8;
 FUNC_5(VAR_12, VAR_17->virt, VAR_17->phys);
lpfc_handle_latt_free_mp:
 FUNC_0(VAR_17);
lpfc_handle_latt_free_pmb:
 FUNC_10(VAR_15, VAR_12->mbox_mem_pool);
lpfc_handle_latt_err_exit:

 FUNC_12(&VAR_12->hbalock);
 VAR_14->sli_flag |= VAR_7;
 VAR_16 = FUNC_11(VAR_12->HCregaddr);
 VAR_16 |= VAR_2;
 FUNC_14(VAR_16, VAR_12->HCregaddr);
 FUNC_11(VAR_12->HCregaddr);


 FUNC_14(VAR_1, VAR_12->HAregaddr);
 FUNC_11(VAR_12->HAregaddr);
 FUNC_13(&VAR_12->hbalock);
 FUNC_3(VAR_12);
 VAR_12->link_state = VAR_6;

 FUNC_6(VAR_12, VAR_3, VAR_4,
       "0300 LATT: Cannot issue READ_LA: Data:%d\n", VAR_18);

 return;
}
