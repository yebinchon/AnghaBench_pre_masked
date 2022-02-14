
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct drm_device*,char const*) ;
 struct drm_device* FUNC_1 (int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1,
         const char *VAR_2, size_t VAR_3)
{
 struct drm_device *VAR_4 = FUNC_1(FUNC_3(VAR_0));
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_2);
 if (VAR_5)
  return VAR_5;
 return FUNC_2(VAR_2);
}
