
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct megasas_instance {int abort_cmd_wait_q; TYPE_2__* instancet; } ;
struct megasas_cmd {int sync_cmd; int cmd_status; int frame_phys_addr; int index; TYPE_1__* frame; } ;
struct megasas_abort_frame {int cmd_status; scalar_t__ abort_mfi_phys_addr_hi; int abort_mfi_phys_addr_lo; int abort_context; scalar_t__ flags; int cmd; } ;
struct TYPE_4__ {int (* issue_dcmd ) (struct megasas_instance*,struct megasas_cmd*) ;} ;
struct TYPE_3__ {struct megasas_abort_frame abort; } ;


 int VAR_0 ;
 struct megasas_cmd* FUNC_0 (struct megasas_instance*) ;
 int FUNC_1 (struct megasas_instance*,struct megasas_cmd*) ;
 int FUNC_2 (struct megasas_instance*,struct megasas_cmd*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int
FUNC_4(struct megasas_instance *VAR_1,
    struct megasas_cmd *VAR_2)
{
 struct megasas_cmd *VAR_3;
 struct megasas_abort_frame *VAR_4;

 VAR_3 = FUNC_0(VAR_1);

 if (!VAR_3)
  return -1;

 VAR_4 = &VAR_3->frame->abort;




 VAR_4->cmd = VAR_0;
 VAR_4->cmd_status = 0xFF;
 VAR_4->flags = 0;
 VAR_4->abort_context = VAR_2->index;
 VAR_4->abort_mfi_phys_addr_lo = VAR_2->frame_phys_addr;
 VAR_4->abort_mfi_phys_addr_hi = 0;

 VAR_3->sync_cmd = 1;
 VAR_3->cmd_status = 0xFF;

 VAR_1->instancet->issue_dcmd(VAR_1, VAR_3);




 FUNC_3(VAR_1->abort_cmd_wait_q, VAR_3->cmd_status != 0xFF);
 VAR_3->sync_cmd = 0;

 FUNC_1(VAR_1, VAR_3);
 return 0;
}
