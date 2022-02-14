
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_encoder_atom_dig {int panel_mode; } ;
struct radeon_encoder {int devices; struct radeon_encoder_atom_dig* enc_priv; } ;
struct radeon_device {int family; } ;
struct radeon_connector_atom_dig {int edp_on; } ;
struct radeon_connector {struct radeon_connector_atom_dig* con_priv; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector {int connector_type; } ;


 int FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;




 int FUNC_4 (int ) ;
 int VAR_20 ;
 int FUNC_5 (struct drm_encoder*,int ,int ) ;
 int FUNC_6 (struct drm_encoder*,int ,int ,int ) ;
 int FUNC_7 (struct drm_encoder*,struct drm_encoder*,int ) ;
 int FUNC_8 (struct drm_encoder*) ;
 int FUNC_9 (struct drm_connector*,int ) ;
 int FUNC_10 (struct drm_encoder*,struct drm_connector*) ;
 int FUNC_11 (struct drm_encoder*,struct drm_connector*) ;
 struct drm_connector* FUNC_12 (struct drm_encoder*) ;
 struct drm_encoder* FUNC_13 (struct drm_encoder*) ;
 struct radeon_connector* FUNC_14 (struct drm_connector*) ;
 struct radeon_encoder* FUNC_15 (struct drm_encoder*) ;

__attribute__((used)) static void
FUNC_16(struct drm_encoder *VAR_21, int VAR_22)
{
 struct drm_device *VAR_23 = VAR_21->dev;
 struct radeon_device *VAR_24 = VAR_23->dev_private;
 struct radeon_encoder *VAR_25 = FUNC_15(VAR_21);
 struct drm_encoder *VAR_26 = FUNC_13(VAR_21);
 struct radeon_encoder_atom_dig *VAR_27 = VAR_25->enc_priv;
 struct drm_connector *VAR_28 = FUNC_12(VAR_21);
 struct radeon_connector *VAR_29 = ((void*)0);
 struct radeon_connector_atom_dig *VAR_30 = ((void*)0);

 if (VAR_28) {
  VAR_29 = FUNC_14(VAR_28);
  VAR_30 = VAR_29->con_priv;
 }

 switch (VAR_22) {
 case 130:
  if (FUNC_1(VAR_24) || FUNC_2(VAR_24)) {
   if (!VAR_28)
    VAR_27->panel_mode = VAR_18;
   else
    VAR_27->panel_mode = FUNC_10(VAR_21, VAR_28);


   FUNC_5(VAR_21, VAR_5, 0);
   FUNC_5(VAR_21,
         VAR_6,
         VAR_27->panel_mode);
   if (VAR_26) {
    if (FUNC_1(VAR_24) || FUNC_3(VAR_24))
     FUNC_7(VAR_21, VAR_26,
         VAR_20);
   }
   FUNC_6(VAR_21, VAR_9, 0, 0);
  } else if (FUNC_0(VAR_24)) {

   FUNC_5(VAR_21, VAR_5, 0);

   FUNC_6(VAR_21, VAR_9, 0, 0);
   FUNC_6(VAR_21, VAR_10, 0, 0);
  } else {

   FUNC_5(VAR_21, VAR_2, 0);
   FUNC_6(VAR_21, VAR_15, 0, 0);
   FUNC_6(VAR_21, VAR_9, 0, 0);

   if ((VAR_24->family != VAR_16) && (VAR_24->family != VAR_17))
    FUNC_6(VAR_21, VAR_10, 0, 0);
  }
  if (FUNC_4(FUNC_8(VAR_21)) && VAR_28) {
   if (VAR_28->connector_type == VAR_19) {
    FUNC_9(VAR_28,
            VAR_14);
    VAR_30->edp_on = 1;
   }
   FUNC_11(VAR_21, VAR_28);
   if (FUNC_0(VAR_24))
    FUNC_5(VAR_21, VAR_4, 0);
  }
  if (VAR_25->devices & (VAR_0))
   FUNC_6(VAR_21, VAR_12, 0, 0);
  break;
 case 129:
 case 128:
 case 131:
  if (FUNC_1(VAR_24) || FUNC_2(VAR_24)) {

   FUNC_6(VAR_21, VAR_7, 0, 0);
  } else if (FUNC_0(VAR_24)) {

   FUNC_6(VAR_21, VAR_8, 0, 0);
   FUNC_6(VAR_21, VAR_7, 0, 0);
  } else {

   FUNC_6(VAR_21, VAR_8, 0, 0);
   FUNC_6(VAR_21, VAR_7, 0, 0);
   FUNC_5(VAR_21, VAR_1, 0);
  }
  if (FUNC_4(FUNC_8(VAR_21)) && VAR_28) {
   if (FUNC_0(VAR_24))
    FUNC_5(VAR_21, VAR_3, 0);
   if (VAR_28->connector_type == VAR_19) {
    FUNC_9(VAR_28,
            VAR_13);
    VAR_30->edp_on = 0;
   }
  }
  if (VAR_25->devices & (VAR_0))
   FUNC_6(VAR_21, VAR_11, 0, 0);
  break;
 }
}
