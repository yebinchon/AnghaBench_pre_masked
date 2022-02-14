
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dummy; } ;
struct drm_crtc {struct drm_device* dev; } ;
typedef int intel_limit_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct drm_crtc*,int ) ;

__attribute__((used)) static const intel_limit_t *FUNC_2(struct drm_crtc *VAR_9,
      int VAR_10)
{
 struct drm_device *VAR_11 = VAR_9->dev;
 const intel_limit_t *VAR_12;

 if (FUNC_1(VAR_9, VAR_2)) {
  if (FUNC_0(VAR_11)) {

   if (VAR_10 == 100000)
    VAR_12 = &VAR_6;
   else
    VAR_12 = &VAR_5;
  } else {
   if (VAR_10 == 100000)
    VAR_12 = &VAR_8;
   else
    VAR_12 = &VAR_7;
  }
 } else if (FUNC_1(VAR_9, VAR_0) ||
     FUNC_1(VAR_9, VAR_1))
  VAR_12 = &VAR_4;
 else
  VAR_12 = &VAR_3;

 return VAR_12;
}
