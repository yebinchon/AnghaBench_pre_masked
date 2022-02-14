
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int ucDigSel; } ;
struct TYPE_14__ {int ucAction; int ucPanelMode; int ucLaneNum; int ucHPD_ID; void* ucBitPerColor; TYPE_6__ acConfig; void* ucEncoderMode; void* usPixelClock; } ;
struct TYPE_12__ {int ucAction; int ucLaneNum; int ucConfig; void* ucEncoderMode; void* usPixelClock; } ;
struct TYPE_10__ {int ucDigSel; } ;
struct TYPE_11__ {int ucPanelMode; int ucAction; int ucLaneNum; void* ucBitPerColor; TYPE_3__ acConfig; void* ucEncoderMode; void* usPixelClock; } ;
union dig_encoder_control {TYPE_7__ v4; TYPE_5__ v1; TYPE_4__ v3; } ;
typedef int uint8_t ;
typedef int uint32_t ;
struct radeon_encoder_atom_dig {int dig_encoder; int linkb; } ;
struct radeon_encoder {int pixel_clock; int encoder_id; struct radeon_encoder_atom_dig* enc_priv; } ;
struct TYPE_9__ {int atom_context; } ;
struct radeon_device {TYPE_2__ mode_info; } ;
struct radeon_connector_atom_dig {int dp_clock; int dp_lane_count; } ;
struct TYPE_8__ {int hpd; } ;
struct radeon_connector {TYPE_1__ hpd; struct radeon_connector_atom_dig* con_priv; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector {int dummy; } ;
typedef int args ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
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
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (void*) ;




