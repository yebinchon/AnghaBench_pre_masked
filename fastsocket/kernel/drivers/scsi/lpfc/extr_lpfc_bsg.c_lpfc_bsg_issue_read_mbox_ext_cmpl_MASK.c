
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int numBuf; int state; } ;
struct lpfc_hba {int mbox_mem_pool; TYPE_1__ mbox_ext_buf_ctx; } ;
struct fc_bsg_job {int (* job_done ) (struct fc_bsg_job*) ;} ;
struct TYPE_9__ {scalar_t__ mbxStatus; } ;
struct TYPE_10__ {TYPE_2__ mb; } ;
struct TYPE_11__ {TYPE_3__ u; } ;
typedef TYPE_4__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct fc_bsg_job* FUNC_0 (struct lpfc_hba*,TYPE_4__*) ;
 int FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ,char*,int ,scalar_t__) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (struct fc_bsg_job*) ;

__attribute__((used)) static void
FUNC_5(struct lpfc_hba *VAR_3, LPFC_MBOXQ_t *VAR_4)
{
 struct fc_bsg_job *VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_4);


 if (!VAR_5)
  VAR_4->u.mb.mbxStatus = VAR_2;

 FUNC_2(VAR_3, VAR_0, VAR_1,
   "2939 SLI_CONFIG ext-buffer rd maibox command "
   "complete, ctxState:x%x, mbxStatus:x%x\n",
   VAR_3->mbox_ext_buf_ctx.state, VAR_4->u.mb.mbxStatus);

 if (VAR_4->u.mb.mbxStatus || VAR_3->mbox_ext_buf_ctx.numBuf == 1)
  FUNC_1(VAR_3);


 FUNC_3(VAR_4, VAR_3->mbox_mem_pool);


 if (VAR_5)
  VAR_5->job_done(VAR_5);

 return;
}
