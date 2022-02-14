
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_crtc {int* lut_r; int* lut_g; int* lut_b; int pipe; int plane; int cpu_transcoder; int bpp; int base; } ;
struct drm_device {TYPE_1__* dev_private; } ;
struct drm_connector {int dummy; } ;
struct TYPE_2__ {int ** pipe_to_crtc_mapping; int ** plane_to_crtc_mapping; } ;
typedef TYPE_1__ drm_i915_private_t ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct drm_device*) ;
 scalar_t__ FUNC_4 (struct drm_device*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct drm_device*,int *,int *) ;
 int FUNC_7 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct intel_crtc* FUNC_8 (int,int ) ;

__attribute__((used)) static void FUNC_9(struct drm_device *VAR_4, int VAR_5)
{
 drm_i915_private_t *VAR_6 = VAR_4->dev_private;
 struct intel_crtc *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_8(sizeof(struct intel_crtc) + (VAR_1 * sizeof(struct drm_connector *)), VAR_0);
 if (VAR_7 == ((void*)0))
  return;

 FUNC_6(VAR_4, &VAR_7->base, &VAR_2);

 FUNC_7(&VAR_7->base, 256);
 for (VAR_8 = 0; VAR_8 < 256; VAR_8++) {
  VAR_7->lut_r[VAR_8] = VAR_8;
  VAR_7->lut_g[VAR_8] = VAR_8;
  VAR_7->lut_b[VAR_8] = VAR_8;
 }


 VAR_7->pipe = VAR_5;
 VAR_7->plane = VAR_5;
 VAR_7->cpu_transcoder = VAR_5;
 if (FUNC_4(VAR_4) && FUNC_3(VAR_4)) {
  FUNC_2("swapping pipes & planes for FBC\n");
  VAR_7->plane = !VAR_5;
 }

 FUNC_1(VAR_5 >= FUNC_0(VAR_6->plane_to_crtc_mapping) ||
        VAR_6->plane_to_crtc_mapping[VAR_7->plane] != ((void*)0));
 VAR_6->plane_to_crtc_mapping[VAR_7->plane] = &VAR_7->base;
 VAR_6->pipe_to_crtc_mapping[VAR_7->pipe] = &VAR_7->base;

 VAR_7->bpp = 24;

 FUNC_5(&VAR_7->base, &VAR_3);
}
