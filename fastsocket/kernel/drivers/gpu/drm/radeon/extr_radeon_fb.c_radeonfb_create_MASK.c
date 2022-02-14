
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {struct fb_info* fbdev; struct drm_framebuffer* fb; } ;
struct drm_framebuffer {unsigned long* pitches; unsigned long depth; } ;
struct TYPE_11__ {struct drm_framebuffer base; } ;
struct radeon_fbdev {TYPE_6__ helper; TYPE_5__ rfb; struct radeon_device* rdev; } ;
struct TYPE_9__ {unsigned long vram_start; unsigned long aper_base; } ;
struct radeon_device {TYPE_4__* ddev; TYPE_3__ mc; TYPE_1__* pdev; } ;
struct radeon_bo {int * kptr; } ;
struct TYPE_8__ {unsigned long smem_start; void* smem_len; int id; } ;
struct fb_info {int flags; TYPE_2__ fix; int cmap; int * screen_base; void* screen_size; int * fbops; struct radeon_fbdev* par; } ;
struct drm_mode_fb_cmd2 {int pixel_format; int height; int width; } ;
struct drm_gem_object {int dummy; } ;
struct drm_fb_helper_surface_size {int surface_bpp; int fb_height; int fb_width; int surface_depth; int surface_height; int surface_width; } ;
struct drm_fb_helper {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_10__ {int pdev; } ;
struct TYPE_7__ {struct device dev; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct fb_info*,unsigned long,unsigned long) ;
 int FUNC_4 (struct fb_info*,TYPE_6__*,int ,int ) ;
 int FUNC_5 (struct drm_framebuffer*) ;
 int FUNC_6 (struct drm_framebuffer*) ;
 int FUNC_7 (struct drm_gem_object*) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int *,int,int ) ;
 struct fb_info* FUNC_10 (int ,struct device*) ;
 struct radeon_bo* FUNC_11 (struct drm_gem_object*) ;
 int FUNC_12 (struct drm_framebuffer*) ;
 int FUNC_13 (int *,int,void*) ;
 unsigned long FUNC_14 (struct radeon_bo*) ;
 void* FUNC_15 (struct radeon_bo*) ;
 int FUNC_16 (TYPE_4__*,TYPE_5__*,struct drm_mode_fb_cmd2*,struct drm_gem_object*) ;
 int FUNC_17 (struct radeon_fbdev*,struct drm_mode_fb_cmd2*,struct drm_gem_object**) ;
 int VAR_4 ;
 int FUNC_18 (int ,char*) ;
 int FUNC_19 (int ,struct fb_info*) ;

__attribute__((used)) static int FUNC_20(struct drm_fb_helper *VAR_5,
      struct drm_fb_helper_surface_size *VAR_6)
{
 struct radeon_fbdev *VAR_7 = (struct radeon_fbdev *)VAR_5;
 struct radeon_device *VAR_8 = VAR_7->rdev;
 struct fb_info *VAR_9;
 struct drm_framebuffer *VAR_10 = ((void*)0);
 struct drm_mode_fb_cmd2 VAR_11;
 struct drm_gem_object *VAR_12 = ((void*)0);
 struct radeon_bo *VAR_13 = ((void*)0);
 struct device *VAR_14 = &VAR_8->pdev->dev;
 int VAR_15;
 unsigned long VAR_16;

 VAR_11.width = VAR_6->surface_width;
 VAR_11.height = VAR_6->surface_height;


 if ((VAR_6->surface_bpp == 24) && FUNC_0(VAR_8))
  VAR_6->surface_bpp = 32;

 VAR_11.pixel_format = FUNC_8(VAR_6->surface_bpp,
         VAR_6->surface_depth);

 VAR_15 = FUNC_17(VAR_7, &VAR_11, &VAR_12);
 if (VAR_15) {
  FUNC_1("failed to create fbcon object %d\n", VAR_15);
  return VAR_15;
 }

 VAR_13 = FUNC_11(VAR_12);


 VAR_9 = FUNC_10(0, VAR_14);
 if (VAR_9 == ((void*)0)) {
  VAR_15 = -VAR_0;
  goto out_unref;
 }

 VAR_9->par = VAR_7;

 VAR_15 = FUNC_16(VAR_8->ddev, &VAR_7->rfb, &VAR_11, VAR_12);
 if (VAR_15) {
  FUNC_1("failed to initalise framebuffer %d\n", VAR_15);
  goto out_unref;
 }

 VAR_10 = &VAR_7->rfb.base;


 VAR_7->helper.fb = VAR_10;
 VAR_7->helper.fbdev = VAR_9;

 FUNC_13(VAR_13->kptr, 0x0, FUNC_15(VAR_13));

 FUNC_18(VAR_9->fix.id, "radeondrmfb");

 FUNC_3(VAR_9, VAR_10->pitches[0], VAR_10->depth);

 VAR_9->flags = VAR_3 | VAR_2;
 VAR_9->fbops = &VAR_4;

 VAR_16 = FUNC_14(VAR_13) - VAR_8->mc.vram_start;
 VAR_9->fix.smem_start = VAR_8->mc.aper_base + VAR_16;
 VAR_9->fix.smem_len = FUNC_15(VAR_13);
 VAR_9->screen_base = VAR_13->kptr;
 VAR_9->screen_size = FUNC_15(VAR_13);

 FUNC_4(VAR_9, &VAR_7->helper, VAR_6->fb_width, VAR_6->fb_height);



 if (VAR_9->screen_base == ((void*)0)) {
  VAR_15 = -VAR_1;
  goto out_unref;
 }

 VAR_15 = FUNC_9(&VAR_9->cmap, 256, 0);
 if (VAR_15) {
  VAR_15 = -VAR_0;
  goto out_unref;
 }

 FUNC_2("fb mappable at 0x%lX\n", VAR_9->fix.smem_start);
 FUNC_2("vram apper at 0x%lX\n", (unsigned long)VAR_8->mc.aper_base);
 FUNC_2("size %lu\n", (unsigned long)FUNC_15(VAR_13));
 FUNC_2("fb depth is %d\n", VAR_10->depth);
 FUNC_2("   pitch is %d\n", VAR_10->pitches[0]);

 FUNC_19(VAR_8->ddev->pdev, VAR_9);
 return 0;

out_unref:
 if (VAR_13) {

 }
 if (VAR_10 && VAR_15) {
  FUNC_7(VAR_12);
  FUNC_6(VAR_10);
  FUNC_5(VAR_10);
  FUNC_12(VAR_10);
 }
 return VAR_15;
}
