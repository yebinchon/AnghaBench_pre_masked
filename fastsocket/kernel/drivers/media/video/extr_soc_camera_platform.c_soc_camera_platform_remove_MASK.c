
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_camera_platform_priv {int subdev; } ;
struct soc_camera_platform_info {int dev; } ;
struct soc_camera_device {int * ops; } ;
struct TYPE_2__ {struct soc_camera_platform_info* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;


 struct soc_camera_platform_priv* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct soc_camera_platform_priv*) ;
 int FUNC_2 (struct platform_device*,int *) ;
 struct soc_camera_device* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct soc_camera_platform_priv *VAR_1 = FUNC_0(VAR_0);
 struct soc_camera_platform_info *VAR_2 = VAR_0->dev.platform_data;
 struct soc_camera_device *VAR_3 = FUNC_3(VAR_2->dev);

 FUNC_4(&VAR_1->subdev);
 VAR_3->ops = ((void*)0);
 FUNC_2(VAR_0, ((void*)0));
 FUNC_1(VAR_1);
 return 0;
}
