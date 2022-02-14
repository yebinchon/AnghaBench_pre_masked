
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {void (* destroy ) (struct drm_pending_event*) ;struct drm_file* file_priv; TYPE_2__* event; } ;
struct TYPE_7__ {int length; int type; } ;
struct TYPE_8__ {TYPE_2__ base; int user_data; } ;
struct drm_pending_vblank_event {TYPE_4__ base; TYPE_3__ event; } ;
struct drm_mode_object {int dummy; } ;
struct drm_mode_crtc_page_flip {int flags; scalar_t__ reserved; int user_data; int fb_id; int crtc_id; } ;
struct drm_framebuffer {int width; int height; } ;
struct drm_file {int event_space; } ;
struct drm_device {int event_lock; } ;
struct TYPE_6__ {int hdisplay; int vdisplay; } ;
struct drm_crtc {int x; int y; int mutex; struct drm_framebuffer* fb; TYPE_5__* funcs; scalar_t__ invert_dimensions; TYPE_1__ mode; } ;
struct TYPE_10__ {int (* page_flip ) (struct drm_crtc*,struct drm_framebuffer*,struct drm_pending_vblank_event*) ;} ;


 int FUNC_0 (char*,int,int,int,int,int,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 struct drm_framebuffer* FUNC_2 (struct drm_device*,int ) ;
 int FUNC_3 (struct drm_framebuffer*) ;
 struct drm_mode_object* FUNC_4 (struct drm_device*,int ,int ) ;
 int FUNC_5 (struct drm_pending_vblank_event*) ;
 struct drm_pending_vblank_event* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct drm_crtc* FUNC_9 (struct drm_mode_object*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (struct drm_crtc*,struct drm_framebuffer*,struct drm_pending_vblank_event*) ;
 int FUNC_13 (int,int) ;

int FUNC_14(struct drm_device *VAR_9,
        void *VAR_10, struct drm_file *VAR_11)
{
 struct drm_mode_crtc_page_flip *VAR_12 = VAR_10;
 struct drm_mode_object *VAR_13;
 struct drm_crtc *VAR_14;
 struct drm_framebuffer *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);
 struct drm_pending_vblank_event *VAR_17 = ((void*)0);
 unsigned long VAR_18;
 int VAR_19, VAR_20;
 int VAR_21 = -VAR_5;

 if (VAR_12->flags & ~VAR_3 ||
     VAR_12->reserved != 0)
  return -VAR_5;

 VAR_13 = FUNC_4(VAR_9, VAR_12->crtc_id, VAR_1);
 if (!VAR_13)
  return -VAR_5;
 VAR_14 = FUNC_9(VAR_13);

 FUNC_7(&VAR_14->mutex);
 if (VAR_14->fb == ((void*)0)) {




  VAR_21 = -VAR_4;
  goto out;
 }

 if (VAR_14->funcs->page_flip == ((void*)0))
  goto out;

 VAR_15 = FUNC_2(VAR_9, VAR_12->fb_id);
 if (!VAR_15)
  goto out;

 VAR_19 = VAR_14->mode.hdisplay;
 VAR_20 = VAR_14->mode.vdisplay;

 if (VAR_14->invert_dimensions)
  FUNC_13(VAR_19, VAR_20);

 if (VAR_19 > VAR_15->width ||
     VAR_20 > VAR_15->height ||
     VAR_14->x > VAR_15->width - VAR_19 ||
     VAR_14->y > VAR_15->height - VAR_20) {
  FUNC_0("Invalid fb size %ux%u for CRTC viewport %ux%u+%d+%d%s.\n",
         VAR_15->width, VAR_15->height, VAR_19, VAR_20, VAR_14->x, VAR_14->y,
         VAR_14->invert_dimensions ? " (inverted)" : "");
  VAR_21 = -VAR_7;
  goto out;
 }

 if (VAR_12->flags & VAR_2) {
  VAR_21 = -VAR_6;
  FUNC_10(&VAR_9->event_lock, VAR_18);
  if (VAR_11->event_space < sizeof VAR_17->event) {
   FUNC_11(&VAR_9->event_lock, VAR_18);
   goto out;
  }
  VAR_11->event_space -= sizeof VAR_17->event;
  FUNC_11(&VAR_9->event_lock, VAR_18);

  VAR_17 = FUNC_6(sizeof *VAR_17, VAR_8);
  if (VAR_17 == ((void*)0)) {
   FUNC_10(&VAR_9->event_lock, VAR_18);
   VAR_11->event_space += sizeof VAR_17->event;
   FUNC_11(&VAR_9->event_lock, VAR_18);
   goto out;
  }

  VAR_17->event.base.type = VAR_0;
  VAR_17->event.base.length = sizeof VAR_17->event;
  VAR_17->event.user_data = VAR_12->user_data;
  VAR_17->base.event = &VAR_17->event.base;
  VAR_17->base.file_priv = VAR_11;
  VAR_17->base.destroy =
   (void (*) (struct drm_pending_event *)) FUNC_5;
 }

 VAR_16 = VAR_14->fb;
 VAR_21 = VAR_14->funcs->page_flip(VAR_14, VAR_15, VAR_17);
 if (VAR_21) {
  if (VAR_12->flags & VAR_2) {
   FUNC_10(&VAR_9->event_lock, VAR_18);
   VAR_11->event_space += sizeof VAR_17->event;
   FUNC_11(&VAR_9->event_lock, VAR_18);
   FUNC_5(VAR_17);
  }

  VAR_16 = ((void*)0);
 } else {






  FUNC_1(VAR_14->fb != VAR_15);

  VAR_15 = ((void*)0);
 }

out:
 if (VAR_15)
  FUNC_3(VAR_15);
 if (VAR_16)
  FUNC_3(VAR_16);
 FUNC_8(&VAR_14->mutex);

 return VAR_21;
}
