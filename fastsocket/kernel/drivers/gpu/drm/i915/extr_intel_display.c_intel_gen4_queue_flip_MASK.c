
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct intel_ring_buffer {int dummy; } ;
struct intel_crtc {int dspaddr_offset; int pipe; int plane; } ;
struct drm_i915_private {struct intel_ring_buffer* ring; } ;
struct drm_i915_gem_object {int gtt_offset; int tiling_mode; } ;
struct drm_framebuffer {int* pitches; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_crtc {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 size_t VAR_1 ;
 int FUNC_3 (struct intel_crtc*) ;
 int FUNC_4 (struct drm_device*,struct drm_i915_gem_object*,struct intel_ring_buffer*) ;
 int FUNC_5 (struct intel_ring_buffer*) ;
 int FUNC_6 (struct intel_ring_buffer*,int) ;
 int FUNC_7 (struct intel_ring_buffer*,int) ;
 int FUNC_8 (struct drm_i915_gem_object*) ;
 struct intel_crtc* FUNC_9 (struct drm_crtc*) ;

__attribute__((used)) static int FUNC_10(struct drm_device *VAR_2,
     struct drm_crtc *VAR_3,
     struct drm_framebuffer *VAR_4,
     struct drm_i915_gem_object *VAR_5)
{
 struct drm_i915_private *VAR_6 = VAR_2->dev_private;
 struct intel_crtc *VAR_7 = FUNC_9(VAR_3);
 uint32_t VAR_8, VAR_9;
 struct intel_ring_buffer *VAR_10 = &VAR_6->ring[VAR_1];
 int VAR_11;

 VAR_11 = FUNC_4(VAR_2, VAR_5, VAR_10);
 if (VAR_11)
  goto err;

 VAR_11 = FUNC_6(VAR_10, 4);
 if (VAR_11)
  goto err_unpin;





 FUNC_7(VAR_10, VAR_0 |
   FUNC_1(VAR_7->plane));
 FUNC_7(VAR_10, VAR_4->pitches[0]);
 FUNC_7(VAR_10,
   (VAR_5->gtt_offset + VAR_7->dspaddr_offset) |
   VAR_5->tiling_mode);





 VAR_8 = 0;
 VAR_9 = FUNC_0(FUNC_2(VAR_7->pipe)) & 0x0fff0fff;
 FUNC_7(VAR_10, VAR_8 | VAR_9);

 FUNC_3(VAR_7);
 FUNC_5(VAR_10);
 return 0;

err_unpin:
 FUNC_8(VAR_5);
err:
 return VAR_11;
}
