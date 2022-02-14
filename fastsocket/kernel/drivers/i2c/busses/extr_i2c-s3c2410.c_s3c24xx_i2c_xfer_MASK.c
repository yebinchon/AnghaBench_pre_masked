
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c24xx_i2c {int dev; } ;
struct i2c_msg {int dummy; } ;
struct i2c_adapter {int retries; scalar_t__ algo_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct s3c24xx_i2c*,struct i2c_msg*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct i2c_adapter *VAR_2,
   struct i2c_msg *VAR_3, int VAR_4)
{
 struct s3c24xx_i2c *VAR_5 = (struct s3c24xx_i2c *)VAR_2->algo_data;
 int VAR_6;
 int VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_2->retries; VAR_6++) {

  VAR_7 = FUNC_1(VAR_5, VAR_3, VAR_4);

  if (VAR_7 != -VAR_0)
   return VAR_7;

  FUNC_0(VAR_5->dev, "Retrying transmission (%d)\n", VAR_6);

  FUNC_2(100);
 }

 return -VAR_1;
}
