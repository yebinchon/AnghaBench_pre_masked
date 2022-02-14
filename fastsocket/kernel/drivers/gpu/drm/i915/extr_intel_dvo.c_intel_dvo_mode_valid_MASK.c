
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* dev_ops; } ;
struct intel_dvo {TYPE_3__ dev; TYPE_1__* panel_fixed_mode; } ;
struct drm_display_mode {int flags; scalar_t__ hdisplay; scalar_t__ vdisplay; } ;
struct drm_connector {int dummy; } ;
struct TYPE_5__ {int (* mode_valid ) (TYPE_3__*,struct drm_display_mode*) ;} ;
struct TYPE_4__ {scalar_t__ hdisplay; scalar_t__ vdisplay; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct intel_dvo* FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (TYPE_3__*,struct drm_display_mode*) ;

__attribute__((used)) static int FUNC_2(struct drm_connector *VAR_3,
    struct drm_display_mode *VAR_4)
{
 struct intel_dvo *VAR_5 = FUNC_0(VAR_3);

 if (VAR_4->flags & VAR_0)
  return VAR_1;



 if (VAR_5->panel_fixed_mode) {
  if (VAR_4->hdisplay > VAR_5->panel_fixed_mode->hdisplay)
   return VAR_2;
  if (VAR_4->vdisplay > VAR_5->panel_fixed_mode->vdisplay)
   return VAR_2;
 }

 return VAR_5->dev.dev_ops->mode_valid(&VAR_5->dev, VAR_4);
}
