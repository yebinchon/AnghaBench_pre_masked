
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssp_device {TYPE_1__* pdev; int * label; scalar_t__ use_count; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

void FUNC_3(struct ssp_device *VAR_1)
{
 FUNC_1(&VAR_0);
 if (VAR_1->use_count) {
  VAR_1->use_count--;
  VAR_1->label = ((void*)0);
 } else
  FUNC_0(&VAR_1->pdev->dev, "device already free\n");
 FUNC_2(&VAR_0);
}
