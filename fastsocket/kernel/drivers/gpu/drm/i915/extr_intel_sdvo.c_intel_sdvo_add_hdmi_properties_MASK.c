
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct drm_device* dev; } ;
struct TYPE_5__ {TYPE_2__ base; } ;
struct intel_sdvo_connector {TYPE_1__ base; } ;
struct intel_sdvo {int color_range_auto; } ;
struct drm_device {int dummy; } ;
struct TYPE_7__ {int gen; } ;


 TYPE_4__* FUNC_0 (struct drm_device*) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_4(struct intel_sdvo *VAR_0,
          struct intel_sdvo_connector *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->base.base.dev;

 FUNC_3(&VAR_1->base.base);
 if (FUNC_0(VAR_2)->gen >= 4 && FUNC_1(VAR_2)) {
  FUNC_2(&VAR_1->base.base);
  VAR_0->color_range_auto = 1;
 }
}
