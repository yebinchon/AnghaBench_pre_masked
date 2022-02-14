
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct drm_framebuffer {int height; int width; int depth; int * pitches; } ;
struct TYPE_13__ {TYPE_4__* obj; struct drm_framebuffer base; } ;
struct TYPE_14__ {struct fb_info* fbdev; struct drm_framebuffer* fb; struct drm_device* dev; } ;
struct intel_fbdev {TYPE_6__ ifb; TYPE_7__ helper; } ;
struct TYPE_9__ {int smem_len; scalar_t__ smem_start; int id; } ;
struct fb_info {int flags; int screen_size; int screen_base; TYPE_2__ fix; int cmap; int * fbops; struct intel_fbdev* par; } ;
struct drm_mode_fb_cmd2 {int width; int height; int* pitches; int pixel_format; } ;
struct TYPE_10__ {scalar_t__ mappable_base; } ;
struct drm_i915_private {TYPE_3__ gtt; } ;
struct drm_i915_gem_object {int base; scalar_t__ gtt_offset; } ;
struct drm_fb_helper_surface_size {int surface_bpp; int surface_width; int surface_height; int fb_height; int fb_width; int surface_depth; } ;
struct drm_fb_helper {int dummy; } ;
struct TYPE_8__ {scalar_t__ fb_base; } ;
struct drm_device {int struct_mutex; TYPE_5__* pdev; TYPE_1__ mode_config; struct drm_i915_private* dev_private; } ;
struct device {int dummy; } ;
struct TYPE_12__ {struct device dev; } ;
struct TYPE_11__ {scalar_t__ stolen; } ;


 void* FUNC_0 (int,int) ;
 int FUNC_1 (char*,int ,int ,scalar_t__,struct drm_i915_gem_object*) ;
 int FUNC_2 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct fb_info*,int ,int ) ;
 int FUNC_4 (struct fb_info*,TYPE_7__*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int,int ) ;
 struct fb_info* FUNC_8 (int ,struct device*) ;
 struct drm_i915_gem_object* FUNC_9 (struct drm_device*,int) ;
 struct drm_i915_gem_object* FUNC_10 (struct drm_device*,int) ;
 int FUNC_11 (struct drm_i915_gem_object*) ;
 int FUNC_12 (struct drm_device*,TYPE_6__*,struct drm_mode_fb_cmd2*,struct drm_i915_gem_object*) ;
 int FUNC_13 (struct drm_device*,struct drm_i915_gem_object*,int *) ;
 int VAR_5 ;
 int FUNC_14 (scalar_t__,int) ;
 int FUNC_15 (int ,int ,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ,char*) ;
 int FUNC_19 (TYPE_5__*,struct fb_info*) ;

__attribute__((used)) static int FUNC_20(struct drm_fb_helper *VAR_6,
     struct drm_fb_helper_surface_size *VAR_7)
{
 struct intel_fbdev *VAR_8 = (struct intel_fbdev *)VAR_6;
 struct drm_device *VAR_9 = VAR_8->helper.dev;
 struct drm_i915_private *VAR_10 = VAR_9->dev_private;
 struct fb_info *VAR_11;
 struct drm_framebuffer *VAR_12;
 struct drm_mode_fb_cmd2 VAR_13 = {};
 struct drm_i915_gem_object *VAR_14;
 struct device *VAR_15 = &VAR_9->pdev->dev;
 int VAR_16, VAR_17;


 if (VAR_7->surface_bpp == 24)
  VAR_7->surface_bpp = 32;

 VAR_13.width = VAR_7->surface_width;
 VAR_13.height = VAR_7->surface_height;

 VAR_13.pitches[0] = FUNC_0(VAR_13.width * ((VAR_7->surface_bpp + 7) /
            8), 64);
 VAR_13.pixel_format = FUNC_6(VAR_7->surface_bpp,
         VAR_7->surface_depth);

 VAR_16 = VAR_13.pitches[0] * VAR_13.height;
 VAR_16 = FUNC_0(VAR_16, VAR_4);
 VAR_14 = FUNC_10(VAR_9, VAR_16);
 if (VAR_14 == ((void*)0))
  VAR_14 = FUNC_9(VAR_9, VAR_16);
 if (!VAR_14) {
  FUNC_2("failed to allocate framebuffer\n");
  VAR_17 = -VAR_0;
  goto out;
 }

 FUNC_16(&VAR_9->struct_mutex);


 VAR_17 = FUNC_13(VAR_9, VAR_14, ((void*)0));
 if (VAR_17) {
  FUNC_2("failed to pin fb: %d\n", VAR_17);
  goto out_unref;
 }

 VAR_11 = FUNC_8(0, VAR_15);
 if (!VAR_11) {
  VAR_17 = -VAR_0;
  goto out_unpin;
 }

 VAR_11->par = VAR_8;

 VAR_17 = FUNC_12(VAR_9, &VAR_8->ifb, &VAR_13, VAR_14);
 if (VAR_17)
  goto out_unpin;

 VAR_12 = &VAR_8->ifb.base;

 VAR_8->helper.fb = VAR_12;
 VAR_8->helper.fbdev = VAR_11;

 FUNC_18(VAR_11->fix.id, "inteldrmfb");

 VAR_11->flags = VAR_3 | VAR_2;
 VAR_11->fbops = &VAR_5;

 VAR_17 = FUNC_7(&VAR_11->cmap, 256, 0);
 if (VAR_17) {
  VAR_17 = -VAR_0;
  goto out_unpin;
 }

 VAR_11->fix.smem_start = VAR_9->mode_config.fb_base + VAR_14->gtt_offset;
 VAR_11->fix.smem_len = VAR_16;

 VAR_11->screen_base =
  FUNC_14(VAR_10->gtt.mappable_base + VAR_14->gtt_offset,
      VAR_16);
 if (!VAR_11->screen_base) {
  VAR_17 = -VAR_1;
  goto out_unpin;
 }
 VAR_11->screen_size = VAR_16;



 FUNC_3(VAR_11, VAR_12->pitches[0], VAR_12->depth);
 FUNC_4(VAR_11, &VAR_8->helper, VAR_7->fb_width, VAR_7->fb_height);





 if (VAR_8->ifb.obj->stolen)
  FUNC_15(VAR_11->screen_base, 0, VAR_11->screen_size);



 FUNC_1("allocated %dx%d fb: 0x%08x, bo %p\n",
        VAR_12->width, VAR_12->height,
        VAR_14->gtt_offset, VAR_14);


 FUNC_17(&VAR_9->struct_mutex);
 FUNC_19(VAR_9->pdev, VAR_11);
 return 0;

out_unpin:
 FUNC_11(VAR_14);
out_unref:
 FUNC_5(&VAR_14->base);
 FUNC_17(&VAR_9->struct_mutex);
out:
 return VAR_17;
}
