
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_16__ ;
typedef struct TYPE_22__ TYPE_15__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_21__ {int ucPhyClkSrcId; int ucCoherentMode; int ucHPDSel; } ;
struct TYPE_22__ {int ucAction; int ucLaneNum; int ucConnObjId; int ucDigEncoderSel; int ucDPLaneSet; TYPE_14__ asConfig; int ucDigMode; int ucPhyId; void* usSymClock; } ;
struct TYPE_18__ {int ucLinkSel; int ucEncoderSel; int ucRefClkSource; int ucTransmitterSel; int fCoherentMode; int fDualLinkConnector; } ;
struct TYPE_17__ {int ucLaneSel; int ucLaneSet; } ;
struct TYPE_19__ {int ucAction; int ucLaneNum; TYPE_11__ acConfig; void* usPixelClock; TYPE_10__ asMode; void* usInitInfo; } ;
struct TYPE_31__ {int ucLinkSel; int ucEncoderSel; int ucRefClkSource; int ucTransmitterSel; int fCoherentMode; int fDualLinkConnector; } ;
struct TYPE_30__ {int ucLaneSel; int ucLaneSet; } ;
struct TYPE_32__ {int ucAction; int ucLaneNum; TYPE_8__ acConfig; void* usPixelClock; TYPE_7__ asMode; void* usInitInfo; } ;
struct TYPE_28__ {int ucEncoderSel; int ucLinkSel; int ucTransmitterSel; int fCoherentMode; int fDPConnector; int fDualLinkConnector; } ;
struct TYPE_27__ {int ucLaneSel; int ucLaneSet; } ;
struct TYPE_29__ {int ucAction; TYPE_5__ acConfig; void* usPixelClock; TYPE_4__ asMode; void* usInitInfo; } ;
struct TYPE_25__ {int ucLaneSel; int ucLaneSet; } ;
struct TYPE_26__ {int ucAction; int ucConfig; void* usPixelClock; TYPE_2__ asMode; void* usInitInfo; } ;
union dig_transmitter_control {TYPE_15__ v5; TYPE_12__ v4; TYPE_9__ v3; TYPE_6__ v2; TYPE_3__ v1; } ;
typedef int uint8_t ;
typedef int uint32_t ;
struct radeon_encoder_atom_dig {int dig_encoder; int coherent_mode; int linkb; } ;
struct radeon_encoder {int encoder_id; int pixel_clock; int devices; struct radeon_encoder_atom_dig* enc_priv; } ;
struct TYPE_23__ {int atom_context; } ;
struct TYPE_20__ {int dp_extclk; } ;
struct radeon_device {int flags; TYPE_16__ mode_info; TYPE_13__ clock; } ;
struct radeon_crtc {int pll_id; } ;
struct radeon_connector_atom_dig {int dp_clock; int dp_lane_count; int igp_lane_info; } ;
struct TYPE_24__ {int hpd; } ;
struct radeon_connector {int connector_object_id; TYPE_1__ hpd; struct radeon_connector_atom_dig* con_priv; } ;
struct drm_encoder {scalar_t__ crtc; struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector {int dummy; } ;
typedef int args ;


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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_23 ;
 scalar_t__ FUNC_1 (int ) ;





