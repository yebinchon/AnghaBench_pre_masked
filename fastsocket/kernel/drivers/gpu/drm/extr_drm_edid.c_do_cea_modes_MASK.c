
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_display_mode {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_connector {struct drm_device* dev; } ;


 int FUNC_0 (int *) ;
 struct drm_display_mode* FUNC_1 (struct drm_device*,int *) ;
 int FUNC_2 (struct drm_connector*,struct drm_display_mode*) ;
 int * VAR_0 ;

__attribute__((used)) static int
FUNC_3 (struct drm_connector *VAR_1, u8 *VAR_2, u8 VAR_3)
{
 struct drm_device *VAR_4 = VAR_1->dev;
 u8 * VAR_5, VAR_6;
 int VAR_7 = 0;

 for (VAR_5 = VAR_2; VAR_5 < VAR_2 + VAR_3; VAR_5++) {
  VAR_6 = (*VAR_5 & 127) - 1;
  if (VAR_6 < FUNC_0(VAR_0)) {
   struct drm_display_mode *VAR_8;
   VAR_8 = FUNC_1(VAR_4,
           &VAR_0[VAR_6]);
   if (VAR_8) {
    FUNC_2(VAR_1, VAR_8);
    VAR_7++;
   }
  }
 }

 return VAR_7;
}
