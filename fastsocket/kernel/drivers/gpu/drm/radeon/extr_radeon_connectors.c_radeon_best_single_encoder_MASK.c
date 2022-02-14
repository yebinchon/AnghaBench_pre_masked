
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mode_object {int dummy; } ;
struct drm_encoder {int dummy; } ;
struct drm_connector {int* encoder_ids; int dev; } ;


 int VAR_0 ;
 struct drm_mode_object* FUNC_0 (int ,int,int ) ;
 struct drm_encoder* FUNC_1 (struct drm_mode_object*) ;

__attribute__((used)) static struct drm_encoder *FUNC_2(struct drm_connector *VAR_1)
{
 int VAR_2 = VAR_1->encoder_ids[0];
 struct drm_mode_object *VAR_3;
 struct drm_encoder *VAR_4;


 if (VAR_2) {
  VAR_3 = FUNC_0(VAR_1->dev, VAR_2, VAR_0);
  if (!VAR_3)
   return ((void*)0);
  VAR_4 = FUNC_1(VAR_3);
  return VAR_4;
 }
 return ((void*)0);
}
