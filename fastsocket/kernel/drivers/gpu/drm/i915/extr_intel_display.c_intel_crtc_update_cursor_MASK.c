
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_crtc {int pipe; int cursor_x; int cursor_y; int cursor_addr; scalar_t__ cursor_width; scalar_t__ cursor_height; int cursor_visible; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_crtc {TYPE_1__* fb; scalar_t__ enabled; struct drm_device* dev; } ;
struct TYPE_2__ {scalar_t__ height; scalar_t__ width; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (struct drm_device*) ;
 scalar_t__ FUNC_4 (struct drm_device*) ;
 scalar_t__ FUNC_5 (struct drm_device*) ;
 scalar_t__ FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct drm_crtc*,int) ;
 int FUNC_8 (struct drm_crtc*,int) ;
 int FUNC_9 (struct drm_crtc*,int) ;
 struct intel_crtc* FUNC_10 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_11(struct drm_crtc *VAR_3,
         bool VAR_4)
{
 struct drm_device *VAR_5 = VAR_3->dev;
 struct drm_i915_private *VAR_6 = VAR_5->dev_private;
 struct intel_crtc *VAR_7 = FUNC_10(VAR_3);
 int VAR_8 = VAR_7->pipe;
 int VAR_9 = VAR_7->cursor_x;
 int VAR_10 = VAR_7->cursor_y;
 u32 VAR_11, VAR_12;
 bool VAR_13;

 VAR_12 = 0;

 if (VAR_4 && VAR_3->enabled && VAR_3->fb) {
  VAR_11 = VAR_7->cursor_addr;
  if (VAR_9 > (int) VAR_3->fb->width)
   VAR_11 = 0;

  if (VAR_10 > (int) VAR_3->fb->height)
   VAR_11 = 0;
 } else
  VAR_11 = 0;

 if (VAR_9 < 0) {
  if (VAR_9 + VAR_7->cursor_width < 0)
   VAR_11 = 0;

  VAR_12 |= VAR_0 << VAR_1;
  VAR_9 = -VAR_9;
 }
 VAR_12 |= VAR_9 << VAR_1;

 if (VAR_10 < 0) {
  if (VAR_10 + VAR_7->cursor_height < 0)
   VAR_11 = 0;

  VAR_12 |= VAR_0 << VAR_2;
  VAR_10 = -VAR_10;
 }
 VAR_12 |= VAR_10 << VAR_2;

 VAR_13 = VAR_11 != 0;
 if (!VAR_13 && !VAR_7->cursor_visible)
  return;

 if (FUNC_6(VAR_5) || FUNC_4(VAR_5)) {
  FUNC_2(FUNC_1(VAR_8), VAR_12);
  FUNC_9(VAR_3, VAR_11);
 } else {
  FUNC_2(FUNC_0(VAR_8), VAR_12);
  if (FUNC_3(VAR_5) || FUNC_5(VAR_5))
   FUNC_7(VAR_3, VAR_11);
  else
   FUNC_8(VAR_3, VAR_11);
 }
}
