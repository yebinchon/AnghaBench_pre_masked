
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_device {int dummy; } ;
struct saa7146_dev {int dummy; } ;
struct i2c_msg {int dummy; } ;
struct i2c_adapter {int retries; } ;


 struct v4l2_device* FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct saa7146_dev*,struct i2c_msg*,int,int ) ;
 struct saa7146_dev* FUNC_2 (struct v4l2_device*) ;

__attribute__((used)) static int FUNC_3(struct i2c_adapter* VAR_0, struct i2c_msg *VAR_1, int VAR_2)
{
 struct v4l2_device *VAR_3 = FUNC_0(VAR_0);
 struct saa7146_dev *VAR_4 = FUNC_2(VAR_3);


 return FUNC_1(VAR_4, VAR_1, VAR_2, VAR_0->retries);
}
