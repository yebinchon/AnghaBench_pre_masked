
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct userspace_consumer_data {int supplies; int num_supplies; scalar_t__ enabled; int lock; int name; } ;
struct regulator_userspace_consumer_data {scalar_t__ init_on; int supplies; int num_supplies; int name; } ;
struct TYPE_3__ {int kobj; struct regulator_userspace_consumer_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (struct userspace_consumer_data*) ;
 struct userspace_consumer_data* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct platform_device*,struct userspace_consumer_data*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_4)
{
 struct regulator_userspace_consumer_data *VAR_5;
 struct userspace_consumer_data *VAR_6;
 int VAR_7;

 VAR_5 = VAR_4->dev.platform_data;
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_2(sizeof(struct userspace_consumer_data), VAR_2);
 if (VAR_6 == ((void*)0))
  return -VAR_1;

 VAR_6->name = VAR_5->name;
 VAR_6->num_supplies = VAR_5->num_supplies;
 VAR_6->supplies = VAR_5->supplies;

 FUNC_3(&VAR_6->lock);

 VAR_7 = FUNC_7(&VAR_4->dev, VAR_6->num_supplies,
     VAR_6->supplies);
 if (VAR_7) {
  FUNC_0(&VAR_4->dev, "Failed to get supplies: %d\n", VAR_7);
  goto err_alloc_supplies;
 }

 VAR_7 = FUNC_8(&VAR_4->dev.kobj, &VAR_3);
 if (VAR_7 != 0)
  goto err_create_attrs;

 if (VAR_5->init_on) {
  VAR_7 = FUNC_5(VAR_6->num_supplies,
         VAR_6->supplies);
  if (VAR_7) {
   FUNC_0(&VAR_4->dev,
    "Failed to set initial state: %d\n", VAR_7);
   goto err_enable;
  }
 }

 VAR_6->enabled = VAR_5->init_on;
 FUNC_4(VAR_4, VAR_6);

 return 0;

err_enable:
 FUNC_9(&VAR_4->dev.kobj, &VAR_3);

err_create_attrs:
 FUNC_6(VAR_6->num_supplies, VAR_6->supplies);

err_alloc_supplies:
 FUNC_1(VAR_6);
 return VAR_7;
}
