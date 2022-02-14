
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_mode_fb_cmd2 {int flags; int fb_id; int height; int width; } ;
struct drm_mode_config {TYPE_1__* funcs; int max_height; int min_height; int max_width; int min_width; } ;
struct TYPE_4__ {int id; } ;
struct drm_framebuffer {TYPE_2__ base; int filp_head; } ;
struct drm_file {int fbs_lock; int fbs; } ;
struct drm_device {struct drm_mode_config mode_config; } ;
struct TYPE_3__ {struct drm_framebuffer* (* fb_create ) (struct drm_device*,struct drm_file*,struct drm_mode_fb_cmd2*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct drm_framebuffer*) ;
 int FUNC_2 (struct drm_framebuffer*) ;
 int FUNC_3 (struct drm_device*,int ) ;
 int FUNC_4 (struct drm_mode_fb_cmd2*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct drm_framebuffer* FUNC_8 (struct drm_device*,struct drm_file*,struct drm_mode_fb_cmd2*) ;

int FUNC_9(struct drm_device *VAR_3,
      void *VAR_4, struct drm_file *VAR_5)
{
 struct drm_mode_fb_cmd2 *VAR_6 = VAR_4;
 struct drm_mode_config *VAR_7 = &VAR_3->mode_config;
 struct drm_framebuffer *VAR_8;
 int VAR_9;

 if (!FUNC_3(VAR_3, VAR_0))
  return -VAR_2;

 if (VAR_6->flags & ~VAR_1) {
  FUNC_0("bad framebuffer flags 0x%08x\n", VAR_6->flags);
  return -VAR_2;
 }

 if ((VAR_7->min_width > VAR_6->width) || (VAR_6->width > VAR_7->max_width)) {
  FUNC_0("bad framebuffer width %d, should be >= %d && <= %d\n",
     VAR_6->width, VAR_7->min_width, VAR_7->max_width);
  return -VAR_2;
 }
 if ((VAR_7->min_height > VAR_6->height) || (VAR_6->height > VAR_7->max_height)) {
  FUNC_0("bad framebuffer height %d, should be >= %d && <= %d\n",
     VAR_6->height, VAR_7->min_height, VAR_7->max_height);
  return -VAR_2;
 }

 VAR_9 = FUNC_4(VAR_6);
 if (VAR_9)
  return VAR_9;

 VAR_8 = VAR_3->mode_config.funcs->fb_create(VAR_3, VAR_5, VAR_6);
 if (FUNC_1(VAR_8)) {
  FUNC_0("could not create framebuffer\n");
  return FUNC_2(VAR_8);
 }

 FUNC_6(&VAR_5->fbs_lock);
 VAR_6->fb_id = VAR_8->base.id;
 FUNC_5(&VAR_8->filp_head, &VAR_5->fbs);
 FUNC_0("[FB:%d]\n", VAR_8->base.id);
 FUNC_7(&VAR_5->fbs_lock);


 return VAR_9;
}
