
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dummy; } ;
struct drm_crtc {struct drm_device* dev; } ;
typedef int intel_limit_t ;


 scalar_t__ FUNC_0 (struct drm_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 scalar_t__ FUNC_3 (struct drm_device*) ;
 scalar_t__ FUNC_4 (struct drm_device*) ;
 int * FUNC_5 (struct drm_crtc*) ;
 int * FUNC_6 (struct drm_crtc*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_7 (struct drm_crtc*,int ) ;

__attribute__((used)) static const intel_limit_t *FUNC_8(struct drm_crtc *VAR_12, int VAR_13)
{
 struct drm_device *VAR_14 = VAR_12->dev;
 const intel_limit_t *VAR_15;

 if (FUNC_0(VAR_14))
  VAR_15 = FUNC_6(VAR_12, VAR_13);
 else if (FUNC_1(VAR_14)) {
  VAR_15 = FUNC_5(VAR_12);
 } else if (FUNC_3(VAR_14)) {
  if (FUNC_7(VAR_12, VAR_2))
   VAR_15 = &VAR_7;
  else
   VAR_15 = &VAR_8;
 } else if (FUNC_4(VAR_14)) {
  if (FUNC_7(VAR_12, VAR_0))
   VAR_15 = &VAR_9;
  else if (FUNC_7(VAR_12, VAR_1))
   VAR_15 = &VAR_11;
  else
   VAR_15 = &VAR_10;
 } else if (!FUNC_2(VAR_14)) {
  if (FUNC_7(VAR_12, VAR_2))
   VAR_15 = &VAR_5;
  else
   VAR_15 = &VAR_6;
 } else {
  if (FUNC_7(VAR_12, VAR_2))
   VAR_15 = &VAR_4;
  else
   VAR_15 = &VAR_3;
 }
 return VAR_15;
}
