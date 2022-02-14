
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int attrs; } ;
struct ics932s401_data {TYPE_1__ attrs; int lock; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_4__ {int kobj; } ;
struct i2c_client {TYPE_2__ dev; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,int ) ;
 int FUNC_1 (struct i2c_client*,struct ics932s401_data*) ;
 int VAR_2 ;
 int FUNC_2 (struct ics932s401_data*) ;
 struct ics932s401_data* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_3,
    const struct i2c_device_id *VAR_4)
{
 struct ics932s401_data *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(sizeof(struct ics932s401_data), VAR_1);
 if (!VAR_5) {
  VAR_6 = -VAR_0;
  goto exit;
 }

 FUNC_1(VAR_3, VAR_5);
 FUNC_4(&VAR_5->lock);

 FUNC_0(&VAR_3->dev, "%s chip found\n", VAR_3->name);


 VAR_5->attrs.attrs = VAR_2;
 VAR_6 = FUNC_5(&VAR_3->dev.kobj, &VAR_5->attrs);
 if (VAR_6)
  goto exit_free;

 return 0;

exit_free:
 FUNC_2(VAR_5);
exit:
 return VAR_6;
}
