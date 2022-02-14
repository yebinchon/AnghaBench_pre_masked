
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pca9532_platform_data {int dummy; } ;
struct pca9532_data {int update_lock; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_2__ {struct pca9532_platform_data* platform_data; } ;
struct i2c_client {TYPE_1__ dev; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int ,int ) ;
 struct pca9532_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,struct pca9532_data*) ;
 int FUNC_4 (struct pca9532_data*) ;
 struct pca9532_data* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct i2c_client*,struct pca9532_data*,struct pca9532_platform_data*) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_4,
 const struct i2c_device_id *VAR_5)
{
 struct pca9532_data *VAR_6 = FUNC_2(VAR_4);
 struct pca9532_platform_data *VAR_7 = VAR_4->dev.platform_data;
 int VAR_8;

 if (!VAR_7)
  return -VAR_0;

 if (!FUNC_1(VAR_4->adapter,
  VAR_3))
  return -VAR_0;

 VAR_6 = FUNC_5(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 FUNC_0(&VAR_4->dev, "setting platform data\n");
 FUNC_3(VAR_4, VAR_6);
 VAR_6->client = VAR_4;
 FUNC_6(&VAR_6->update_lock);

 VAR_8 = FUNC_7(VAR_4, VAR_6, VAR_7);
 if (VAR_8) {
  FUNC_4(VAR_6);
  FUNC_3(VAR_4, ((void*)0));
 }

 return VAR_8;
}
