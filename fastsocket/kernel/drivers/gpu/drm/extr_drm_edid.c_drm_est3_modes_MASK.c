
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct drm_display_mode {int dummy; } ;
struct drm_connector {int dev; } ;
struct detailed_timing {int dummy; } ;
struct TYPE_3__ {int rb; int r; int h; int w; } ;


 int FUNC_0 (TYPE_1__*) ;
 struct drm_display_mode* FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct drm_connector*,struct drm_display_mode*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int
FUNC_3(struct drm_connector *VAR_1, struct detailed_timing *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6 = 0;
 struct drm_display_mode *VAR_7;
 u8 *VAR_8 = ((u8 *)VAR_2) + 5;

 for (VAR_3 = 0; VAR_3 < 6; VAR_3++) {
  for (VAR_4 = 7; VAR_4 > 0; VAR_4--) {
   VAR_5 = (VAR_3 * 8) + (7 - VAR_4);
   if (VAR_5 >= FUNC_0(VAR_0))
    break;
   if (VAR_8[VAR_3] & (1 << VAR_4)) {
    VAR_7 = FUNC_1(VAR_1->dev,
        VAR_0[VAR_5].w,
        VAR_0[VAR_5].h,
        VAR_0[VAR_5].r,
        VAR_0[VAR_5].rb);
    if (VAR_7) {
     FUNC_2(VAR_1, VAR_7);
     VAR_6++;
    }
   }
  }
 }

 return VAR_6;
}
