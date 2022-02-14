
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct pmcraid_ioasc_error {scalar_t__ log_level; int error_string; } ;
struct pmcraid_cmd {TYPE_2__* ioa_cb; TYPE_1__* drv_inst; } ;
struct TYPE_6__ {int resource_handle; int * cdb; } ;
struct TYPE_5__ {TYPE_3__ ioarcb; } ;
struct TYPE_4__ {scalar_t__ current_log_level; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ,int ,int ) ;
 struct pmcraid_ioasc_error* FUNC_2 (int ) ;

void FUNC_3(u32 VAR_0, struct pmcraid_cmd *VAR_1)
{
 struct pmcraid_ioasc_error *VAR_2 = FUNC_2(VAR_0);

 if (VAR_2 == ((void*)0) ||
  VAR_1->drv_inst->current_log_level < VAR_2->log_level)
  return;


 FUNC_1("cmd [%x] for resource %x failed with %x(%s)\n",
  VAR_1->ioa_cb->ioarcb.cdb[0],
  VAR_1->ioa_cb->ioarcb.resource_handle,
  FUNC_0(VAR_0), VAR_2->error_string);
}
