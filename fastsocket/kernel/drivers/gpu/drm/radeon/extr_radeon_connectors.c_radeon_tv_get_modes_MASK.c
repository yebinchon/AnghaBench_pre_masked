
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {scalar_t__ family; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int type; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector {struct drm_device* dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct drm_display_mode* FUNC_0 (struct drm_device*,int,int,int,int,int,int) ;
 int FUNC_1 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_2 (struct drm_encoder*,struct drm_connector*) ;
 struct drm_encoder* FUNC_3 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_4(struct drm_connector *VAR_3)
{
 struct drm_device *VAR_4 = VAR_3->dev;
 struct radeon_device *VAR_5 = VAR_4->dev_private;
 struct drm_display_mode *VAR_6;
 struct drm_encoder *VAR_7;

 VAR_7 = FUNC_3(VAR_3);
 if (!VAR_7)
  return 0;


 if (VAR_5->family >= VAR_0)

  FUNC_2(VAR_7, VAR_3);
 else {

  VAR_6 = FUNC_0(VAR_4, 800, 600, 60, 0, 0, 0);
  VAR_6->type = VAR_1 | VAR_2;
  FUNC_1(VAR_3, VAR_6);
 }
 return 1;
}
