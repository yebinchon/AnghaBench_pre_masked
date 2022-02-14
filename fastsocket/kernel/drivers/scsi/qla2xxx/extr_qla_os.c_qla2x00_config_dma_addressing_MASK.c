
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int enable_64bit_addressing; } ;
struct qla_hw_data {TYPE_3__* pdev; TYPE_1__* isp_ops; TYPE_2__ flags; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {int build_iocbs; int calc_req_entries; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(struct qla_hw_data *VAR_2)
{

 VAR_2->flags.enable_64bit_addressing = 0;

 if (!FUNC_3(&VAR_2->pdev->dev, FUNC_0(64))) {

  if (FUNC_1(FUNC_2(&VAR_2->pdev->dev)) &&
      !FUNC_4(VAR_2->pdev, FUNC_0(64))) {

   VAR_2->flags.enable_64bit_addressing = 1;
   VAR_2->isp_ops->calc_req_entries = VAR_1;
   VAR_2->isp_ops->build_iocbs = VAR_0;
   return;
  }
 }

 FUNC_3(&VAR_2->pdev->dev, FUNC_0(32));
 FUNC_4(VAR_2->pdev, FUNC_0(32));
}
