
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct msm_camera_sensor_info* platform_data; } ;
struct platform_device {int name; TYPE_1__ dev; } ;
struct msm_camera_sensor_info {struct msm_camera_device_platform_data* pdata; } ;
struct TYPE_4__ {int appsz; int appphy; int mdcsz; int mdcphy; } ;
struct msm_camera_device_platform_data {int (* camera_gpio_on ) () ;TYPE_2__ ioext; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 TYPE_2__ VAR_7 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (void*) ;
 void* VAR_8 ;
 void* VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 void* FUNC_4 (int ,int ,int ) ;
 int FUNC_5 () ;

int FUNC_6(struct platform_device *VAR_10)
{
 int VAR_11 = 0;
 struct msm_camera_sensor_info *VAR_12 = VAR_10->dev.platform_data;
 struct msm_camera_device_platform_data *VAR_13 = VAR_12->pdata;

 VAR_7 = VAR_13->ioext;

 VAR_6 = FUNC_4(VAR_7.appphy,
  VAR_7.appsz, VAR_10->name);
 if (!VAR_6) {
  VAR_11 = -VAR_3;
  goto enable_fail;
 }

 VAR_5 = FUNC_0(VAR_7.appphy,
  VAR_7.appsz);
 if (!VAR_5) {
  VAR_11 = -VAR_4;
  goto apps_no_mem;
 }

 VAR_9 = FUNC_4(VAR_7.mdcphy,
  VAR_7.mdcsz, VAR_10->name);
 if (!VAR_9) {
  VAR_11 = -VAR_3;
  goto mdc_busy;
 }

 VAR_8 = FUNC_0(VAR_7.mdcphy,
  VAR_7.mdcsz);
 if (!VAR_8) {
  VAR_11 = -VAR_4;
  goto mdc_no_mem;
 }

 VAR_13->camera_gpio_on();

 FUNC_2(VAR_1);
 FUNC_2(VAR_0);
 FUNC_2(VAR_2);
 return 0;

mdc_no_mem:
 FUNC_3(VAR_7.mdcphy, VAR_7.mdcsz);
mdc_busy:
 FUNC_1(VAR_5);
apps_no_mem:
 FUNC_3(VAR_7.appphy, VAR_7.appsz);
enable_fail:
 return VAR_11;
}
