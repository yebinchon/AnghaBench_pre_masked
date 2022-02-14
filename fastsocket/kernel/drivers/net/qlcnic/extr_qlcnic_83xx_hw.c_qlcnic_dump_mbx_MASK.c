
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int num; int * arg; } ;
struct TYPE_4__ {int num; int * arg; } ;
struct qlcnic_cmd_args {TYPE_3__ rsp; TYPE_1__ req; } ;
struct qlcnic_adapter {TYPE_2__* pdev; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(struct qlcnic_adapter *VAR_0,
       struct qlcnic_cmd_args *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_0->pdev->dev,
   "Host MBX regs(%d)\n", VAR_1->req.num);
 for (VAR_2 = 0; VAR_2 < VAR_1->req.num; VAR_2++) {
  if (VAR_2 && !(VAR_2 % 8))
   FUNC_1("\n");
  FUNC_1("%08x ", VAR_1->req.arg[VAR_2]);
 }
 FUNC_1("\n");
 FUNC_0(&VAR_0->pdev->dev,
   "FW MBX regs(%d)\n", VAR_1->rsp.num);
 for (VAR_2 = 0; VAR_2 < VAR_1->rsp.num; VAR_2++) {
  if (VAR_2 && !(VAR_2 % 8))
   FUNC_1("\n");
  FUNC_1("%08x ", VAR_1->rsp.arg[VAR_2]);
 }
 FUNC_1("\n");
}
