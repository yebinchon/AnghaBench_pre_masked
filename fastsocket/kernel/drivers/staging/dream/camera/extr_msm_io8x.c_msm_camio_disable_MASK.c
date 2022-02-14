
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct msm_camera_sensor_info* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct msm_camera_sensor_info {struct msm_camera_device_platform_data* pdata; } ;
struct msm_camera_device_platform_data {int (* camera_gpio_off ) () ;} ;
struct TYPE_4__ {int appsz; int appphy; int mdcsz; int mdcphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;

void FUNC_4(struct platform_device *VAR_7)
{
 struct msm_camera_sensor_info *VAR_8 = VAR_7->dev.platform_data;
 struct msm_camera_device_platform_data *VAR_9 = VAR_8->pdata;

 FUNC_0(VAR_6);
 FUNC_2(VAR_5.mdcphy, VAR_5.mdcsz);
 FUNC_0(VAR_4);
 FUNC_2(VAR_5.appphy, VAR_5.appsz);

 VAR_9->camera_gpio_off();

 FUNC_1(VAR_3);
 FUNC_1(VAR_0);
 FUNC_1(VAR_2);
 FUNC_1(VAR_1);
}
