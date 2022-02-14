
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tw9910_priv {int dummy; } ;
struct soc_camera_device {int * ops; } ;
struct TYPE_2__ {struct soc_camera_device* platform_data; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int FUNC_0 (struct tw9910_priv*) ;
 struct tw9910_priv* FUNC_1 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0)
{
 struct tw9910_priv *VAR_1 = FUNC_1(VAR_0);
 struct soc_camera_device *VAR_2 = VAR_0->dev.platform_data;

 VAR_2->ops = ((void*)0);
 FUNC_0(VAR_1);
 return 0;
}
