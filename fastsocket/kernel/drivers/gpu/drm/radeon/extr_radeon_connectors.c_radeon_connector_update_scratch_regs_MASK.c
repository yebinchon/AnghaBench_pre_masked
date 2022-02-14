
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {scalar_t__ is_atom_bios; } ;
struct drm_mode_object {int dummy; } ;
struct drm_encoder {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector_helper_funcs {struct drm_encoder* (* best_encoder ) (struct drm_connector*) ;} ;
struct drm_connector {scalar_t__* encoder_ids; struct drm_device* dev; struct drm_connector_helper_funcs* helper_private; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct drm_mode_object* FUNC_0 (struct drm_device*,scalar_t__,int ) ;
 struct drm_encoder* FUNC_1 (struct drm_mode_object*) ;
 int FUNC_2 (struct drm_connector*,struct drm_encoder*,int) ;
 int FUNC_3 (struct drm_connector*,struct drm_encoder*,int) ;
 struct drm_encoder* FUNC_4 (struct drm_connector*) ;

__attribute__((used)) static void
FUNC_5(struct drm_connector *VAR_3, enum drm_connector_status VAR_4)
{
 struct drm_device *VAR_5 = VAR_3->dev;
 struct radeon_device *VAR_6 = VAR_5->dev_private;
 struct drm_encoder *VAR_7 = ((void*)0);
 struct drm_encoder *VAR_8 = ((void*)0);
 struct drm_connector_helper_funcs *VAR_9 = VAR_3->helper_private;
 struct drm_mode_object *VAR_10;
 bool VAR_11;
 int VAR_12;

 VAR_7 = VAR_9->best_encoder(VAR_3);

 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
  if (VAR_3->encoder_ids[VAR_12] == 0)
   break;

  VAR_10 = FUNC_0(VAR_3->dev,
        VAR_3->encoder_ids[VAR_12],
        VAR_1);
  if (!VAR_10)
   continue;

  VAR_8 = FUNC_1(VAR_10);

  if ((VAR_8 == VAR_7) && (VAR_4 == VAR_2))
   VAR_11 = 1;
  else
   VAR_11 = 0;

  if (VAR_6->is_atom_bios)
   FUNC_2(VAR_3, VAR_8, VAR_11);
  else
   FUNC_3(VAR_3, VAR_8, VAR_11);

 }
}
