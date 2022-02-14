
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_int_device {struct tcm825x_sensor* priv; } ;
struct tcm825x_sensor {TYPE_1__* i2c_client; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_2(struct v4l2_int_device *VAR_1)
{
 struct tcm825x_sensor *VAR_2 = VAR_1->priv;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2->i2c_client, 0x01);
 if (VAR_3 < 0)
  return VAR_3;
 if (VAR_3 == 0) {
  FUNC_0(&VAR_2->i2c_client->dev, "device not detected\n");
  return -VAR_0;
 }
 return 0;
}
