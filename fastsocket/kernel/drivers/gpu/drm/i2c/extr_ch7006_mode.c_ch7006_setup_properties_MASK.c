
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
struct i2c_client {int dummy; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int vtotal; int hdisplay; int vdisplay; } ;
struct ch7006_tv_norm_info {int vtotal; int hvirtual; int vdisplay; int voffset; } ;
struct ch7006_state {int* regs; } ;
struct ch7006_priv {size_t norm; int hmargin; int vmargin; int contrast; int flicker; struct ch7006_mode* mode; struct ch7006_state state; } ;
struct ch7006_mode {int enc_hdisp; int enc_vdisp; struct drm_display_mode mode; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct i2c_client*,char*,int,int) ;
 struct ch7006_tv_norm_info* VAR_11 ;
 int FUNC_2 (int,int) ;
 struct i2c_client* FUNC_3 (struct drm_encoder*) ;
 int VAR_12 ;
 int FUNC_4 (int ,int,int,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct ch7006_state*,int ,int ,int) ;
 struct ch7006_priv* FUNC_8 (struct drm_encoder*) ;

void FUNC_9(struct drm_encoder *VAR_13)
{
 struct i2c_client *VAR_14 = FUNC_3(VAR_13);
 struct ch7006_priv *VAR_15 = FUNC_8(VAR_13);
 struct ch7006_state *VAR_16 = &VAR_15->state;
 struct ch7006_tv_norm_info *VAR_17 = &VAR_11[VAR_15->norm];
 struct ch7006_mode *VAR_18 = VAR_15->mode;
 struct drm_display_mode *VAR_19 = &VAR_18->mode;
 uint8_t *VAR_20 = VAR_16->regs;
 int VAR_21, VAR_22, VAR_23, VAR_24;
 uint64_t VAR_25, VAR_26;

 VAR_21 = FUNC_4(0, 2, 3, VAR_15->flicker);
 VAR_20[VAR_2] = FUNC_0(VAR_5, VAR_21) |
  FUNC_0(VAR_4, VAR_21) |
  FUNC_0(VAR_3, 1);

 VAR_22 = FUNC_4(0, 5, 7, VAR_15->contrast);
 VAR_20[VAR_0] = FUNC_0(VAR_1, VAR_22);

 VAR_25 = VAR_17->vtotal*VAR_12;
 FUNC_2(VAR_25, VAR_19->vtotal);

 VAR_26 = VAR_18->enc_hdisp*VAR_12;
 FUNC_2(VAR_26, VAR_18->enc_vdisp);

 VAR_23 = FUNC_6((VAR_17->hvirtual * VAR_26 - VAR_19->hdisplay * VAR_25)
      * VAR_15->hmargin * VAR_19->vtotal) / VAR_17->vtotal / 100 / 4;

 FUNC_7(VAR_16, VAR_7, VAR_9, VAR_23);
 FUNC_7(VAR_16, VAR_6, 0, VAR_23);

 VAR_24 = FUNC_5(0, VAR_17->vdisplay - FUNC_6(VAR_19->vdisplay*VAR_25)
     + VAR_17->voffset) * VAR_15->vmargin / 100 / 2;

 FUNC_7(VAR_16, VAR_7, VAR_10, VAR_24);
 FUNC_7(VAR_16, VAR_8, 0, VAR_24);

 FUNC_1(VAR_14, "hpos: %d, vpos: %d\n", VAR_23, VAR_24);
}
