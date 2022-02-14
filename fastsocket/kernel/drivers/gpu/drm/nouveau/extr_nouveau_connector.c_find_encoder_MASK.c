
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_encoder {TYPE_1__* dcb; } ;
struct drm_mode_object {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_connector {int* encoder_ids; struct drm_device* dev; } ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct drm_mode_object* FUNC_0 (struct drm_device*,int,int ) ;
 struct nouveau_encoder* FUNC_1 (int ) ;
 int FUNC_2 (struct drm_mode_object*) ;

struct nouveau_encoder *
FUNC_3(struct drm_connector *VAR_3, int VAR_4)
{
 struct drm_device *VAR_5 = VAR_3->dev;
 struct nouveau_encoder *VAR_6;
 struct drm_mode_object *VAR_7;
 int VAR_8, VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_9 = VAR_3->encoder_ids[VAR_8];
  if (!VAR_9)
   break;

  VAR_7 = FUNC_0(VAR_5, VAR_9, VAR_2);
  if (!VAR_7)
   continue;
  VAR_6 = FUNC_1(FUNC_2(VAR_7));

  if (VAR_4 == VAR_0 || VAR_6->dcb->type == VAR_4)
   return VAR_6;
 }

 return ((void*)0);
}
