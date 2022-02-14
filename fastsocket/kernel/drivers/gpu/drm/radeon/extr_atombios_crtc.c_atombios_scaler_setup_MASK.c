
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct radeon_encoder_atom_dac {int tv_std; } ;
struct radeon_encoder {int active_device; struct radeon_encoder_atom_dac* enc_priv; } ;
struct TYPE_4__ {int atom_context; } ;
struct radeon_device {scalar_t__ family; TYPE_1__ mode_info; } ;
struct radeon_crtc {int rmx_type; scalar_t__ crtc_id; int encoder; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;
typedef enum radeon_tv_std { ____Placeholder_radeon_tv_std } radeon_tv_std ;
typedef int args ;
struct TYPE_5__ {void* ucEnable; void* ucTVStandard; scalar_t__ ucScaler; } ;
typedef TYPE_2__ ENABLE_SCALER_PS_ALLOCATION ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int ,int ) ;



 void* VAR_16 ;
 int FUNC_2 (int ,int,int *) ;
 int FUNC_3 (struct radeon_device*,struct radeon_crtc*) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 struct radeon_crtc* FUNC_5 (struct drm_crtc*) ;
 struct radeon_encoder* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct drm_crtc *VAR_17)
{
 struct drm_device *VAR_18 = VAR_17->dev;
 struct radeon_device *VAR_19 = VAR_18->dev_private;
 struct radeon_crtc *VAR_20 = FUNC_5(VAR_17);
 ENABLE_SCALER_PS_ALLOCATION VAR_21;
 int VAR_22 = FUNC_1(VAR_14, VAR_15);
 struct radeon_encoder *VAR_23 =
  FUNC_6(VAR_20->encoder);

 enum radeon_tv_std VAR_24 = 135;
 bool VAR_25 = 0, VAR_26 = 0;

 if (!FUNC_0(VAR_19) && VAR_20->crtc_id)
  return;

 if (VAR_23->active_device & VAR_0) {
  struct radeon_encoder_atom_dac *VAR_27 = VAR_23->enc_priv;
  VAR_24 = VAR_27->tv_std;
  VAR_25 = 1;
 }

 FUNC_4(&VAR_21, 0, sizeof(VAR_21));

 VAR_21.ucScaler = VAR_20->crtc_id;

 if (VAR_25) {
  switch (VAR_24) {
  case 135:
  default:
   VAR_21.ucTVStandard = VAR_5;
   break;
  case 133:
   VAR_21.ucTVStandard = VAR_7;
   break;
  case 130:
   VAR_21.ucTVStandard = VAR_10;
   break;
  case 132:
   VAR_21.ucTVStandard = VAR_8;
   break;
  case 134:
   VAR_21.ucTVStandard = VAR_6;
   break;
  case 129:
   VAR_21.ucTVStandard = VAR_7;
   break;
  case 128:
   VAR_21.ucTVStandard = VAR_11;
   break;
  case 131:
   VAR_21.ucTVStandard = VAR_9;
   break;
  }
  VAR_21.ucEnable = VAR_16;
 } else if (VAR_26) {
  VAR_21.ucTVStandard = VAR_4;
  VAR_21.ucEnable = VAR_16;
 } else {
  switch (VAR_20->rmx_type) {
  case 136:
   VAR_21.ucEnable = VAR_3;
   break;
  case 137:
   VAR_21.ucEnable = VAR_1;
   break;
  case 138:
   VAR_21.ucEnable = VAR_3;
   break;
  default:
   if (FUNC_0(VAR_19))
    VAR_21.ucEnable = VAR_2;
   else
    VAR_21.ucEnable = VAR_1;
   break;
  }
 }
 FUNC_2(VAR_19->mode_info.atom_context, VAR_22, (uint32_t *)&VAR_21);
 if ((VAR_25 || VAR_26)
     && VAR_19->family >= VAR_13 && VAR_19->family <= VAR_12) {
  FUNC_3(VAR_19, VAR_20);
 }
}
