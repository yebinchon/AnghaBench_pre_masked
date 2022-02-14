
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_device {scalar_t__ family; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct drm_encoder *VAR_5, bool VAR_6)
{
 struct drm_device *VAR_7 = VAR_5->dev;
 struct radeon_device *VAR_8 = VAR_7->dev_private;
 uint32_t VAR_9;

 if (VAR_8->family >= VAR_2)
  VAR_9 = FUNC_0(VAR_3);
 else
  VAR_9 = FUNC_0(VAR_4);

 if (VAR_6) {
  VAR_9 |= VAR_1;
  VAR_9 &= ~VAR_0;
 } else {
  VAR_9 &= ~VAR_1;
  VAR_9 |= VAR_0;
 }

 if (VAR_8->family >= VAR_2)
  FUNC_1(VAR_3, VAR_9);
 else
  FUNC_1(VAR_4, VAR_9);
}
