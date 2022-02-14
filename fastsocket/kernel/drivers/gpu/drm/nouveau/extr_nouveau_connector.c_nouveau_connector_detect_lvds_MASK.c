
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nouveau_encoder {TYPE_2__* dcb; } ;
struct TYPE_6__ {scalar_t__ fp_no_ddc; } ;
struct nouveau_drm {TYPE_3__ vbios; } ;
struct nouveau_connector {int * edid; } ;
struct edid {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_connector {struct drm_device* dev; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;
struct TYPE_4__ {scalar_t__ use_straps_for_mode; scalar_t__ use_acpi_for_edid; } ;
struct TYPE_5__ {TYPE_1__ lvdsconf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct drm_connector*,int *) ;
 struct nouveau_encoder* FUNC_2 (struct drm_connector*,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (struct edid*,int ,int ) ;
 int * FUNC_5 (struct drm_device*,struct drm_connector*) ;
 scalar_t__ FUNC_6 (struct drm_device*) ;
 scalar_t__ FUNC_7 (struct drm_device*,int *) ;
 struct nouveau_connector* FUNC_8 (struct drm_connector*) ;
 int FUNC_9 (struct drm_connector*,int) ;
 int FUNC_10 (struct drm_connector*,struct nouveau_encoder*) ;
 struct nouveau_drm* FUNC_11 (struct drm_device*) ;
 int VAR_6 ;

__attribute__((used)) static enum drm_connector_status
FUNC_12(struct drm_connector *VAR_7, bool VAR_8)
{
 struct drm_device *VAR_9 = VAR_7->dev;
 struct nouveau_drm *VAR_10 = FUNC_11(VAR_9);
 struct nouveau_connector *VAR_11 = FUNC_8(VAR_7);
 struct nouveau_encoder *VAR_12 = ((void*)0);
 enum drm_connector_status VAR_13 = VAR_4;


 if (VAR_11->edid) {
  FUNC_1(VAR_7, ((void*)0));
  FUNC_3(VAR_11->edid);
  VAR_11->edid = ((void*)0);
 }

 VAR_12 = FUNC_2(VAR_7, VAR_0);
 if (!VAR_12)
  return VAR_4;


 if (!VAR_10->vbios.fp_no_ddc) {
  VAR_13 = FUNC_9(VAR_7, VAR_8);
  if (VAR_13 == VAR_3)
   goto out;
 }
 if (VAR_12->dcb->lvdsconf.use_acpi_for_edid) {
  if ((VAR_11->edid = FUNC_5(VAR_9, VAR_7))) {
   VAR_13 = VAR_3;
   goto out;
  }
 }





 if (FUNC_7(VAR_9, ((void*)0)) && (VAR_10->vbios.fp_no_ddc ||
     VAR_12->dcb->lvdsconf.use_straps_for_mode)) {
  VAR_13 = VAR_3;
  goto out;
 }




 if (!VAR_10->vbios.fp_no_ddc) {
  struct edid *VAR_14 =
   (struct edid *)FUNC_6(VAR_9);
  if (VAR_14) {
   VAR_11->edid =
     FUNC_4(VAR_14, VAR_1, VAR_2);
   if (VAR_11->edid)
    VAR_13 = VAR_3;
  }
 }

out:







 FUNC_1(VAR_7, VAR_11->edid);
 FUNC_10(VAR_7, VAR_12);
 return VAR_13;
}
