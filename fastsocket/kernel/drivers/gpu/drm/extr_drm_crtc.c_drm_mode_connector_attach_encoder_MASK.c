
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ id; } ;
struct drm_encoder {TYPE_1__ base; } ;
struct drm_connector {scalar_t__* encoder_ids; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct drm_connector *VAR_2,
          struct drm_encoder *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_2->encoder_ids[VAR_4] == 0) {
   VAR_2->encoder_ids[VAR_4] = VAR_3->base.id;
   return 0;
  }
 }
 return -VAR_1;
}
