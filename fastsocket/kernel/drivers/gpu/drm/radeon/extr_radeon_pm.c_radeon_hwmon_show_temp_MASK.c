
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int int_thermal_type; } ;
struct radeon_device {TYPE_1__ pm; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;






 int FUNC_0 (struct radeon_device*) ;
 struct drm_device* FUNC_1 (int ) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (char*,int ,char*,int) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_1,
          struct device_attribute *VAR_2,
          char *VAR_3)
{
 struct drm_device *VAR_4 = FUNC_1(FUNC_7(VAR_1));
 struct radeon_device *VAR_5 = VAR_4->dev_private;
 int VAR_6;

 switch (VAR_5->pm.int_thermal_type) {
 case 131:
  VAR_6 = FUNC_2(VAR_5);
  break;
 case 130:
  VAR_6 = FUNC_3(VAR_5);
  break;
 case 133:
 case 132:
  VAR_6 = FUNC_0(VAR_5);
  break;
 case 128:
  VAR_6 = FUNC_6(VAR_5);
  break;
 case 129:
  VAR_6 = FUNC_4(VAR_5);
  break;
 default:
  VAR_6 = 0;
  break;
 }

 return FUNC_5(VAR_3, VAR_0, "%d\n", VAR_6);
}
