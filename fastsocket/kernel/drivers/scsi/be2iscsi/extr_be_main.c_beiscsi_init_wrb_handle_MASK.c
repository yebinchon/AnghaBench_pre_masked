
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wrb_handle {unsigned int wrb_index; struct wrb_handle* pwrb; } ;
struct iscsi_wrb {unsigned int wrb_index; struct iscsi_wrb* pwrb; } ;
struct hwi_wrb_context {struct wrb_handle** pwrb_handle_basestd; struct wrb_handle** pwrb_handle_base; scalar_t__ wrb_handles_available; scalar_t__ free_index; scalar_t__ alloc_index; } ;
struct hwi_controller {struct hwi_wrb_context* wrb_context; struct hwi_context_memory* phwi_ctxt; } ;
struct hwi_context_memory {void* be_wrbq; } ;
struct TYPE_6__ {unsigned int cxns_per_ctrl; int wrbs_per_cxn; } ;
struct TYPE_4__ {int iscsi_cid_count; } ;
struct beiscsi_hba {TYPE_3__ params; TYPE_1__ fw_config; struct hwi_controller* phwi_ctrlr; struct be_mem_descriptor* init_mem; } ;
struct be_queue_info {int dummy; } ;
struct be_mem_descriptor {TYPE_2__* mem_array; } ;
struct TYPE_5__ {int size; struct wrb_handle* virtual_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct beiscsi_hba*,int ,int ,char*) ;
 int FUNC_1 (struct wrb_handle**) ;
 void* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct beiscsi_hba *VAR_6)
{
 struct be_mem_descriptor *VAR_7, *VAR_8;
 struct hwi_context_memory *VAR_9;
 struct wrb_handle *VAR_10 = ((void*)0);
 struct hwi_controller *VAR_11;
 struct hwi_wrb_context *VAR_12;
 struct iscsi_wrb *VAR_13 = ((void*)0);
 unsigned int VAR_14 = 0;
 unsigned int VAR_15 = 0, VAR_16, VAR_17 = 0, VAR_18;

 VAR_7 = VAR_6->init_mem;
 VAR_7 += VAR_4;

 VAR_8 = VAR_6->init_mem;
 VAR_8 += VAR_3;
 VAR_11 = VAR_6->phwi_ctrlr;


 VAR_9 = VAR_11->phwi_ctxt;
 VAR_9->be_wrbq = FUNC_2(sizeof(struct be_queue_info) *
         VAR_6->fw_config.iscsi_cid_count,
         VAR_2);
 if (!VAR_9->be_wrbq) {
  FUNC_0(VAR_6, VAR_5, VAR_0,
       "BM_%d : WRBQ Mem Alloc Failed\n");
  return -VAR_1;
 }

 for (VAR_18 = 0; VAR_18 < VAR_6->params.cxns_per_ctrl; VAR_18++) {
  VAR_12 = &VAR_11->wrb_context[VAR_18];
  VAR_12->pwrb_handle_base =
    FUNC_2(sizeof(struct wrb_handle *) *
     VAR_6->params.wrbs_per_cxn, VAR_2);
  if (!VAR_12->pwrb_handle_base) {
   FUNC_0(VAR_6, VAR_5, VAR_0,
        "BM_%d : Mem Alloc Failed. Failing to load\n");
   goto init_wrb_hndl_failed;
  }
  VAR_12->pwrb_handle_basestd =
    FUNC_2(sizeof(struct wrb_handle *) *
     VAR_6->params.wrbs_per_cxn, VAR_2);
  if (!VAR_12->pwrb_handle_basestd) {
   FUNC_0(VAR_6, VAR_5, VAR_0,
        "BM_%d : Mem Alloc Failed. Failing to load\n");
   goto init_wrb_hndl_failed;
  }
  if (!VAR_14) {
   VAR_10 =
    VAR_7->mem_array[VAR_17].virtual_address;
   VAR_14 = ((VAR_7->mem_array[VAR_17].size) /
     ((sizeof(struct wrb_handle)) *
      VAR_6->params.wrbs_per_cxn));
   VAR_17++;
  }
  VAR_12->alloc_index = 0;
  VAR_12->wrb_handles_available = 0;
  VAR_12->free_index = 0;

  if (VAR_14) {
   for (VAR_16 = 0; VAR_16 < VAR_6->params.wrbs_per_cxn; VAR_16++) {
    VAR_12->pwrb_handle_base[VAR_16] = VAR_10;
    VAR_12->pwrb_handle_basestd[VAR_16] =
        VAR_10;
    VAR_12->wrb_handles_available++;
    VAR_10->wrb_index = VAR_16;
    VAR_10++;
   }
   VAR_14--;
  }
 }
 VAR_17 = 0;
 for (VAR_18 = 0; VAR_18 < VAR_6->params.cxns_per_ctrl; VAR_18++) {
  VAR_12 = &VAR_11->wrb_context[VAR_18];
  if (!VAR_15) {
   VAR_13 = VAR_8->mem_array[VAR_17].virtual_address;
   VAR_15 = (VAR_8->mem_array[VAR_17].size) /
    ((sizeof(struct iscsi_wrb) *
      VAR_6->params.wrbs_per_cxn));
   VAR_17++;
  }

  if (VAR_15) {
   for (VAR_16 = 0; VAR_16 < VAR_6->params.wrbs_per_cxn; VAR_16++) {
    VAR_10 = VAR_12->pwrb_handle_base[VAR_16];
    VAR_10->pwrb = VAR_13;
    VAR_13++;
   }
   VAR_15--;
  }
 }
 return 0;
init_wrb_hndl_failed:
 for (VAR_16 = VAR_18; VAR_16 > 0; VAR_16--) {
  VAR_12 = &VAR_11->wrb_context[VAR_16];
  FUNC_1(VAR_12->pwrb_handle_base);
  FUNC_1(VAR_12->pwrb_handle_basestd);
 }
 return -VAR_1;
}
