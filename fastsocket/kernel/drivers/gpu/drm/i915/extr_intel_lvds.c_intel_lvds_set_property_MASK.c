
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_7__ {scalar_t__ fitting_mode; } ;
struct intel_connector {TYPE_3__ panel; } ;
struct drm_property {int dummy; } ;
struct TYPE_6__ {struct drm_property* scaling_mode_property; } ;
struct drm_device {TYPE_2__ mode_config; } ;
struct drm_crtc {scalar_t__ enabled; } ;
struct drm_connector {struct drm_device* dev; } ;
struct TYPE_5__ {struct drm_crtc* crtc; } ;
struct TYPE_8__ {TYPE_1__ base; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (struct drm_crtc*) ;
 struct intel_connector* FUNC_3 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_4(struct drm_connector *VAR_2,
       struct drm_property *VAR_3,
       uint64_t VAR_4)
{
 struct intel_connector *VAR_5 = FUNC_3(VAR_2);
 struct drm_device *VAR_6 = VAR_2->dev;

 if (VAR_3 == VAR_6->mode_config.scaling_mode_property) {
  struct drm_crtc *VAR_7;

  if (VAR_4 == VAR_0) {
   FUNC_0("no scaling not supported\n");
   return -VAR_1;
  }

  if (VAR_5->panel.fitting_mode == VAR_4) {

   return 0;
  }
  VAR_5->panel.fitting_mode = VAR_4;

  VAR_7 = FUNC_1(VAR_2)->base.crtc;
  if (VAR_7 && VAR_7->enabled) {




   FUNC_2(VAR_7);
  }
 }

 return 0;
}
