
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hwi_controller {struct hwi_context_memory* phwi_ctxt; } ;
struct be_queue_info {scalar_t__ created; } ;
struct hwi_context_memory {struct hwi_async_pdu_context* pasync_ctx; TYPE_2__* be_eq; struct be_queue_info* be_cq; struct be_queue_info be_def_dataq; struct be_queue_info be_def_hdrq; struct be_queue_info* be_wrbq; } ;
struct hwi_async_pdu_context {struct be_queue_info* async_entry; } ;
struct TYPE_3__ {int cxns_per_ctrl; } ;
struct be_ctrl_info {int dummy; } ;
struct beiscsi_hba {int num_cpus; scalar_t__ msix_enabled; TYPE_1__ params; struct hwi_controller* phwi_ctrlr; struct be_ctrl_info ctrl; } ;
struct TYPE_4__ {struct be_queue_info q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct be_ctrl_info*) ;
 int FUNC_1 (struct beiscsi_hba*) ;
 int FUNC_2 (struct be_ctrl_info*,struct be_queue_info*,int ) ;
 int FUNC_3 (struct beiscsi_hba*) ;
 int FUNC_4 (struct be_queue_info*) ;

__attribute__((used)) static void FUNC_5(struct beiscsi_hba *VAR_5)
{
 struct be_queue_info *VAR_6;
 struct be_ctrl_info *VAR_7 = &VAR_5->ctrl;
 struct hwi_controller *VAR_8;
 struct hwi_context_memory *VAR_9;
 struct hwi_async_pdu_context *VAR_10;
 int VAR_11, VAR_12;

 VAR_8 = VAR_5->phwi_ctrlr;
 VAR_9 = VAR_8->phwi_ctxt;
 for (VAR_11 = 0; VAR_11 < VAR_5->params.cxns_per_ctrl; VAR_11++) {
  VAR_6 = &VAR_9->be_wrbq[VAR_11];
  if (VAR_6->created)
   FUNC_2(VAR_7, VAR_6, VAR_4);
 }
 FUNC_4(VAR_9->be_wrbq);
 FUNC_3(VAR_5);

 VAR_6 = &VAR_9->be_def_hdrq;
 if (VAR_6->created)
  FUNC_2(VAR_7, VAR_6, VAR_1);

 VAR_6 = &VAR_9->be_def_dataq;
 if (VAR_6->created)
  FUNC_2(VAR_7, VAR_6, VAR_1);

 FUNC_2(VAR_7, ((void*)0), VAR_3);

 for (VAR_11 = 0; VAR_11 < (VAR_5->num_cpus); VAR_11++) {
  VAR_6 = &VAR_9->be_cq[VAR_11];
  if (VAR_6->created)
   FUNC_2(VAR_7, VAR_6, VAR_0);
 }
 if (VAR_5->msix_enabled)
  VAR_12 = 1;
 else
  VAR_12 = 0;
 for (VAR_11 = 0; VAR_11 < (VAR_5->num_cpus + VAR_12); VAR_11++) {
  VAR_6 = &VAR_9->be_eq[VAR_11].q;
  if (VAR_6->created)
   FUNC_2(VAR_7, VAR_6, VAR_2);
 }
 FUNC_1(VAR_5);

 VAR_10 = VAR_8->phwi_ctxt->pasync_ctx;
 FUNC_4(VAR_10->async_entry);
 FUNC_0(VAR_7);
}
