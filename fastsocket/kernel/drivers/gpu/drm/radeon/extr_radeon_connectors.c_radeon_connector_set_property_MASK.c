
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct radeon_encoder_tv_dac {int coherent_mode; int tv_std; } ;
struct radeon_encoder_int_tmds {int coherent_mode; int tv_std; } ;
struct radeon_encoder_atom_dig {int coherent_mode; int tv_std; } ;
struct radeon_encoder_atom_dac {int coherent_mode; int tv_std; } ;
struct radeon_encoder {int underscan_type; int underscan_hborder; int underscan_vborder; int base; struct radeon_encoder_tv_dac* enc_priv; } ;
struct TYPE_2__ {struct drm_property* tmds_pll_property; struct drm_property* load_detect_property; struct drm_property* tv_std_property; struct drm_property* underscan_vborder_property; struct drm_property* underscan_hborder_property; struct drm_property* underscan_property; struct drm_property* coherent_mode_property; } ;
struct radeon_device {scalar_t__ is_atom_bios; TYPE_1__ mode_info; } ;
struct radeon_connector {int dac_load_detect; } ;
struct drm_property {int dummy; } ;
struct drm_encoder {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector {struct drm_device* dev; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct radeon_encoder*,struct radeon_encoder_tv_dac*) ;
 struct drm_encoder* FUNC_2 (struct drm_connector*,int ) ;
 int FUNC_3 (struct radeon_encoder*,struct radeon_encoder_tv_dac*) ;
 int FUNC_4 (struct radeon_encoder*,struct radeon_encoder_tv_dac*) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_3 ;
 struct radeon_connector* FUNC_6 (struct drm_connector*) ;
 struct radeon_encoder* FUNC_7 (struct drm_encoder*) ;

__attribute__((used)) static int FUNC_8(struct drm_connector *VAR_4, struct drm_property *VAR_5,
      uint64_t VAR_6)
{
 struct drm_device *VAR_7 = VAR_4->dev;
 struct radeon_device *VAR_8 = VAR_7->dev_private;
 struct drm_encoder *VAR_9;
 struct radeon_encoder *VAR_10;

 if (VAR_5 == VAR_8->mode_info.coherent_mode_property) {
  struct radeon_encoder_atom_dig *VAR_11;
  bool VAR_12;


  VAR_9 = FUNC_2(VAR_4, VAR_1);
  if (!VAR_9)
   return 0;

  VAR_10 = FUNC_7(VAR_9);

  if (!VAR_10->enc_priv)
   return 0;

  VAR_11 = VAR_10->enc_priv;
  VAR_12 = VAR_6 ? 1 : 0;
  if (VAR_11->coherent_mode != VAR_12) {
   VAR_11->coherent_mode = VAR_12;
   FUNC_5(&VAR_10->base);
  }
 }

 if (VAR_5 == VAR_8->mode_info.underscan_property) {

  VAR_9 = FUNC_2(VAR_4, VAR_1);
  if (!VAR_9)
   return 0;

  VAR_10 = FUNC_7(VAR_9);

  if (VAR_10->underscan_type != VAR_6) {
   VAR_10->underscan_type = VAR_6;
   FUNC_5(&VAR_10->base);
  }
 }

 if (VAR_5 == VAR_8->mode_info.underscan_hborder_property) {

  VAR_9 = FUNC_2(VAR_4, VAR_1);
  if (!VAR_9)
   return 0;

  VAR_10 = FUNC_7(VAR_9);

  if (VAR_10->underscan_hborder != VAR_6) {
   VAR_10->underscan_hborder = VAR_6;
   FUNC_5(&VAR_10->base);
  }
 }

 if (VAR_5 == VAR_8->mode_info.underscan_vborder_property) {

  VAR_9 = FUNC_2(VAR_4, VAR_1);
  if (!VAR_9)
   return 0;

  VAR_10 = FUNC_7(VAR_9);

  if (VAR_10->underscan_vborder != VAR_6) {
   VAR_10->underscan_vborder = VAR_6;
   FUNC_5(&VAR_10->base);
  }
 }

 if (VAR_5 == VAR_8->mode_info.tv_std_property) {
  VAR_9 = FUNC_2(VAR_4, VAR_2);
  if (!VAR_9) {
   VAR_9 = FUNC_2(VAR_4, VAR_0);
  }

  if (!VAR_9)
   return 0;

  VAR_10 = FUNC_7(VAR_9);
  if (!VAR_10->enc_priv)
   return 0;
  if (FUNC_0(VAR_8) || VAR_3) {
   struct radeon_encoder_atom_dac *VAR_13;
   VAR_13 = VAR_10->enc_priv;
   VAR_13->tv_std = VAR_6;
  } else {
   struct radeon_encoder_tv_dac *VAR_14;
   VAR_14 = VAR_10->enc_priv;
   VAR_14->tv_std = VAR_6;
  }
  FUNC_5(&VAR_10->base);
 }

 if (VAR_5 == VAR_8->mode_info.load_detect_property) {
  struct radeon_connector *VAR_15 =
   FUNC_6(VAR_4);

  if (VAR_6 == 0)
   VAR_15->dac_load_detect = 0;
  else
   VAR_15->dac_load_detect = 1;
 }

 if (VAR_5 == VAR_8->mode_info.tmds_pll_property) {
  struct radeon_encoder_int_tmds *VAR_16 = ((void*)0);
  bool VAR_17 = 0;

  VAR_9 = FUNC_2(VAR_4, VAR_1);
  if (!VAR_9)
   return 0;

  VAR_10 = FUNC_7(VAR_9);

  VAR_16 = VAR_10->enc_priv;
  if (!VAR_16)
   return 0;

  if (VAR_6 == 0) {
   if (VAR_8->is_atom_bios)
    VAR_17 = FUNC_1(VAR_10, VAR_16);
   else
    VAR_17 = FUNC_3(VAR_10, VAR_16);
  }
  if (VAR_6 == 1 || VAR_17 == 0) {
   FUNC_4(VAR_10, VAR_16);
  }
  FUNC_5(&VAR_10->base);
 }

 return 0;
}
