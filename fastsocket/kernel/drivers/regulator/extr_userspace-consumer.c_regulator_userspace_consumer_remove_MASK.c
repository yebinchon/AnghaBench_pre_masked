
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct userspace_consumer_data {int supplies; int num_supplies; scalar_t__ enabled; } ;
struct TYPE_2__ {int kobj; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct userspace_consumer_data*) ;
 struct userspace_consumer_data* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct userspace_consumer_data *VAR_2 = FUNC_1(VAR_1);

 FUNC_4(&VAR_1->dev.kobj, &VAR_0);

 if (VAR_2->enabled)
  FUNC_2(VAR_2->num_supplies, VAR_2->supplies);

 FUNC_3(VAR_2->num_supplies, VAR_2->supplies);
 FUNC_0(VAR_2);

 return 0;
}
