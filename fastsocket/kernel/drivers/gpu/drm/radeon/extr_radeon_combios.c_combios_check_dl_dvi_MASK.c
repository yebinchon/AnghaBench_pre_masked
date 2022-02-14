
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct radeon_device {int flags; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct drm_device*,int ) ;

__attribute__((used)) static uint16_t FUNC_2(struct drm_device *VAR_6, int VAR_7)
{
 struct radeon_device *VAR_8 = VAR_6->dev_private;
 uint32_t VAR_9;

 if (VAR_8->flags & VAR_5) {
  if (VAR_7)
   return VAR_3;
  else
   return VAR_4;
 }
 VAR_9 = FUNC_1(VAR_6, VAR_0);
 if (VAR_9) {
  uint8_t VAR_10 = FUNC_0(VAR_9);
  uint8_t VAR_11 = FUNC_0(VAR_9 + 4 + 5);
  if (VAR_10 >= 3) {
   if (VAR_7)
    return VAR_1;
   else
    return VAR_2;
  } else {
   if (VAR_11 & 1) {
    if (VAR_7)
     return VAR_1;
    else
     return VAR_2;
   }
  }
 }
 if (VAR_7)
  return VAR_3;
 else
  return VAR_4;
}
