
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mode_object {int dummy; } ;
struct drm_encoder {int encoder_type; } ;
struct drm_connector {scalar_t__* encoder_ids; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct drm_mode_object* FUNC_0 (int ,scalar_t__,int ) ;
 struct drm_encoder* FUNC_1 (struct drm_mode_object*) ;

__attribute__((used)) static struct drm_encoder *FUNC_2(struct drm_connector *VAR_2, int VAR_3)
{
 struct drm_mode_object *VAR_4;
 struct drm_encoder *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_2->encoder_ids[VAR_6] == 0)
   break;

  VAR_4 = FUNC_0(VAR_2->dev, VAR_2->encoder_ids[VAR_6], VAR_1);
  if (!VAR_4)
   continue;

  VAR_5 = FUNC_1(VAR_4);
  if (VAR_5->encoder_type == VAR_3)
   return VAR_5;
 }
 return ((void*)0);
}
