
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_set_config {int mode_changed; int fb_changed; } ;
struct drm_mode_set {scalar_t__ x; scalar_t__ y; int * mode; TYPE_2__* crtc; TYPE_1__* fb; int num_connectors; int * connectors; } ;
struct TYPE_4__ {scalar_t__ x; scalar_t__ y; int mode; TYPE_1__* fb; } ;
struct TYPE_3__ {scalar_t__ depth; scalar_t__ bits_per_pixel; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct drm_mode_set *VAR_0,
          struct intel_set_config *VAR_1)
{



 if (VAR_0->connectors != ((void*)0) &&
     FUNC_3(VAR_0->crtc, *VAR_0->connectors,
      VAR_0->num_connectors)) {
   VAR_1->mode_changed = 1;
 } else if (VAR_0->crtc->fb != VAR_0->fb) {

  if (VAR_0->crtc->fb == ((void*)0)) {
   FUNC_0("crtc has no fb, full mode set\n");
   VAR_1->mode_changed = 1;
  } else if (VAR_0->fb == ((void*)0)) {
   VAR_1->mode_changed = 1;
  } else if (VAR_0->fb->depth != VAR_0->crtc->fb->depth) {
   VAR_1->mode_changed = 1;
  } else if (VAR_0->fb->bits_per_pixel !=
      VAR_0->crtc->fb->bits_per_pixel) {
   VAR_1->mode_changed = 1;
  } else {
   VAR_1->fb_changed = 1;
  }
 }

 if (VAR_0->fb && (VAR_0->x != VAR_0->crtc->x || VAR_0->y != VAR_0->crtc->y))
  VAR_1->fb_changed = 1;

 if (VAR_0->mode && !FUNC_2(VAR_0->mode, &VAR_0->crtc->mode)) {
  FUNC_0("modes are different, full mode set\n");
  FUNC_1(&VAR_0->crtc->mode);
  FUNC_1(VAR_0->mode);
  VAR_1->mode_changed = 1;
 }
}
