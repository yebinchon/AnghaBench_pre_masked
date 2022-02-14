
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct TYPE_2__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_4,
   const struct i2c_device_id *VAR_5)
{
 int VAR_6;

 if (!FUNC_1(VAR_4->adapter,
         VAR_1)) {
  FUNC_0(&VAR_4->dev, "i2c bus does not support the ds1682\n");
  VAR_6 = -VAR_0;
  goto exit;
 }

 VAR_6 = FUNC_3(&VAR_4->dev.kobj, &VAR_3);
 if (VAR_6)
  goto exit;

 VAR_6 = FUNC_2(&VAR_4->dev.kobj, &VAR_2);
 if (VAR_6)
  goto exit_bin_attr;

 return 0;

 exit_bin_attr:
 FUNC_4(&VAR_4->dev.kobj, &VAR_3);
 exit:
 return VAR_6;
}
