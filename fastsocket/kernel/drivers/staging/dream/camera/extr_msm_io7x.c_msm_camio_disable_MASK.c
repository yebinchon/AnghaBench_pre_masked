
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
 TYPE_2__ VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;

void FUNC_4(struct platform_device *VAR_6)
{
 struct msm_camera_sensor_info *VAR_7 = VAR_6->dev.platform_data;
 struct msm_camera_device_platform_data *VAR_8 = VAR_7->pdata;

 FUNC_0(VAR_5);
 FUNC_2(VAR_4.mdcphy, VAR_4.mdcsz);
 FUNC_0(VAR_3);
 FUNC_2(VAR_4.appphy, VAR_4.appsz);

 VAR_8->camera_gpio_off();

 FUNC_1(VAR_1);
 FUNC_1(VAR_0);
 FUNC_1(VAR_2);
}
