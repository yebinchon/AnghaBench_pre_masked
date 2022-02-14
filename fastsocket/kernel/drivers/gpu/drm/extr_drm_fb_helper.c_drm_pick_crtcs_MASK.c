
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_fb_helper_crtc {int dummy; } ;
struct drm_fb_helper_connector {struct drm_connector* connector; } ;
struct drm_fb_helper {int connector_count; int crtc_count; struct drm_fb_helper_crtc* crtc_info; struct drm_fb_helper_connector** connector_info; struct drm_device* dev; } ;
struct drm_encoder {int possible_crtcs; } ;
struct drm_display_mode {int dummy; } ;
struct TYPE_2__ {int num_connector; } ;
struct drm_device {TYPE_1__ mode_config; } ;
struct drm_connector_helper_funcs {struct drm_encoder* (* best_encoder ) (struct drm_connector*) ;} ;
struct drm_connector {scalar_t__ status; struct drm_connector_helper_funcs* helper_private; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct drm_fb_helper_connector*) ;
 scalar_t__ FUNC_1 (struct drm_fb_helper_connector*,int,int) ;
 int FUNC_2 (struct drm_display_mode*,struct drm_display_mode*) ;
 int FUNC_3 (struct drm_fb_helper_crtc**) ;
 struct drm_fb_helper_crtc** FUNC_4 (int,int ) ;
 int FUNC_5 (struct drm_fb_helper_crtc**,struct drm_fb_helper_crtc**,int) ;
 struct drm_encoder* FUNC_6 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_7(struct drm_fb_helper *VAR_2,
     struct drm_fb_helper_crtc **VAR_3,
     struct drm_display_mode **VAR_4,
     int VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8, VAR_9;
 struct drm_device *VAR_10 = VAR_2->dev;
 struct drm_connector *VAR_11;
 struct drm_connector_helper_funcs *VAR_12;
 struct drm_encoder *VAR_13;
 struct drm_fb_helper_crtc *VAR_14;
 int VAR_15, VAR_16, VAR_17;
 struct drm_fb_helper_crtc **VAR_18, *VAR_19;
 struct drm_fb_helper_connector *VAR_20;

 if (VAR_5 == VAR_2->connector_count)
  return 0;

 VAR_20 = VAR_2->connector_info[VAR_5];
 VAR_11 = VAR_20->connector;

 VAR_3[VAR_5] = ((void*)0);
 VAR_14 = ((void*)0);
 VAR_16 = FUNC_7(VAR_2, VAR_3, VAR_4, VAR_5+1, VAR_6, VAR_7);
 if (VAR_4[VAR_5] == ((void*)0))
  return VAR_16;

 VAR_18 = FUNC_4(VAR_10->mode_config.num_connector *
   sizeof(struct drm_fb_helper_crtc *), VAR_0);
 if (!VAR_18)
  return VAR_16;

 VAR_15 = 1;
 if (VAR_11->status == VAR_1)
  VAR_15++;
 if (FUNC_0(VAR_20))
  VAR_15++;
 if (FUNC_1(VAR_20, VAR_6, VAR_7))
  VAR_15++;

 VAR_12 = VAR_11->helper_private;
 VAR_13 = VAR_12->best_encoder(VAR_11);
 if (!VAR_13)
  goto out;



 for (VAR_8 = 0; VAR_8 < VAR_2->crtc_count; VAR_8++) {
  VAR_19 = &VAR_2->crtc_info[VAR_8];

  if ((VAR_13->possible_crtcs & (1 << VAR_8)) == 0)
   continue;

  for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
   if (VAR_3[VAR_9] == VAR_19)
    break;

  if (VAR_9 < VAR_5) {

   if (VAR_2->crtc_count > 1)
    continue;

   if (!FUNC_2(VAR_4[VAR_9], VAR_4[VAR_5]))
    continue;
  }

  VAR_18[VAR_5] = VAR_19;
  FUNC_5(VAR_18, VAR_3, VAR_5 * sizeof(struct drm_fb_helper_crtc *));
  VAR_17 = VAR_15 + FUNC_7(VAR_2, VAR_18, VAR_4, VAR_5 + 1,
        VAR_6, VAR_7);
  if (VAR_17 > VAR_16) {
   VAR_14 = VAR_19;
   VAR_16 = VAR_17;
   FUNC_5(VAR_3, VAR_18,
          VAR_10->mode_config.num_connector *
          sizeof(struct drm_fb_helper_crtc *));
  }
 }
out:
 FUNC_3(VAR_18);
 return VAR_16;
}
