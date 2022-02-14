
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint16_t ;
struct wrb_handle {int wrb_index; int nxt_wrb_index; } ;
struct hwi_wrb_context {int wrb_handles_available; size_t alloc_index; struct wrb_handle** pwrb_handle_base; } ;
struct hwi_controller {struct hwi_wrb_context* wrb_context; } ;
struct TYPE_2__ {int wrbs_per_cxn; } ;
struct beiscsi_hba {TYPE_1__ params; struct hwi_controller* phwi_ctrlr; } ;


 size_t FUNC_0 (unsigned int) ;

struct wrb_handle *FUNC_1(struct beiscsi_hba *VAR_0, unsigned int VAR_1)
{
 struct hwi_wrb_context *VAR_2;
 struct hwi_controller *VAR_3;
 struct wrb_handle *VAR_4, *VAR_5;
 uint16_t VAR_6 = FUNC_0(VAR_1);

 VAR_3 = VAR_0->phwi_ctrlr;
 VAR_2 = &VAR_3->wrb_context[VAR_6];
 if (VAR_2->wrb_handles_available >= 2) {
  VAR_4 = VAR_2->pwrb_handle_base[
         VAR_2->alloc_index];
  VAR_2->wrb_handles_available--;
  if (VAR_2->alloc_index ==
      (VAR_0->params.wrbs_per_cxn - 1))
   VAR_2->alloc_index = 0;
  else
   VAR_2->alloc_index++;
  VAR_5 = VAR_2->pwrb_handle_base[
      VAR_2->alloc_index];
  VAR_4->nxt_wrb_index = VAR_5->wrb_index;
 } else
  VAR_4 = ((void*)0);
 return VAR_4;
}
