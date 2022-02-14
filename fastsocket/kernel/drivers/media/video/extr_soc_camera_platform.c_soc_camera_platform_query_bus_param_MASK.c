
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_camera_platform_info {unsigned long bus_param; } ;
struct soc_camera_device {int dummy; } ;


 struct soc_camera_platform_info* FUNC_0 (struct soc_camera_device*) ;

__attribute__((used)) static unsigned long
FUNC_1(struct soc_camera_device *VAR_0)
{
 struct soc_camera_platform_info *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->bus_param;
}
