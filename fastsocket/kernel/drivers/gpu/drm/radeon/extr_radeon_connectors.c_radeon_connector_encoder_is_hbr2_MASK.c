
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_encoder {int caps; } ;
struct drm_mode_object {int dummy; } ;
struct drm_encoder {int dummy; } ;
struct drm_connector {scalar_t__* encoder_ids; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct drm_mode_object* FUNC_0 (int ,scalar_t__,int ) ;
 struct drm_encoder* FUNC_1 (struct drm_mode_object*) ;
 struct radeon_encoder* FUNC_2 (struct drm_encoder*) ;

bool FUNC_3(struct drm_connector *VAR_3)
{
 struct drm_mode_object *VAR_4;
 struct drm_encoder *VAR_5;
 struct radeon_encoder *VAR_6;
 int VAR_7;
 bool VAR_8 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  if (VAR_3->encoder_ids[VAR_7] == 0)
   break;

  VAR_4 = FUNC_0(VAR_3->dev, VAR_3->encoder_ids[VAR_7], VAR_2);
  if (!VAR_4)
   continue;

  VAR_5 = FUNC_1(VAR_4);
  VAR_6 = FUNC_2(VAR_5);
  if (VAR_6->caps & VAR_0)
   VAR_8 = 1;
 }

 return VAR_8;
}
