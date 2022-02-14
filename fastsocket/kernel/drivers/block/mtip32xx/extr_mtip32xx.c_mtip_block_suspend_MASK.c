
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct driver_data {TYPE_2__* disk; TYPE_1__* pdev; } ;
struct TYPE_4__ {int disk_name; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct driver_data*) ;

__attribute__((used)) static int FUNC_2(struct driver_data *VAR_0)
{
 FUNC_0(&VAR_0->pdev->dev,
  "Suspending %s ...\n", VAR_0->disk->disk_name);
 FUNC_1(VAR_0);
 return 0;
}
