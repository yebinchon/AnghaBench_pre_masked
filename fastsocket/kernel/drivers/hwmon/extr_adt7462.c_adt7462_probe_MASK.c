
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct TYPE_6__ {int kobj; } ;
struct i2c_client {TYPE_3__ dev; int name; } ;
struct TYPE_5__ {int attrs; } ;
struct adt7462_data {TYPE_1__ attrs; int hwmon_dev; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*,char*,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct i2c_client*,struct adt7462_data*) ;
 int FUNC_5 (struct adt7462_data*) ;
 struct adt7462_data* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_3,
    const struct i2c_device_id *VAR_4)
{
 struct adt7462_data *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_6(sizeof(struct adt7462_data), VAR_1);
 if (!VAR_5) {
  VAR_6 = -VAR_0;
  goto exit;
 }

 FUNC_4(VAR_3, VAR_5);
 FUNC_7(&VAR_5->lock);

 FUNC_2(&VAR_3->dev, "%s chip found\n", VAR_3->name);


 VAR_5->attrs.attrs = VAR_2;
 VAR_6 = FUNC_8(&VAR_3->dev.kobj, &VAR_5->attrs);
 if (VAR_6)
  goto exit_free;

 VAR_5->hwmon_dev = FUNC_3(&VAR_3->dev);
 if (FUNC_0(VAR_5->hwmon_dev)) {
  VAR_6 = FUNC_1(VAR_5->hwmon_dev);
  goto exit_remove;
 }

 return 0;

exit_remove:
 FUNC_9(&VAR_3->dev.kobj, &VAR_5->attrs);
exit_free:
 FUNC_5(VAR_5);
exit:
 return VAR_6;
}
