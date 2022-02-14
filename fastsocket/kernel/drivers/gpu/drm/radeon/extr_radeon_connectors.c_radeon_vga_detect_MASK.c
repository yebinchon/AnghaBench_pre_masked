
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ bios_hardcoded_edid_size; } ;
struct radeon_device {TYPE_2__ mode_info; int is_atom_bios; } ;
struct radeon_connector {int detected_by_load; int use_digital; scalar_t__ dac_load_detect; TYPE_3__* edid; scalar_t__ shared_ddc; TYPE_1__* ddc_bus; int base; } ;
struct drm_encoder_helper_funcs {int (* detect ) (struct drm_encoder*,struct drm_connector*) ;} ;
struct drm_encoder {struct drm_encoder_helper_funcs* helper_private; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector {int status; struct drm_device* dev; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;
struct TYPE_7__ {int input; } ;
struct TYPE_5__ {int adapter; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct drm_connector*) ;
 TYPE_3__* FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_3__*) ;
 struct drm_encoder* FUNC_4 (struct drm_connector*) ;
 int FUNC_5 (struct drm_connector*,struct drm_encoder*,int,int) ;
 int FUNC_6 (struct drm_connector*,int) ;
 int FUNC_7 (struct radeon_connector*,int) ;
 int FUNC_8 (struct drm_encoder*,struct drm_connector*) ;
 struct radeon_connector* FUNC_9 (struct drm_connector*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_10(struct drm_connector *VAR_3, bool VAR_4)
{
 struct drm_device *VAR_5 = VAR_3->dev;
 struct radeon_device *VAR_6 = VAR_5->dev_private;
 struct radeon_connector *VAR_7 = FUNC_9(VAR_3);
 struct drm_encoder *VAR_8;
 struct drm_encoder_helper_funcs *VAR_9;
 bool VAR_10 = 0;
 enum drm_connector_status VAR_11 = VAR_2;

 VAR_8 = FUNC_4(VAR_3);
 if (!VAR_8)
  VAR_11 = VAR_2;

 if (VAR_7->ddc_bus)
  VAR_10 = FUNC_7(VAR_7, 0);
 if (VAR_10) {
  VAR_7->detected_by_load = 0;
  if (VAR_7->edid) {
   FUNC_3(VAR_7->edid);
   VAR_7->edid = ((void*)0);
  }
  VAR_7->edid = FUNC_2(&VAR_7->base, &VAR_7->ddc_bus->adapter);

  if (!VAR_7->edid) {
   FUNC_0("%s: probed a monitor but no|invalid EDID\n",
     FUNC_1(VAR_3));
   VAR_11 = VAR_1;
  } else {
   VAR_7->use_digital = !!(VAR_7->edid->input & VAR_0);




   if (VAR_7->use_digital && VAR_7->shared_ddc) {
    FUNC_3(VAR_7->edid);
    VAR_7->edid = ((void*)0);
    VAR_11 = VAR_2;
   } else
    VAR_11 = VAR_1;
  }
 } else {


  if (!VAR_4) {



   if (VAR_7->detected_by_load)
    return VAR_3->status;
   else
    return VAR_11;
  }

  if (VAR_7->dac_load_detect && VAR_8) {
   VAR_9 = VAR_8->helper_private;
   VAR_11 = VAR_9->detect(VAR_8, VAR_3);
   if (VAR_11 != VAR_2)
    VAR_7->detected_by_load = 1;
  }
 }

 if (VAR_11 == VAR_1)
  VAR_11 = FUNC_5(VAR_3, VAR_8, VAR_11, 1);





 if ((!VAR_6->is_atom_bios) &&
     (VAR_11 == VAR_2) &&
     VAR_6->mode_info.bios_hardcoded_edid_size) {
  VAR_11 = VAR_1;
 }

 FUNC_6(VAR_3, VAR_11);
 return VAR_11;
}
