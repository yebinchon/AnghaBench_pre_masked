
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_camera_platform_info {int dummy; } ;
struct soc_camera_device {int dummy; } ;
struct TYPE_2__ {struct soc_camera_platform_info* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;


 struct platform_device* FUNC_0 (int ) ;
 int FUNC_1 (struct soc_camera_device*) ;

__attribute__((used)) static struct soc_camera_platform_info *FUNC_2(struct soc_camera_device *VAR_0)
{
 struct platform_device *VAR_1 =
  FUNC_0(FUNC_1(VAR_0));
 return VAR_1->dev.platform_data;
}
