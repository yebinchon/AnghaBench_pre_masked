
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct lis3lv02d {TYPE_2__* pdev; } ;
struct TYPE_5__ {int kobj; } ;
struct TYPE_6__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 TYPE_2__* FUNC_2 (int ,int,int *,int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(struct lis3lv02d *VAR_2)
{
 VAR_2->pdev = FUNC_2(VAR_0, -1, ((void*)0), 0);
 if (FUNC_0(VAR_2->pdev))
  return FUNC_1(VAR_2->pdev);

 return FUNC_3(&VAR_2->pdev->dev.kobj, &VAR_1);
}
