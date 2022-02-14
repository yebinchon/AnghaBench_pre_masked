
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_8__ {TYPE_5__* hbd; } ;
struct TYPE_7__ {TYPE_1__* mse; } ;
struct TYPE_9__ {TYPE_3__ sli_config_emb1_subsys; TYPE_2__ sli_config_emb0_subsys; } ;
struct lpfc_sli_config_mbox {TYPE_4__ un; } ;
struct lpfc_hba {int dummy; } ;
struct lpfc_dmabuf {scalar_t__ phys; scalar_t__ virt; } ;
typedef enum nemb_type { ____Placeholder_nemb_type } nemb_type ;
struct TYPE_10__ {void* pa_lo; void* pa_hi; } ;
struct TYPE_6__ {void* pa_lo; void* pa_hi; int buf_len; } ;
typedef int MAILBOX_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_5__*) ;
 int VAR_2 ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,size_t,int ,void*,void*) ;
 int VAR_3 ;
 void* FUNC_2 (scalar_t__) ;
 void* FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct lpfc_hba *VAR_4, enum nemb_type VAR_5,
    uint32_t VAR_6, struct lpfc_dmabuf *VAR_7,
    struct lpfc_dmabuf *VAR_8)
{
 struct lpfc_sli_config_mbox *VAR_9;


 VAR_9 = (struct lpfc_sli_config_mbox *)VAR_7->virt;

 if (VAR_5 == VAR_3) {
  if (VAR_6 == 0) {
   VAR_9->un.sli_config_emb0_subsys.
    mse[VAR_6].pa_hi =
    FUNC_2(VAR_7->phys +
          sizeof(MAILBOX_t));
   VAR_9->un.sli_config_emb0_subsys.
    mse[VAR_6].pa_lo =
    FUNC_3(VAR_7->phys +
         sizeof(MAILBOX_t));
   FUNC_1(VAR_4, VAR_0, VAR_1,
     "2943 SLI_CONFIG(mse)[%d], "
     "bufLen:%d, addrHi:x%x, addrLo:x%x\n",
     VAR_6,
     VAR_9->un.sli_config_emb0_subsys.
     mse[VAR_6].buf_len,
     VAR_9->un.sli_config_emb0_subsys.
     mse[VAR_6].pa_hi,
     VAR_9->un.sli_config_emb0_subsys.
     mse[VAR_6].pa_lo);
  } else {
   VAR_9->un.sli_config_emb0_subsys.
    mse[VAR_6].pa_hi =
    FUNC_2(VAR_8->phys);
   VAR_9->un.sli_config_emb0_subsys.
    mse[VAR_6].pa_lo =
    FUNC_3(VAR_8->phys);
   FUNC_1(VAR_4, VAR_0, VAR_1,
     "2944 SLI_CONFIG(mse)[%d], "
     "bufLen:%d, addrHi:x%x, addrLo:x%x\n",
     VAR_6,
     VAR_9->un.sli_config_emb0_subsys.
     mse[VAR_6].buf_len,
     VAR_9->un.sli_config_emb0_subsys.
     mse[VAR_6].pa_hi,
     VAR_9->un.sli_config_emb0_subsys.
     mse[VAR_6].pa_lo);
  }
 } else {
  if (VAR_6 == 0) {
   VAR_9->un.sli_config_emb1_subsys.
    hbd[VAR_6].pa_hi =
    FUNC_2(VAR_7->phys +
          sizeof(MAILBOX_t));
   VAR_9->un.sli_config_emb1_subsys.
    hbd[VAR_6].pa_lo =
    FUNC_3(VAR_7->phys +
         sizeof(MAILBOX_t));
   FUNC_1(VAR_4, VAR_0, VAR_1,
     "3007 SLI_CONFIG(hbd)[%d], "
     "bufLen:%d, addrHi:x%x, addrLo:x%x\n",
    VAR_6,
    FUNC_0(VAR_2,
    &VAR_9->un.
    sli_config_emb1_subsys.hbd[VAR_6]),
    VAR_9->un.sli_config_emb1_subsys.
    hbd[VAR_6].pa_hi,
    VAR_9->un.sli_config_emb1_subsys.
    hbd[VAR_6].pa_lo);

  } else {
   VAR_9->un.sli_config_emb1_subsys.
    hbd[VAR_6].pa_hi =
    FUNC_2(VAR_8->phys);
   VAR_9->un.sli_config_emb1_subsys.
    hbd[VAR_6].pa_lo =
    FUNC_3(VAR_8->phys);
   FUNC_1(VAR_4, VAR_0, VAR_1,
     "3008 SLI_CONFIG(hbd)[%d], "
     "bufLen:%d, addrHi:x%x, addrLo:x%x\n",
    VAR_6,
    FUNC_0(VAR_2,
    &VAR_9->un.
    sli_config_emb1_subsys.hbd[VAR_6]),
    VAR_9->un.sli_config_emb1_subsys.
    hbd[VAR_6].pa_hi,
    VAR_9->un.sli_config_emb1_subsys.
    hbd[VAR_6].pa_lo);
  }
 }
 return;
}
