
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct msm_camera_sensor_info* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct msm_camera_sensor_info {struct msm_camera_device_platform_data* pdata; } ;
struct msm_camera_device_platform_data {int (* camera_gpio_on ) () ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;

int FUNC_2(struct platform_device *VAR_1)
{
 struct msm_camera_sensor_info *VAR_2 = VAR_1->dev.platform_data;
 struct msm_camera_device_platform_data *VAR_3 = VAR_2->pdata;

 VAR_3->camera_gpio_on();
 return FUNC_0(VAR_0);
}
