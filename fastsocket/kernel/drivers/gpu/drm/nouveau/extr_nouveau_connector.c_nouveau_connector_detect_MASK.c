
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nouveau_i2c_port {int adapter; } ;
struct nouveau_encoder {TYPE_1__* dcb; } ;
struct nouveau_drm {int dummy; } ;
struct nouveau_connector {TYPE_2__* edid; } ;
struct drm_encoder_helper_funcs {int (* detect ) (struct drm_encoder*,struct drm_connector*) ;} ;
struct drm_encoder {struct drm_encoder_helper_funcs* helper_private; } ;
struct drm_device {int dummy; } ;
struct drm_connector {struct drm_device* dev; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;
struct TYPE_6__ {int input; } ;
struct TYPE_5__ {scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nouveau_drm*,char*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct drm_connector*) ;
 TYPE_2__* FUNC_2 (struct drm_connector*,int *) ;
 int FUNC_3 (struct drm_connector*,TYPE_2__*) ;
 struct nouveau_encoder* FUNC_4 (struct drm_connector*,int) ;
 int FUNC_5 (TYPE_2__*) ;
 struct nouveau_connector* FUNC_6 (struct drm_connector*) ;
 struct nouveau_i2c_port* FUNC_7 (struct drm_connector*,struct nouveau_encoder**) ;
 struct nouveau_encoder* FUNC_8 (struct drm_connector*) ;
 int FUNC_9 (struct drm_connector*,struct nouveau_encoder*) ;
 int FUNC_10 (struct drm_encoder*) ;
 struct nouveau_drm* FUNC_11 (struct drm_device*) ;
 int VAR_7 ;
 int FUNC_12 (struct drm_encoder*,struct drm_connector*) ;
 struct drm_encoder* FUNC_13 (struct nouveau_encoder*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_14(struct drm_connector *VAR_8, bool VAR_9)
{
 struct drm_device *VAR_10 = VAR_8->dev;
 struct nouveau_drm *VAR_11 = FUNC_11(VAR_10);
 struct nouveau_connector *VAR_12 = FUNC_6(VAR_8);
 struct nouveau_encoder *VAR_13 = ((void*)0);
 struct nouveau_encoder *VAR_14;
 struct nouveau_i2c_port *VAR_15;
 int VAR_16;


 if (VAR_12->edid) {
  FUNC_3(VAR_8, ((void*)0));
  FUNC_5(VAR_12->edid);
  VAR_12->edid = ((void*)0);
 }

 VAR_15 = FUNC_7(VAR_8, &VAR_13);
 if (VAR_15) {
  VAR_12->edid = FUNC_2(VAR_8, &VAR_15->adapter);
  FUNC_3(VAR_8,
       VAR_12->edid);
  if (!VAR_12->edid) {
   FUNC_0(VAR_11, "DDC responded, but no EDID for %s\n",
     FUNC_1(VAR_8));
   goto detect_analog;
  }

  if (VAR_13->dcb->type == VAR_1 &&
      !FUNC_10(FUNC_13(VAR_13))) {
   FUNC_0(VAR_11, "Detected %s, but failed init\n",
     FUNC_1(VAR_8));
   return VAR_6;
  }






  VAR_14 = ((void*)0);
  if (VAR_13->dcb->type == VAR_2)
   VAR_14 = FUNC_4(VAR_8, VAR_0);
  if (VAR_13->dcb->type == VAR_0)
   VAR_14 = FUNC_4(VAR_8, VAR_2);

  if (VAR_14 && ((VAR_13->dcb->type == VAR_0 &&
        VAR_14->dcb->type == VAR_2) ||
       (VAR_13->dcb->type == VAR_2 &&
        VAR_14->dcb->type == VAR_0))) {
   if (VAR_12->edid->input & VAR_4)
    VAR_16 = VAR_2;
   else
    VAR_16 = VAR_0;

   VAR_13 = FUNC_4(VAR_8, VAR_16);
  }

  FUNC_9(VAR_8, VAR_13);
  return VAR_5;
 }

 VAR_13 = FUNC_8(VAR_8);
 if (VAR_13) {
  FUNC_9(VAR_8, VAR_13);
  return VAR_5;
 }

detect_analog:
 VAR_13 = FUNC_4(VAR_8, VAR_0);
 if (!VAR_13 && !VAR_7)
  VAR_13 = FUNC_4(VAR_8, VAR_3);
 if (VAR_13 && VAR_9) {
  struct drm_encoder *VAR_17 = FUNC_13(VAR_13);
  struct drm_encoder_helper_funcs *VAR_18 =
      VAR_17->helper_private;

  if (VAR_18->detect(VAR_17, VAR_8) ==
      VAR_5) {
   FUNC_9(VAR_8, VAR_13);
   return VAR_5;
  }

 }

 return VAR_6;
}
