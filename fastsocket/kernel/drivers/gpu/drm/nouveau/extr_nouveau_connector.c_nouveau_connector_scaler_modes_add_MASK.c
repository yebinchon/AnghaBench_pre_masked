
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_connector {struct drm_display_mode* native_mode; } ;
struct moderec {scalar_t__ hdisplay; scalar_t__ vdisplay; } ;
struct drm_display_mode {scalar_t__ hdisplay; scalar_t__ vdisplay; int type; } ;
struct drm_device {int dummy; } ;
struct drm_connector {struct drm_device* dev; } ;


 int VAR_0 ;
 struct drm_display_mode* FUNC_0 (struct drm_device*,scalar_t__,scalar_t__,int ,int,int,int) ;
 int FUNC_1 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_2 (struct drm_display_mode*) ;
 struct nouveau_connector* FUNC_3 (struct drm_connector*) ;
 struct moderec* VAR_1 ;

__attribute__((used)) static int
FUNC_4(struct drm_connector *VAR_2)
{
 struct nouveau_connector *VAR_3 = FUNC_3(VAR_2);
 struct drm_display_mode *VAR_4 = VAR_3->native_mode, *VAR_5;
 struct drm_device *VAR_6 = VAR_2->dev;
 struct moderec *VAR_7 = &VAR_1[0];
 int VAR_8 = 0;

 if (!VAR_4)
  return 0;

 while (VAR_7->hdisplay) {
  if (VAR_7->hdisplay <= VAR_4->hdisplay &&
      VAR_7->vdisplay <= VAR_4->vdisplay) {
   VAR_5 = FUNC_0(VAR_6, VAR_7->hdisplay, VAR_7->vdisplay,
      FUNC_2(VAR_4), 0,
      0, 0);
   if (!VAR_5)
    continue;

   VAR_5->type |= VAR_0;

   FUNC_1(VAR_2, VAR_5);
   VAR_8++;
  }

  VAR_7++;
 }

 return VAR_8;
}
