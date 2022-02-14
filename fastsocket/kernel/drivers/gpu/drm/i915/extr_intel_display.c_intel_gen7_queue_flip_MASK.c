
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct intel_ring_buffer {int dummy; } ;
struct intel_crtc {int plane; int dspaddr_offset; } ;
struct drm_i915_private {struct intel_ring_buffer* ring; } ;
struct drm_i915_gem_object {int tiling_mode; int gtt_offset; } ;
struct drm_framebuffer {int* pitches; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_crtc {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct intel_crtc*) ;
 int FUNC_2 (struct drm_device*,struct drm_i915_gem_object*,struct intel_ring_buffer*) ;
 int FUNC_3 (struct intel_ring_buffer*) ;
 int FUNC_4 (struct intel_ring_buffer*,int) ;
 int FUNC_5 (struct intel_ring_buffer*,int) ;
 int FUNC_6 (struct drm_i915_gem_object*) ;
 struct intel_crtc* FUNC_7 (struct drm_crtc*) ;

__attribute__((used)) static int FUNC_8(struct drm_device *VAR_7,
     struct drm_crtc *VAR_8,
     struct drm_framebuffer *VAR_9,
     struct drm_i915_gem_object *VAR_10)
{
 struct drm_i915_private *VAR_11 = VAR_7->dev_private;
 struct intel_crtc *VAR_12 = FUNC_7(VAR_8);
 struct intel_ring_buffer *VAR_13 = &VAR_11->ring[VAR_0];
 uint32_t VAR_14 = 0;
 int VAR_15;

 VAR_15 = FUNC_2(VAR_7, VAR_10, VAR_13);
 if (VAR_15)
  goto err;

 switch(VAR_12->plane) {
 case 130:
  VAR_14 = VAR_3;
  break;
 case 129:
  VAR_14 = VAR_4;
  break;
 case 128:
  VAR_14 = VAR_5;
  break;
 default:
  FUNC_0(1, "unknown plane in flip command\n");
  VAR_15 = -VAR_1;
  goto err_unpin;
 }

 VAR_15 = FUNC_4(VAR_13, 4);
 if (VAR_15)
  goto err_unpin;

 FUNC_5(VAR_13, VAR_2 | VAR_14);
 FUNC_5(VAR_13, (VAR_9->pitches[0] | VAR_10->tiling_mode));
 FUNC_5(VAR_13, VAR_10->gtt_offset + VAR_12->dspaddr_offset);
 FUNC_5(VAR_13, (VAR_6));

 FUNC_1(VAR_12);
 FUNC_3(VAR_13);
 return 0;

err_unpin:
 FUNC_6(VAR_10);
err:
 return VAR_15;
}
