
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_encoder {int active_device; int encoder_id; int devices; int pixel_clock; } ;
struct radeon_device {int dummy; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_display_mode {int clock; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 scalar_t__ FUNC_2 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct drm_encoder*,struct drm_display_mode*) ;
 int FUNC_4 (struct drm_encoder*,int ) ;
 int FUNC_5 (struct drm_encoder*,int ) ;
 int FUNC_6 (struct drm_encoder*,int ) ;
 scalar_t__ FUNC_7 (struct drm_encoder*) ;
 int FUNC_8 (struct drm_encoder*,int ) ;
 int FUNC_9 (struct drm_encoder*,int) ;
 int FUNC_10 (struct drm_encoder*,struct drm_display_mode*) ;
 int FUNC_11 (struct drm_encoder*) ;
 int FUNC_12 (struct drm_encoder*,struct drm_display_mode*) ;
 int FUNC_13 (struct drm_encoder*,int ) ;
 struct radeon_encoder* FUNC_14 (struct drm_encoder*) ;

__attribute__((used)) static void
FUNC_15(struct drm_encoder *VAR_7,
        struct drm_display_mode *VAR_8,
        struct drm_display_mode *VAR_9)
{
 struct drm_device *VAR_10 = VAR_7->dev;
 struct radeon_device *VAR_11 = VAR_10->dev_private;
 struct radeon_encoder *VAR_12 = FUNC_14(VAR_7);

 VAR_12->pixel_clock = VAR_9->clock;


 FUNC_13(VAR_7, VAR_5);

 if (FUNC_0(VAR_11) && !FUNC_1(VAR_11)) {
  if (VAR_12->active_device & (VAR_0 | VAR_1))
   FUNC_9(VAR_7, 1);
  else
   FUNC_9(VAR_7, 0);
 }

 switch (VAR_12->encoder_id) {
 case 131:
 case 134:
 case 133:
 case 132:
  FUNC_5(VAR_7, VAR_6);
  break;
 case 130:
 case 129:
 case 128:
 case 135:

  break;
 case 140:
 case 139:
 case 136:
  FUNC_6(VAR_7, VAR_3);
  break;
 case 142:
 case 138:
 case 141:
 case 137:
  FUNC_4(VAR_7, VAR_3);
  if (VAR_12->devices & (VAR_1 | VAR_0)) {
   if (VAR_12->active_device & (VAR_1 | VAR_0))
    FUNC_8(VAR_7, VAR_3);
   else
    FUNC_8(VAR_7, VAR_2);
  }
  break;
 }

 FUNC_3(VAR_7, VAR_9);

 if (FUNC_7(VAR_7) == VAR_4) {
  FUNC_11(VAR_7);
  if (FUNC_2(VAR_11))
   ;
  else if (FUNC_1(VAR_11))
   FUNC_10(VAR_7, VAR_9);
  else
   FUNC_12(VAR_7, VAR_9);
 }
}
