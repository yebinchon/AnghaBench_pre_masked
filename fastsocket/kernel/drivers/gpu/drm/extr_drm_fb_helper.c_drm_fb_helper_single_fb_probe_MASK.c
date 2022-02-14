
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


struct TYPE_13__ {int id; } ;
struct TYPE_12__ {scalar_t__ pixclock; } ;
struct fb_info {TYPE_6__ fix; int node; TYPE_5__ var; } ;
struct drm_fb_helper_surface_size {int surface_depth; int surface_bpp; unsigned int fb_width; unsigned int fb_height; scalar_t__ surface_width; scalar_t__ surface_height; } ;
struct drm_cmdline_mode {int bpp; scalar_t__ bpp_specified; } ;
struct drm_fb_helper_connector {struct drm_cmdline_mode cmdline_mode; } ;
struct drm_fb_helper {int connector_count; int crtc_count; int kernel_fb_list; TYPE_7__* dev; int fb; TYPE_4__* crtc_info; struct fb_info* fbdev; TYPE_2__* funcs; struct drm_fb_helper_connector** connector_info; } ;
struct drm_display_mode {scalar_t__ hdisplay; scalar_t__ vdisplay; } ;
struct TYPE_14__ {int dev; } ;
struct TYPE_10__ {int fb; scalar_t__ num_connectors; TYPE_1__* crtc; } ;
struct TYPE_11__ {TYPE_3__ mode_set; struct drm_display_mode* desired_mode; } ;
struct TYPE_9__ {int (* fb_probe ) (struct drm_fb_helper*,struct drm_fb_helper_surface_size*) ;} ;
struct TYPE_8__ {int gamma_size; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_1 ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct drm_fb_helper_surface_size*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (struct fb_info*) ;
 int FUNC_7 (char,int *) ;
 int FUNC_8 (struct drm_fb_helper*,struct drm_fb_helper_surface_size*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_9(struct drm_fb_helper *VAR_5,
      int VAR_6)
{
 int VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9;
 struct fb_info *VAR_10;
 struct drm_fb_helper_surface_size VAR_11;
 int VAR_12 = 0;

 FUNC_5(&VAR_11, 0, sizeof(struct drm_fb_helper_surface_size));
 VAR_11.surface_depth = 24;
 VAR_11.surface_bpp = 32;
 VAR_11.fb_width = (unsigned)-1;
 VAR_11.fb_height = (unsigned)-1;



 if (VAR_6 != VAR_11.surface_bpp)
  VAR_11.surface_depth = VAR_11.surface_bpp = VAR_6;


 for (VAR_9 = 0; VAR_9 < VAR_5->connector_count; VAR_9++) {
  struct drm_fb_helper_connector *VAR_13 = VAR_5->connector_info[VAR_9];
  struct drm_cmdline_mode *VAR_14;

  VAR_14 = &VAR_13->cmdline_mode;

  if (VAR_14->bpp_specified) {
   switch (VAR_14->bpp) {
   case 8:
    VAR_11.surface_depth = VAR_11.surface_bpp = 8;
    break;
   case 15:
    VAR_11.surface_depth = 15;
    VAR_11.surface_bpp = 16;
    break;
   case 16:
    VAR_11.surface_depth = VAR_11.surface_bpp = 16;
    break;
   case 24:
    VAR_11.surface_depth = VAR_11.surface_bpp = 24;
    break;
   case 32:
    VAR_11.surface_depth = 24;
    VAR_11.surface_bpp = 32;
    break;
   }
   break;
  }
 }

 VAR_8 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_5->crtc_count; VAR_9++) {
  struct drm_display_mode *VAR_15;
  VAR_15 = VAR_5->crtc_info[VAR_9].desired_mode;

  if (VAR_15) {
   if (VAR_12 == 0)
    VAR_12 = VAR_5->crtc_info[VAR_9].mode_set.crtc->gamma_size;
   if (VAR_15->hdisplay < VAR_11.fb_width)
    VAR_11.fb_width = VAR_15->hdisplay;
   if (VAR_15->vdisplay < VAR_11.fb_height)
    VAR_11.fb_height = VAR_15->vdisplay;
   if (VAR_15->hdisplay > VAR_11.surface_width)
    VAR_11.surface_width = VAR_15->hdisplay;
   if (VAR_15->vdisplay > VAR_11.surface_height)
    VAR_11.surface_height = VAR_15->vdisplay;
   VAR_8++;
  }
 }

 if (VAR_8 == 0 || VAR_11.fb_width == -1 || VAR_11.fb_height == -1) {


  FUNC_0("Cannot find any crtc or sizes - going 1024x768\n");
  VAR_11.fb_width = VAR_11.surface_width = 1024;
  VAR_11.fb_height = VAR_11.surface_height = 768;
 }


 VAR_7 = (*VAR_5->funcs->fb_probe)(VAR_5, &VAR_11);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_10 = VAR_5->fbdev;
 for (VAR_9 = 0; VAR_9 < VAR_5->crtc_count; VAR_9++)
  if (VAR_5->crtc_info[VAR_9].mode_set.num_connectors)
   VAR_5->crtc_info[VAR_9].mode_set.fb = VAR_5->fb;


 VAR_10->var.pixclock = 0;
 if (FUNC_6(VAR_10) < 0)
  return -VAR_0;

 FUNC_2(VAR_5->dev->dev, "fb%d: %s frame buffer device\n",
   VAR_10->node, VAR_10->fix.id);



 if (FUNC_4(&VAR_1)) {
  FUNC_2(VAR_5->dev->dev, "registered panic notifier\n");
  FUNC_1(&VAR_2,
            &VAR_3);
  FUNC_7('v', &VAR_4);
 }

 FUNC_3(&VAR_5->kernel_fb_list, &VAR_1);

 return 0;
}