 int FUNC_3 (int ,int ) ;
 int VAR_14 ;
 int FUNC_4 (int ,int,int *) ;
 int FUNC_5 (int ,int,int*,int*) ;
 void* FUNC_6 (struct drm_encoder*) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (union dig_encoder_control*,int ,int) ;
 void* FUNC_9 (struct drm_encoder*) ;
 int FUNC_10 (struct drm_encoder*,int) ;
 struct drm_connector* FUNC_11 (struct drm_encoder*) ;
 struct radeon_connector* FUNC_12 (struct drm_connector*) ;
 struct radeon_encoder* FUNC_13 (struct drm_encoder*) ;

void
FUNC_14(struct drm_encoder *VAR_15, int VAR_16, int VAR_17)
{
 struct drm_device *VAR_18 = VAR_15->dev;
 struct radeon_device *VAR_19 = VAR_18->dev_private;
 struct radeon_encoder *VAR_20 = FUNC_13(VAR_15);
 struct radeon_encoder_atom_dig *VAR_21 = VAR_20->enc_priv;
 struct drm_connector *VAR_22 = FUNC_11(VAR_15);
 union dig_encoder_control VAR_23;
 int VAR_24 = 0;
 uint8_t VAR_25, VAR_26;
 int VAR_27 = 0;
 int VAR_28 = 0;
 int VAR_29 = VAR_14;

 if (VAR_22) {
  struct radeon_connector *VAR_30 = FUNC_12(VAR_22);
  struct radeon_connector_atom_dig *VAR_31 =
   VAR_30->con_priv;

  VAR_27 = VAR_31->dp_clock;
  VAR_28 = VAR_31->dp_lane_count;
  VAR_29 = VAR_30->hpd.hpd;
 }


 if (VAR_21->dig_encoder == -1)
  return;

 FUNC_8(&VAR_23, 0, sizeof(VAR_23));

 if (FUNC_0(VAR_19))
  VAR_24 = FUNC_3(VAR_10, VAR_13);
 else {
  if (VAR_21->dig_encoder)
   VAR_24 = FUNC_3(VAR_10, VAR_12);
  else
   VAR_24 = FUNC_3(VAR_10, VAR_11);
 }

 if (!FUNC_5(VAR_19->mode_info.atom_context, VAR_24, &VAR_25, &VAR_26))
  return;

 switch (VAR_25) {
 case 1:
  switch (VAR_26) {
  case 1:
   VAR_23.v1.ucAction = VAR_16;
   VAR_23.v1.usPixelClock = FUNC_7(VAR_20->pixel_clock / 10);
   if (VAR_16 == VAR_0)
    VAR_23.v3.ucPanelMode = VAR_17;
   else
    VAR_23.v1.ucEncoderMode = FUNC_6(VAR_15);

   if (FUNC_2(VAR_23.v1.ucEncoderMode))
    VAR_23.v1.ucLaneNum = VAR_28;
   else if (FUNC_10(VAR_15, VAR_20->pixel_clock))
    VAR_23.v1.ucLaneNum = 8;
   else
    VAR_23.v1.ucLaneNum = 4;

   if (FUNC_2(VAR_23.v1.ucEncoderMode) && (VAR_27 == 270000))
    VAR_23.v1.ucConfig |= VAR_1;
   switch (VAR_20->encoder_id) {
   case 130:
    VAR_23.v1.ucConfig = VAR_4;
    break;
   case 129:
   case 131:
    VAR_23.v1.ucConfig = VAR_5;
    break;
   case 128:
    VAR_23.v1.ucConfig = VAR_6;
    break;
   }
   if (VAR_21->linkb)
    VAR_23.v1.ucConfig |= VAR_3;
   else
    VAR_23.v1.ucConfig |= VAR_2;
   break;
  case 2:
  case 3:
   VAR_23.v3.ucAction = VAR_16;
   VAR_23.v3.usPixelClock = FUNC_7(VAR_20->pixel_clock / 10);
   if (VAR_16 == VAR_0)
    VAR_23.v3.ucPanelMode = VAR_17;
   else
    VAR_23.v3.ucEncoderMode = FUNC_6(VAR_15);

   if (FUNC_2(VAR_23.v3.ucEncoderMode))
    VAR_23.v3.ucLaneNum = VAR_28;
   else if (FUNC_10(VAR_15, VAR_20->pixel_clock))
    VAR_23.v3.ucLaneNum = 8;
   else
    VAR_23.v3.ucLaneNum = 4;

   if (FUNC_2(VAR_23.v3.ucEncoderMode) && (VAR_27 == 270000))
    VAR_23.v1.ucConfig |= VAR_7;
   VAR_23.v3.acConfig.ucDigSel = VAR_21->dig_encoder;
   VAR_23.v3.ucBitPerColor = FUNC_9(VAR_15);
   break;
  case 4:
   VAR_23.v4.ucAction = VAR_16;
   VAR_23.v4.usPixelClock = FUNC_7(VAR_20->pixel_clock / 10);
   if (VAR_16 == VAR_0)
    VAR_23.v4.ucPanelMode = VAR_17;
   else
    VAR_23.v4.ucEncoderMode = FUNC_6(VAR_15);

   if (FUNC_2(VAR_23.v4.ucEncoderMode))
    VAR_23.v4.ucLaneNum = VAR_28;
   else if (FUNC_10(VAR_15, VAR_20->pixel_clock))
    VAR_23.v4.ucLaneNum = 8;
   else
    VAR_23.v4.ucLaneNum = 4;

   if (FUNC_2(VAR_23.v4.ucEncoderMode)) {
    if (VAR_27 == 270000)
     VAR_23.v1.ucConfig |= VAR_8;
    else if (VAR_27 == 540000)
     VAR_23.v1.ucConfig |= VAR_9;
   }
   VAR_23.v4.acConfig.ucDigSel = VAR_21->dig_encoder;
   VAR_23.v4.ucBitPerColor = FUNC_9(VAR_15);
   if (VAR_29 == VAR_14)
    VAR_23.v4.ucHPD_ID = 0;
   else
    VAR_23.v4.ucHPD_ID = VAR_29 + 1;
   break;
  default:
   FUNC_1("Unknown table version %d, %d\n", VAR_25, VAR_26);
   break;
  }
  break;
 default:
  FUNC_1("Unknown table version %d, %d\n", VAR_25, VAR_26);
  break;
 }

 FUNC_4(VAR_19->mode_info.atom_context, VAR_24, (uint32_t *)&VAR_23);

}
