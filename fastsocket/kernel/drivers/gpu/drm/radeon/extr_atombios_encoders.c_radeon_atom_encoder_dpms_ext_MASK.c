
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct drm_encoder*,struct drm_encoder*,int ) ;

__attribute__((used)) static void
FUNC_3(struct drm_encoder *VAR_6,
        struct drm_encoder *VAR_7,
        int VAR_8)
{
 struct drm_device *VAR_9 = VAR_6->dev;
 struct radeon_device *VAR_10 = VAR_9->dev_private;

 switch (VAR_8) {
 case 130:
 default:
  if (FUNC_0(VAR_10) || FUNC_1(VAR_10)) {
   FUNC_2(VAR_6, VAR_7,
       VAR_3);
   FUNC_2(VAR_6, VAR_7,
       VAR_5);
  } else
   FUNC_2(VAR_6, VAR_7, VAR_1);
  break;
 case 129:
 case 128:
 case 131:
  if (FUNC_0(VAR_10) || FUNC_1(VAR_10)) {
   FUNC_2(VAR_6, VAR_7,
       VAR_4);
   FUNC_2(VAR_6, VAR_7,
       VAR_2);
  } else
   FUNC_2(VAR_6, VAR_7, VAR_0);
  break;
 }
}
