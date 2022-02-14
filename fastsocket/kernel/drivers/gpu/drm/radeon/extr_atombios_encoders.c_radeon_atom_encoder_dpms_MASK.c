
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_encoder {int encoder_id; int active_device; int devices; } ;
struct radeon_device {int dummy; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int,int,int ,int ) ;
 int FUNC_3 (struct drm_encoder*,int ) ;
 int FUNC_4 (struct drm_encoder*,int ) ;
 int FUNC_5 (struct drm_encoder*,int) ;
 int FUNC_6 (struct drm_encoder*,int) ;
 int FUNC_7 (struct drm_encoder*,struct drm_encoder*,int) ;
 int FUNC_8 (struct drm_encoder*,int) ;
 struct drm_encoder* FUNC_9 (struct drm_encoder*) ;
 struct radeon_encoder* FUNC_10 (struct drm_encoder*) ;

__attribute__((used)) static void
FUNC_11(struct drm_encoder *VAR_2, int VAR_3)
{
 struct drm_device *VAR_4 = VAR_2->dev;
 struct radeon_device *VAR_5 = VAR_4->dev_private;
 struct radeon_encoder *VAR_6 = FUNC_10(VAR_2);
 struct drm_encoder *VAR_7 = FUNC_9(VAR_2);

 FUNC_2("encoder dpms %d to mode %d, devices %08x, active_devices %08x\n",
    VAR_6->encoder_id, VAR_3, VAR_6->devices,
    VAR_6->active_device);
 switch (VAR_6->encoder_id) {
 case 131:
 case 134:
 case 133:
 case 132:
 case 139:
 case 140:
 case 141:
 case 137:
  FUNC_5(VAR_2, VAR_3);
  break;
 case 130:
 case 129:
 case 128:
 case 135:
  FUNC_6(VAR_2, VAR_3);
  break;
 case 136:
  if (FUNC_1(VAR_5)) {
   switch (VAR_3) {
   case 145:
    FUNC_4(VAR_2, VAR_1);
    break;
   case 144:
   case 143:
   case 146:
    FUNC_4(VAR_2, VAR_0);
    break;
   }
  } else if (FUNC_0(VAR_5))
   FUNC_6(VAR_2, VAR_3);
  else
   FUNC_5(VAR_2, VAR_3);
  break;
 case 142:
 case 138:
  if (FUNC_1(VAR_5)) {
   switch (VAR_3) {
   case 145:
    FUNC_3(VAR_2, VAR_1);
    break;
   case 144:
   case 143:
   case 146:
    FUNC_3(VAR_2, VAR_0);
    break;
   }
  } else
   FUNC_5(VAR_2, VAR_3);
  break;
 default:
  return;
 }

 if (VAR_7)
  FUNC_7(VAR_2, VAR_7, VAR_3);

 FUNC_8(VAR_2, (VAR_3 == 145) ? 1 : 0);

}
