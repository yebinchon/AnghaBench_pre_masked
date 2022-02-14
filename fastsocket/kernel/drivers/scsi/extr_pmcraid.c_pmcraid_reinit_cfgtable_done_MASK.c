
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pmcraid_cmd {TYPE_1__* drv_inst; scalar_t__ release; TYPE_4__* ioa_cb; } ;
struct TYPE_7__ {int ioasc; } ;
struct TYPE_6__ {int * cdb; } ;
struct TYPE_8__ {TYPE_3__ ioasa; TYPE_2__ ioarcb; } ;
struct TYPE_5__ {int worker_q; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct pmcraid_cmd*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct pmcraid_cmd *VAR_0)
{
 FUNC_1("response internal cmd CDB[0] = %x ioasc = %x\n",
       VAR_0->ioa_cb->ioarcb.cdb[0],
       FUNC_0(VAR_0->ioa_cb->ioasa.ioasc));

 if (VAR_0->release) {
  VAR_0->release = 0;
  FUNC_2(VAR_0);
 }
 FUNC_1("scheduling worker for config table reinitialization\n");
 FUNC_3(&VAR_0->drv_inst->worker_q);
}
