
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_connector {int use_digital; } ;
struct drm_mode_object {int dummy; } ;
struct drm_encoder {scalar_t__ encoder_type; } ;
struct drm_connector {int* encoder_ids; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct drm_mode_object* FUNC_0 (int ,int,int ) ;
 struct drm_encoder* FUNC_1 (struct drm_mode_object*) ;
 struct radeon_connector* FUNC_2 (struct drm_connector*) ;

__attribute__((used)) static struct drm_encoder *FUNC_3(struct drm_connector *VAR_5)
{
 int VAR_6 = VAR_5->encoder_ids[0];
 struct radeon_connector *VAR_7 = FUNC_2(VAR_5);
 struct drm_mode_object *VAR_8;
 struct drm_encoder *VAR_9;
 int VAR_10;
 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  if (VAR_5->encoder_ids[VAR_10] == 0)
   break;

  VAR_8 = FUNC_0(VAR_5->dev, VAR_5->encoder_ids[VAR_10], VAR_4);
  if (!VAR_8)
   continue;

  VAR_9 = FUNC_1(VAR_8);

  if (VAR_7->use_digital == 1) {
   if (VAR_9->encoder_type == VAR_2)
    return VAR_9;
  } else {
   if (VAR_9->encoder_type == VAR_1 ||
       VAR_9->encoder_type == VAR_3)
    return VAR_9;
  }
 }





 if (VAR_6) {
  VAR_8 = FUNC_0(VAR_5->dev, VAR_6, VAR_4);
  if (!VAR_8)
   return ((void*)0);
  VAR_9 = FUNC_1(VAR_8);
  return VAR_9;
 }
 return ((void*)0);
}
