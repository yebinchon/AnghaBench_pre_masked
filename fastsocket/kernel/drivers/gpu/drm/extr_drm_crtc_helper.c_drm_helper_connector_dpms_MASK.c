
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder_helper_funcs {int (* dpms ) (struct drm_encoder*,int ) ;} ;
struct drm_encoder {struct drm_encoder_helper_funcs* helper_private; struct drm_crtc* crtc; } ;
struct drm_crtc_helper_funcs {int (* dpms ) (struct drm_crtc*,int ) ;} ;
struct drm_crtc {struct drm_crtc_helper_funcs* helper_private; } ;
struct drm_connector {int dpms; struct drm_encoder* encoder; } ;


 int FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (struct drm_encoder*) ;
 int FUNC_2 (struct drm_crtc*,int ) ;
 int FUNC_3 (struct drm_encoder*,int ) ;
 int FUNC_4 (struct drm_encoder*,int ) ;
 int FUNC_5 (struct drm_crtc*,int ) ;

void FUNC_6(struct drm_connector *VAR_0, int VAR_1)
{
 struct drm_encoder *VAR_2 = VAR_0->encoder;
 struct drm_crtc *VAR_3 = VAR_2 ? VAR_2->crtc : ((void*)0);
 int VAR_4;

 if (VAR_1 == VAR_0->dpms)
  return;

 VAR_4 = VAR_0->dpms;
 VAR_0->dpms = VAR_1;


 if (VAR_1 < VAR_4) {
  if (VAR_3) {
   struct drm_crtc_helper_funcs *VAR_5 = VAR_3->helper_private;
   if (VAR_5->dpms)
    (*VAR_5->dpms) (VAR_3,
           FUNC_0(VAR_3));
  }
  if (VAR_2) {
   struct drm_encoder_helper_funcs *VAR_6 = VAR_2->helper_private;
   if (VAR_6->dpms)
    (*VAR_6->dpms) (VAR_2,
       FUNC_1(VAR_2));
  }
 }


 if (VAR_1 > VAR_4) {
  if (VAR_2) {
   struct drm_encoder_helper_funcs *VAR_7 = VAR_2->helper_private;
   if (VAR_7->dpms)
    (*VAR_7->dpms) (VAR_2,
       FUNC_1(VAR_2));
  }
  if (VAR_3) {
   struct drm_crtc_helper_funcs *VAR_8 = VAR_3->helper_private;
   if (VAR_8->dpms)
    (*VAR_8->dpms) (VAR_3,
           FUNC_0(VAR_3));
  }
 }

 return;
}
