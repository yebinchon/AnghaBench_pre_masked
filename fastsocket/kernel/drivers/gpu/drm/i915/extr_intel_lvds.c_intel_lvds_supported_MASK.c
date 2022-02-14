
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;

__attribute__((used)) static bool FUNC_3(struct drm_device *VAR_0)
{


 if (FUNC_0(VAR_0))
  return 1;



 return FUNC_2(VAR_0) && !FUNC_1(VAR_0);
}
