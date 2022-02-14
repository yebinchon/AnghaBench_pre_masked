
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_intel_overlay_put_image {int flags; int src_height; int src_width; int stride_UV; int offset_Y; int stride_Y; int offset_V; int offset_U; } ;
struct TYPE_2__ {int size; } ;
struct drm_i915_gem_object {TYPE_1__ base; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;

 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct drm_device *VAR_8,
        struct drm_intel_overlay_put_image *VAR_9,
        struct drm_i915_gem_object *VAR_10)
{
 int VAR_11 = FUNC_5(VAR_9->flags);
 int VAR_12 = FUNC_6(VAR_9->flags);
 u32 VAR_13;
 int VAR_14;
 u32 VAR_15;


 if (FUNC_0(VAR_8) || FUNC_2(VAR_8)) {
  if (VAR_9->src_height > VAR_3 ||
      VAR_9->src_width > VAR_5)
   return -VAR_0;
 } else {
  if (VAR_9->src_height > VAR_2 ||
      VAR_9->src_width > VAR_4)
   return -VAR_0;
 }


 if (VAR_9->src_height < VAR_7*4 ||
     VAR_9->src_width < VAR_6*4)
  return -VAR_0;


 switch (VAR_9->flags & VAR_1) {
 case 130:

  return -VAR_0;

 case 129:
  if (VAR_12 != 1)
   return -VAR_0;

  VAR_14 = FUNC_3(VAR_9->flags);
  if (VAR_14 < 0)
   return VAR_14;


  VAR_9->stride_UV = 0;
  VAR_9->offset_U = 0;
  VAR_9->offset_V = 0;

  if (VAR_9->offset_Y % VAR_14)
   return -VAR_0;
  break;

 case 128:
  if (VAR_12 < 0 || VAR_11 < 0)
   return -VAR_0;

  break;

 default:
  return -VAR_0;
 }

 if (VAR_9->src_width % VAR_11)
  return -VAR_0;


 if (FUNC_2(VAR_8) || FUNC_0(VAR_8))
  VAR_13 = 255;
 else
  VAR_13 = 63;

 if (VAR_9->stride_Y & VAR_13 || VAR_9->stride_UV & VAR_13)
  return -VAR_0;
 if (FUNC_1(VAR_8) && VAR_9->stride_Y < 512)
  return -VAR_0;

 VAR_15 = (VAR_9->flags & VAR_1) == 128 ?
  4096 : 8192;
 if (VAR_9->stride_Y > VAR_15 || VAR_9->stride_UV > 2*1024)
  return -VAR_0;


 switch (VAR_9->flags & VAR_1) {
 case 130:
 case 129:

  if (FUNC_4(VAR_9->flags, VAR_9->src_width) > VAR_9->stride_Y)
   return -VAR_0;

  VAR_15 = VAR_9->stride_Y*VAR_9->src_height;
  if (VAR_9->offset_Y + VAR_15 > VAR_10->base.size)
   return -VAR_0;
  break;

 case 128:
  if (VAR_9->src_width > VAR_9->stride_Y)
   return -VAR_0;
  if (VAR_9->src_width/VAR_11 > VAR_9->stride_UV)
   return -VAR_0;

  VAR_15 = VAR_9->stride_Y * VAR_9->src_height;
  if (VAR_9->offset_Y + VAR_15 > VAR_10->base.size)
   return -VAR_0;

  VAR_15 = VAR_9->stride_UV * (VAR_9->src_height / VAR_12);
  if (VAR_9->offset_U + VAR_15 > VAR_10->base.size ||
      VAR_9->offset_V + VAR_15 > VAR_10->base.size)
   return -VAR_0;
  break;
 }

 return 0;
}
