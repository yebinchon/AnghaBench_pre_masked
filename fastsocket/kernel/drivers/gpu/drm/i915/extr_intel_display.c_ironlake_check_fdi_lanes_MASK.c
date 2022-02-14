
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int enabled; struct drm_device* dev; } ;
struct intel_crtc {int pipe; int fdi_lanes; TYPE_1__ base; } ;
struct drm_i915_private {int num_pipe; TYPE_2__** pipe_to_crtc_mapping; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct TYPE_4__ {int enabled; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;



 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct drm_device*) ;
 struct intel_crtc* FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static bool FUNC_6(struct intel_crtc *VAR_2)
{
 struct drm_device *VAR_3 = VAR_2->base.dev;
 struct drm_i915_private *VAR_4 = VAR_3->dev_private;
 struct intel_crtc *VAR_5 =
  FUNC_5(VAR_4->pipe_to_crtc_mapping[129]);

 FUNC_1("checking fdi config on pipe %i, lanes %i\n",
        VAR_2->pipe, VAR_2->fdi_lanes);
 if (VAR_2->fdi_lanes > 4) {
  FUNC_1("invalid fdi lane config on pipe %i: %i lanes\n",
         VAR_2->pipe, VAR_2->fdi_lanes);

  VAR_2->fdi_lanes = 4;

  return 0;
 }

 if (VAR_4->num_pipe == 2)
  return 1;

 switch (VAR_2->pipe) {
 case 130:
  return 1;
 case 129:
  if (VAR_4->pipe_to_crtc_mapping[128]->enabled &&
      VAR_2->fdi_lanes > 2) {
   FUNC_1("invalid shared fdi lane config on pipe %i: %i lanes\n",
          VAR_2->pipe, VAR_2->fdi_lanes);

   VAR_2->fdi_lanes = 2;

   return 0;
  }

  if (VAR_2->fdi_lanes > 2)
   FUNC_3(FUNC_2(VAR_1) & VAR_0);
  else
   FUNC_4(VAR_3);

  return 1;
 case 128:
  if (!VAR_5->base.enabled || VAR_5->fdi_lanes <= 2) {
   if (VAR_2->fdi_lanes > 2) {
    FUNC_1("invalid shared fdi lane config on pipe %i: %i lanes\n",
           VAR_2->pipe, VAR_2->fdi_lanes);

    VAR_2->fdi_lanes = 2;

    return 0;
   }
  } else {
   FUNC_1("fdi link B uses too many lanes to enable link C\n");
   return 0;
  }

  FUNC_4(VAR_3);

  return 1;
 default:
  FUNC_0();
 }
}
