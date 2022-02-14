
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int user; } ;
struct aem_data {int id; TYPE_2__* pdev; TYPE_1__ ipmi; int hwmon_dev; int list; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct aem_data*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct aem_data*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_8(struct aem_data *VAR_0)
{
 FUNC_6(&VAR_0->list);
 FUNC_1(VAR_0);
 FUNC_3(VAR_0->hwmon_dev);
 FUNC_4(VAR_0->ipmi.user);
 FUNC_2(&VAR_0->pdev->dev, ((void*)0));
 FUNC_7(VAR_0->pdev);
 FUNC_0(VAR_0->id);
 FUNC_5(VAR_0);
}