 int VAR_24 ;
 void* VAR_25 ;
 int FUNC_2 (int ,int ) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_3 (int ,int,int *) ;
 int FUNC_4 (int ,int,int*,int*) ;
 int FUNC_5 (struct drm_encoder*) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (union dig_transmitter_control*,int ,int) ;
 int FUNC_8 (struct drm_encoder*,int) ;
 struct drm_connector* FUNC_9 (struct drm_encoder*) ;
 struct drm_connector* FUNC_10 (struct drm_encoder*) ;
 struct radeon_connector* FUNC_11 (struct drm_connector*) ;
 struct radeon_crtc* FUNC_12 (scalar_t__) ;
 struct radeon_encoder* FUNC_13 (struct drm_encoder*) ;

void
FUNC_14(struct drm_encoder *VAR_32, int VAR_33, uint8_t VAR_34, uint8_t VAR_35)
{
 struct drm_device *VAR_36 = VAR_32->dev;
 struct radeon_device *VAR_37 = VAR_36->dev_private;
 struct radeon_encoder *VAR_38 = FUNC_13(VAR_32);
 struct radeon_encoder_atom_dig *VAR_39 = VAR_38->enc_priv;
 struct drm_connector *VAR_40;
 union dig_transmitter_control VAR_41;
 int VAR_42 = 0;
 uint8_t VAR_43, VAR_44;
 bool VAR_45 = 0;
 int VAR_46 = 0;
 int VAR_47 = 0;
 int VAR_48 = 0;
 int VAR_49 = 0;
 int VAR_50 = 0;
 int VAR_51 = VAR_39->dig_encoder;
 int VAR_52 = VAR_29;

 if (VAR_33 == VAR_7) {
  VAR_40 = FUNC_10(VAR_32);



  VAR_51 = 0;
 } else
  VAR_40 = FUNC_9(VAR_32);

 if (VAR_40) {
  struct radeon_connector *VAR_53 = FUNC_11(VAR_40);
  struct radeon_connector_atom_dig *VAR_54 =
   VAR_53->con_priv;

  VAR_52 = VAR_53->hpd.hpd;
  VAR_47 = VAR_54->dp_clock;
  VAR_48 = VAR_54->dp_lane_count;
  VAR_49 =
   (VAR_53->connector_object_id & VAR_27) >> VAR_28;
  VAR_50 = VAR_54->igp_lane_info;
 }

 if (VAR_32->crtc) {
  struct radeon_crtc *VAR_55 = FUNC_12(VAR_32->crtc);
  VAR_46 = VAR_55->pll_id;
 }


 if (VAR_51 == -1)
  return;

 if (FUNC_1(FUNC_5(VAR_32)))
  VAR_45 = 1;

 FUNC_7(&VAR_41, 0, sizeof(VAR_41));

 switch (VAR_38->encoder_id) {
 case 132:
  VAR_42 = FUNC_2(VAR_22, VAR_23);
  break;
 case 130:
 case 129:
 case 128:
  VAR_42 = FUNC_2(VAR_22, VAR_31);
  break;
 case 131:
  VAR_42 = FUNC_2(VAR_22, VAR_26);
  break;
 }

 if (!FUNC_4(VAR_37->mode_info.atom_context, VAR_42, &VAR_43, &VAR_44))
  return;

 switch (VAR_43) {
 case 1:
  switch (VAR_44) {
  case 1:
   VAR_41.v1.ucAction = VAR_33;
   if (VAR_33 == VAR_7) {
    VAR_41.v1.usInitInfo = FUNC_6(VAR_49);
   } else if (VAR_33 == VAR_8) {
    VAR_41.v1.asMode.ucLaneSel = VAR_34;
    VAR_41.v1.asMode.ucLaneSet = VAR_35;
   } else {
    if (VAR_45)
     VAR_41.v1.usPixelClock = FUNC_6(VAR_47 / 10);
    else if (FUNC_8(VAR_32, VAR_38->pixel_clock))
     VAR_41.v1.usPixelClock = FUNC_6((VAR_38->pixel_clock / 2) / 10);
    else
     VAR_41.v1.usPixelClock = FUNC_6(VAR_38->pixel_clock / 10);
   }

   VAR_41.v1.ucConfig = VAR_10;

   if (VAR_51)
    VAR_41.v1.ucConfig |= VAR_13;
   else
    VAR_41.v1.ucConfig |= VAR_12;

   if ((VAR_37->flags & VAR_30) &&
       (VAR_38->encoder_id == 130)) {
    if (VAR_45 ||
        !FUNC_8(VAR_32, VAR_38->pixel_clock)) {
     if (VAR_50 & 0x1)
      VAR_41.v1.ucConfig |= VAR_14;
     else if (VAR_50 & 0x2)
      VAR_41.v1.ucConfig |= VAR_17;
     else if (VAR_50 & 0x4)
      VAR_41.v1.ucConfig |= VAR_18;
     else if (VAR_50 & 0x8)
      VAR_41.v1.ucConfig |= VAR_16;
    } else {
     if (VAR_50 & 0x3)
      VAR_41.v1.ucConfig |= VAR_15;
     else if (VAR_50 & 0xc)
      VAR_41.v1.ucConfig |= VAR_19;
    }
   }

   if (VAR_39->linkb)
    VAR_41.v1.ucConfig |= VAR_21;
   else
    VAR_41.v1.ucConfig |= VAR_20;

   if (VAR_45)
    VAR_41.v1.ucConfig |= VAR_11;
   else if (VAR_38->devices & (VAR_0)) {
    if (VAR_39->coherent_mode)
     VAR_41.v1.ucConfig |= VAR_11;
    if (FUNC_8(VAR_32, VAR_38->pixel_clock))
     VAR_41.v1.ucConfig |= VAR_9;
   }
   break;
  case 2:
   VAR_41.v2.ucAction = VAR_33;
   if (VAR_33 == VAR_7) {
    VAR_41.v2.usInitInfo = FUNC_6(VAR_49);
   } else if (VAR_33 == VAR_8) {
    VAR_41.v2.asMode.ucLaneSel = VAR_34;
    VAR_41.v2.asMode.ucLaneSet = VAR_35;
   } else {
    if (VAR_45)
     VAR_41.v2.usPixelClock = FUNC_6(VAR_47 / 10);
    else if (FUNC_8(VAR_32, VAR_38->pixel_clock))
     VAR_41.v2.usPixelClock = FUNC_6((VAR_38->pixel_clock / 2) / 10);
    else
     VAR_41.v2.usPixelClock = FUNC_6(VAR_38->pixel_clock / 10);
   }

   VAR_41.v2.acConfig.ucEncoderSel = VAR_51;
   if (VAR_39->linkb)
    VAR_41.v2.acConfig.ucLinkSel = 1;

   switch (VAR_38->encoder_id) {
   case 130:
    VAR_41.v2.acConfig.ucTransmitterSel = 0;
    break;
   case 129:
    VAR_41.v2.acConfig.ucTransmitterSel = 1;
    break;
   case 128:
    VAR_41.v2.acConfig.ucTransmitterSel = 2;
    break;
   }

   if (VAR_45) {
    VAR_41.v2.acConfig.fCoherentMode = 1;
    VAR_41.v2.acConfig.fDPConnector = 1;
   } else if (VAR_38->devices & (VAR_0)) {
    if (VAR_39->coherent_mode)
     VAR_41.v2.acConfig.fCoherentMode = 1;
    if (FUNC_8(VAR_32, VAR_38->pixel_clock))
     VAR_41.v2.acConfig.fDualLinkConnector = 1;
   }
   break;
  case 3:
   VAR_41.v3.ucAction = VAR_33;
   if (VAR_33 == VAR_7) {
    VAR_41.v3.usInitInfo = FUNC_6(VAR_49);
   } else if (VAR_33 == VAR_8) {
    VAR_41.v3.asMode.ucLaneSel = VAR_34;
    VAR_41.v3.asMode.ucLaneSet = VAR_35;
   } else {
    if (VAR_45)
     VAR_41.v3.usPixelClock = FUNC_6(VAR_47 / 10);
    else if (FUNC_8(VAR_32, VAR_38->pixel_clock))
     VAR_41.v3.usPixelClock = FUNC_6((VAR_38->pixel_clock / 2) / 10);
    else
     VAR_41.v3.usPixelClock = FUNC_6(VAR_38->pixel_clock / 10);
   }

   if (VAR_45)
    VAR_41.v3.ucLaneNum = VAR_48;
   else if (FUNC_8(VAR_32, VAR_38->pixel_clock))
    VAR_41.v3.ucLaneNum = 8;
   else
    VAR_41.v3.ucLaneNum = 4;

   if (VAR_39->linkb)
    VAR_41.v3.acConfig.ucLinkSel = 1;
   if (VAR_51 & 1)
    VAR_41.v3.acConfig.ucEncoderSel = 1;






   if (VAR_45 && VAR_37->clock.dp_extclk)
    VAR_41.v3.acConfig.ucRefClkSource = 2;
   else
    VAR_41.v3.acConfig.ucRefClkSource = VAR_46;

   switch (VAR_38->encoder_id) {
   case 130:
    VAR_41.v3.acConfig.ucTransmitterSel = 0;
    break;
   case 129:
    VAR_41.v3.acConfig.ucTransmitterSel = 1;
    break;
   case 128:
    VAR_41.v3.acConfig.ucTransmitterSel = 2;
    break;
   }

   if (VAR_45)
    VAR_41.v3.acConfig.fCoherentMode = 1;
   else if (VAR_38->devices & (VAR_0)) {
    if (VAR_39->coherent_mode)
     VAR_41.v3.acConfig.fCoherentMode = 1;
    if (FUNC_8(VAR_32, VAR_38->pixel_clock))
     VAR_41.v3.acConfig.fDualLinkConnector = 1;
   }
   break;
  case 4:
   VAR_41.v4.ucAction = VAR_33;
   if (VAR_33 == VAR_7) {
    VAR_41.v4.usInitInfo = FUNC_6(VAR_49);
   } else if (VAR_33 == VAR_8) {
    VAR_41.v4.asMode.ucLaneSel = VAR_34;
    VAR_41.v4.asMode.ucLaneSet = VAR_35;
   } else {
    if (VAR_45)
     VAR_41.v4.usPixelClock = FUNC_6(VAR_47 / 10);
    else if (FUNC_8(VAR_32, VAR_38->pixel_clock))
     VAR_41.v4.usPixelClock = FUNC_6((VAR_38->pixel_clock / 2) / 10);
    else
     VAR_41.v4.usPixelClock = FUNC_6(VAR_38->pixel_clock / 10);
   }

   if (VAR_45)
    VAR_41.v4.ucLaneNum = VAR_48;
   else if (FUNC_8(VAR_32, VAR_38->pixel_clock))
    VAR_41.v4.ucLaneNum = 8;
   else
    VAR_41.v4.ucLaneNum = 4;

   if (VAR_39->linkb)
    VAR_41.v4.acConfig.ucLinkSel = 1;
   if (VAR_51 & 1)
    VAR_41.v4.acConfig.ucEncoderSel = 1;






   if (VAR_45) {
    if (VAR_37->clock.dp_extclk)
     VAR_41.v4.acConfig.ucRefClkSource = VAR_25;
    else
     VAR_41.v4.acConfig.ucRefClkSource = VAR_24;
   } else
    VAR_41.v4.acConfig.ucRefClkSource = VAR_46;

   switch (VAR_38->encoder_id) {
   case 130:
    VAR_41.v4.acConfig.ucTransmitterSel = 0;
    break;
   case 129:
    VAR_41.v4.acConfig.ucTransmitterSel = 1;
    break;
   case 128:
    VAR_41.v4.acConfig.ucTransmitterSel = 2;
    break;
   }

   if (VAR_45)
    VAR_41.v4.acConfig.fCoherentMode = 1;
   else if (VAR_38->devices & (VAR_0)) {
    if (VAR_39->coherent_mode)
     VAR_41.v4.acConfig.fCoherentMode = 1;
    if (FUNC_8(VAR_32, VAR_38->pixel_clock))
     VAR_41.v4.acConfig.fDualLinkConnector = 1;
   }
   break;
  case 5:
   VAR_41.v5.ucAction = VAR_33;
   if (VAR_45)
    VAR_41.v5.usSymClock = FUNC_6(VAR_47 / 10);
   else
    VAR_41.v5.usSymClock = FUNC_6(VAR_38->pixel_clock / 10);

   switch (VAR_38->encoder_id) {
   case 130:
    if (VAR_39->linkb)
     VAR_41.v5.ucPhyId = VAR_2;
    else
     VAR_41.v5.ucPhyId = VAR_1;
    break;
   case 129:
    if (VAR_39->linkb)
     VAR_41.v5.ucPhyId = VAR_4;
    else
     VAR_41.v5.ucPhyId = VAR_3;
    break;
   case 128:
    if (VAR_39->linkb)
     VAR_41.v5.ucPhyId = VAR_6;
    else
     VAR_41.v5.ucPhyId = VAR_5;
    break;
   }
   if (VAR_45)
    VAR_41.v5.ucLaneNum = VAR_48;
   else if (VAR_38->pixel_clock > 165000)
    VAR_41.v5.ucLaneNum = 8;
   else
    VAR_41.v5.ucLaneNum = 4;
   VAR_41.v5.ucConnObjId = VAR_49;
   VAR_41.v5.ucDigMode = FUNC_5(VAR_32);

   if (VAR_45 && VAR_37->clock.dp_extclk)
    VAR_41.v5.asConfig.ucPhyClkSrcId = VAR_25;
   else
    VAR_41.v5.asConfig.ucPhyClkSrcId = VAR_46;

   if (VAR_45)
    VAR_41.v5.asConfig.ucCoherentMode = 1;
   else if (VAR_38->devices & (VAR_0)) {
    if (VAR_39->coherent_mode)
     VAR_41.v5.asConfig.ucCoherentMode = 1;
   }
   if (VAR_52 == VAR_29)
    VAR_41.v5.asConfig.ucHPDSel = 0;
   else
    VAR_41.v5.asConfig.ucHPDSel = VAR_52 + 1;
   VAR_41.v5.ucDigEncoderSel = 1 << VAR_51;
   VAR_41.v5.ucDPLaneSet = VAR_35;
   break;
  default:
   FUNC_0("Unknown table version %d, %d\n", VAR_43, VAR_44);
   break;
  }
  break;
 default:
  FUNC_0("Unknown table version %d, %d\n", VAR_43, VAR_44);
  break;
 }

 FUNC_3(VAR_37->mode_info.atom_context, VAR_42, (uint32_t *)&VAR_41);
}
