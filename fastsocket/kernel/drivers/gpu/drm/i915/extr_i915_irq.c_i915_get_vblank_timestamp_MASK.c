
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct drm_i915_private {int num_pipe; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_crtc {int enabled; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct drm_device*,int,int*,struct timeval*,unsigned int,struct drm_crtc*) ;
 struct drm_crtc* FUNC_3 (struct drm_device*,int) ;

__attribute__((used)) static int FUNC_4(struct drm_device *VAR_2, int VAR_3,
         int *VAR_4,
         struct timeval *VAR_5,
         unsigned VAR_6)
{
 struct drm_i915_private *VAR_7 = VAR_2->dev_private;
 struct drm_crtc *VAR_8;

 if (VAR_3 < 0 || VAR_3 >= VAR_7->num_pipe) {
  FUNC_1("Invalid crtc %d\n", VAR_3);
  return -VAR_1;
 }


 VAR_8 = FUNC_3(VAR_2, VAR_3);
 if (VAR_8 == ((void*)0)) {
  FUNC_1("Invalid crtc %d\n", VAR_3);
  return -VAR_1;
 }

 if (!VAR_8->enabled) {
  FUNC_0("crtc %d is disabled\n", VAR_3);
  return -VAR_0;
 }


 return FUNC_2(VAR_2, VAR_3, VAR_4,
           VAR_5, VAR_6,
           VAR_8);
}
