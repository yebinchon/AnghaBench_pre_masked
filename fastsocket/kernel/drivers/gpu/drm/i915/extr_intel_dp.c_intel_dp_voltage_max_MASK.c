
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct intel_dp {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 struct drm_device* FUNC_2 (struct intel_dp*) ;
 scalar_t__ FUNC_3 (struct intel_dp*) ;

__attribute__((used)) static uint8_t
FUNC_4(struct intel_dp *VAR_2)
{
 struct drm_device *VAR_3 = FUNC_2(VAR_2);

 if (FUNC_1(VAR_3) && FUNC_3(VAR_2))
  return VAR_1;
 else if (FUNC_0(VAR_3) && !FUNC_3(VAR_2))
  return VAR_0;
 else
  return VAR_1;
}
