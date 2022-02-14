
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hwi_wrb_context {int pwrb_handle_basestd; int pwrb_handle_base; } ;
struct hwi_controller {struct hwi_wrb_context* wrb_context; } ;
struct TYPE_2__ {unsigned int cxns_per_ctrl; } ;
struct beiscsi_hba {TYPE_1__ params; struct hwi_controller* phwi_ctrlr; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct beiscsi_hba *VAR_0)
{
 unsigned int VAR_1;
 struct hwi_controller *VAR_2;
 struct hwi_wrb_context *VAR_3;

 VAR_2 = VAR_0->phwi_ctrlr;
 for (VAR_1 = 0; VAR_1 < VAR_0->params.cxns_per_ctrl; VAR_1++) {
  VAR_3 = &VAR_2->wrb_context[VAR_1];
  FUNC_0(VAR_3->pwrb_handle_base);
  FUNC_0(VAR_3->pwrb_handle_basestd);
 }
}
