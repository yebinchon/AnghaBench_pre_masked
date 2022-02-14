
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_ring_buffer {int dummy; } ;
struct intel_crtc {int dspaddr_offset; scalar_t__ plane; } ;
struct drm_i915_private {struct intel_ring_buffer* ring; } ;
struct drm_i915_gem_object {int gtt_offset; } ;
struct drm_framebuffer {int* pitches; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_crtc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (struct intel_crtc*) ;
 int FUNC_2 (struct drm_device*,struct drm_i915_gem_object*,struct intel_ring_buffer*) ;
 int FUNC_3 (struct intel_ring_buffer*) ;
 int FUNC_4 (struct intel_ring_buffer*,int) ;
 int FUNC_5 (struct intel_ring_buffer*,int) ;
 int FUNC_6 (struct drm_i915_gem_object*) ;
 struct intel_crtc* FUNC_7 (struct drm_crtc*) ;

__attribute__((used)) static int FUNC_8(struct drm_device *VAR_6,
     struct drm_crtc *VAR_7,
     struct drm_framebuffer *VAR_8,
     struct drm_i915_gem_object *VAR_9)
{
 struct drm_i915_private *VAR_10 = VAR_6->dev_private;
 struct intel_crtc *VAR_11 = FUNC_7(VAR_7);
 u32 VAR_12;
 struct intel_ring_buffer *VAR_13 = &VAR_10->ring[VAR_5];
 int VAR_14;

 VAR_14 = FUNC_2(VAR_6, VAR_9, VAR_13);
 if (VAR_14)
  goto err;

 VAR_14 = FUNC_4(VAR_13, 6);
 if (VAR_14)
  goto err_unpin;

 if (VAR_11->plane)
  VAR_12 = VAR_4;
 else
  VAR_12 = VAR_3;
 FUNC_5(VAR_13, VAR_2 | VAR_12);
 FUNC_5(VAR_13, VAR_1);
 FUNC_5(VAR_13, VAR_0 |
   FUNC_0(VAR_11->plane));
 FUNC_5(VAR_13, VAR_8->pitches[0]);
 FUNC_5(VAR_13, VAR_9->gtt_offset + VAR_11->dspaddr_offset);
 FUNC_5(VAR_13, VAR_1);

 FUNC_1(VAR_11);
 FUNC_3(VAR_13);
 return 0;

err_unpin:
 FUNC_6(VAR_9);
err:
 return VAR_14;
}
