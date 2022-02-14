
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pmcraid_cmd {int cmd_done; TYPE_5__* drv_inst; TYPE_2__* ioa_cb; } ;
struct TYPE_9__ {int ignore; } ;
struct TYPE_8__ {int ignore; } ;
struct TYPE_10__ {TYPE_4__ ldn; TYPE_3__ ccn; } ;
struct TYPE_6__ {scalar_t__* cdb; } ;
struct TYPE_7__ {TYPE_1__ ioarcb; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct pmcraid_cmd*,int ,int ,int *) ;

__attribute__((used)) static void FUNC_2(struct pmcraid_cmd *VAR_1)
{
 if (VAR_1->ioa_cb->ioarcb.cdb[1] == VAR_0)
  FUNC_0(&(VAR_1->drv_inst->ccn.ignore), 0);
 else
  FUNC_0(&(VAR_1->drv_inst->ldn.ignore), 0);

 FUNC_1(VAR_1, VAR_1->cmd_done, 0, ((void*)0));
}
