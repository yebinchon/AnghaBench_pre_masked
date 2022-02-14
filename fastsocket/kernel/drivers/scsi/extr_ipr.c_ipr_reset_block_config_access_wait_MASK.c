
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipr_ioa_cfg {int cfg_locked; TYPE_2__* pdev; int reset; } ;
struct TYPE_3__ {scalar_t__ time_left; } ;
struct ipr_cmnd {int job_step; TYPE_1__ u; struct ipr_ioa_cfg* ioa_cfg; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct ipr_cmnd*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(struct ipr_cmnd *VAR_3)
{
 struct ipr_ioa_cfg *VAR_4 = VAR_3->ioa_cfg;
 int VAR_5 = VAR_1;

 if (FUNC_2(VAR_4->pdev)) {
  VAR_4->cfg_locked = 1;
  VAR_3->job_step = VAR_4->reset;
 } else {
  if (VAR_3->u.time_left) {
   VAR_5 = VAR_2;
   VAR_3->u.time_left -= VAR_0;
   FUNC_1(VAR_3,
           VAR_0);
  } else {
   VAR_3->job_step = VAR_4->reset;
   FUNC_0(&VAR_4->pdev->dev,
    "Timed out waiting to lock config access. Resetting anyway.\n");
  }
 }

 return VAR_5;
}
