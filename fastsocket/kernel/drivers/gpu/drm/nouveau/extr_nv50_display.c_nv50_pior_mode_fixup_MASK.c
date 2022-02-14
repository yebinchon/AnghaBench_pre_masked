
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_encoder {int dummy; } ;
struct nouveau_connector {scalar_t__ scaling_mode; struct drm_display_mode* native_mode; } ;
struct drm_encoder {int dummy; } ;
struct TYPE_2__ {int id; } ;
struct drm_display_mode {int clock; TYPE_1__ base; } ;


 scalar_t__ VAR_0 ;
 struct nouveau_encoder* FUNC_0 (struct drm_encoder*) ;
 struct nouveau_connector* FUNC_1 (struct nouveau_encoder*) ;

__attribute__((used)) static bool
FUNC_2(struct drm_encoder *VAR_1,
       const struct drm_display_mode *VAR_2,
       struct drm_display_mode *VAR_3)
{
 struct nouveau_encoder *VAR_4 = FUNC_0(VAR_1);
 struct nouveau_connector *VAR_5;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5 && VAR_5->native_mode) {
  if (VAR_5->scaling_mode != VAR_0) {
   int VAR_6 = VAR_3->base.id;
   *VAR_3 = *VAR_5->native_mode;
   VAR_3->base.id = VAR_6;
  }
 }

 VAR_3->clock *= 2;
 return 1;
}
