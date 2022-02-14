
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct intel_dp {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 struct drm_device* FUNC_3 (struct intel_dp*) ;
 scalar_t__ FUNC_4 (struct intel_dp*) ;

__attribute__((used)) static uint8_t
FUNC_5(struct intel_dp *VAR_5, uint8_t VAR_6)
{
 struct drm_device *VAR_7 = FUNC_3(VAR_5);

 if (FUNC_1(VAR_7)) {
  switch (VAR_6 & VAR_4) {
  case 130:
   return VAR_3;
  case 129:
   return VAR_2;
  case 128:
   return VAR_1;
  case 131:
  default:
   return VAR_0;
  }
 } else if (FUNC_0(VAR_7) && FUNC_4(VAR_5) && !FUNC_2(VAR_7)) {
  switch (VAR_6 & VAR_4) {
  case 130:
   return VAR_2;
  case 129:
  case 128:
   return VAR_1;
  default:
   return VAR_0;
  }
 } else {
  switch (VAR_6 & VAR_4) {
  case 130:
   return VAR_2;
  case 129:
   return VAR_2;
  case 128:
   return VAR_1;
  case 131:
  default:
   return VAR_0;
  }
 }
}
