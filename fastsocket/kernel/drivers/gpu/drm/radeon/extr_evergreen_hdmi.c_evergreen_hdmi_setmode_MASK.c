
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int u8 ;
struct radeon_encoder_atom_dig {TYPE_1__* afmt; } ;
struct radeon_encoder {struct radeon_encoder_atom_dig* enc_priv; } ;
struct radeon_device {int dummy; } ;
struct hdmi_avi_infoframe {int dummy; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_display_mode {int clock; } ;
struct drm_device {struct radeon_device* dev_private; } ;
typedef scalar_t__ ssize_t ;
typedef int buffer ;
struct TYPE_2__ {scalar_t__ offset; int enabled; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (char*,scalar_t__) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int) ;
 int VAR_13 ;
 int FUNC_2 (int) ;
 int VAR_14 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (int) ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_5 (scalar_t__,int) ;
 scalar_t__ FUNC_6 (struct hdmi_avi_infoframe*,struct drm_display_mode*) ;
 int FUNC_7 (struct drm_encoder*,int ) ;
 int FUNC_8 (struct drm_encoder*,int *,int) ;
 scalar_t__ FUNC_9 (struct hdmi_avi_infoframe*,int *,int) ;
 int FUNC_10 (struct drm_encoder*,int ) ;
 struct radeon_encoder* FUNC_11 (struct drm_encoder*) ;

void FUNC_12(struct drm_encoder *VAR_27, struct drm_display_mode *VAR_28)
{
 struct drm_device *VAR_29 = VAR_27->dev;
 struct radeon_device *VAR_30 = VAR_29->dev_private;
 struct radeon_encoder *VAR_31 = FUNC_11(VAR_27);
 struct radeon_encoder_atom_dig *VAR_32 = VAR_31->enc_priv;
 u8 VAR_33[VAR_24 + VAR_16];
 struct hdmi_avi_infoframe VAR_34;
 uint32_t VAR_35;
 ssize_t VAR_36;


 if (!VAR_32->afmt->enabled)
  return;
 VAR_35 = VAR_32->afmt->offset;

 FUNC_10(VAR_27, VAR_28->clock);

 FUNC_5(VAR_26 + VAR_35,
        VAR_25);

 FUNC_5(VAR_1 + VAR_35, 0x1000);

 FUNC_5(VAR_15 + VAR_35,
        FUNC_1(1) |
        FUNC_3(3));

 FUNC_5(VAR_3 + VAR_35,
        VAR_4 |
        VAR_0);

 FUNC_5(VAR_11 + VAR_35,
        VAR_10 |
        VAR_12);

 FUNC_5(VAR_26 + VAR_35,
        VAR_25 |
        VAR_21 |
        VAR_20);

 FUNC_5(VAR_22 + VAR_35,
        VAR_18 |
        VAR_17 |
        VAR_14 |
        VAR_13);

 FUNC_5(VAR_5 + VAR_35,
        VAR_2);

 FUNC_5(VAR_23 + VAR_35,
        FUNC_4(2) |
        FUNC_2(2));

 FUNC_5(VAR_19 + VAR_35, 0);

 VAR_36 = FUNC_6(&VAR_34, VAR_28);
 if (VAR_36 < 0) {
  FUNC_0("failed to setup AVI infoframe: %zd\n", VAR_36);
  return;
 }

 VAR_36 = FUNC_9(&VAR_34, VAR_33, sizeof(VAR_33));
 if (VAR_36 < 0) {
  FUNC_0("failed to pack AVI infoframe: %zd\n", VAR_36);
  return;
 }

 FUNC_8(VAR_27, VAR_33, sizeof(VAR_33));
 FUNC_7(VAR_27, VAR_28->clock);


 FUNC_5(VAR_6 + VAR_35, 0x00FFFFFF);
 FUNC_5(VAR_7 + VAR_35, 0x007FFFFF);
 FUNC_5(VAR_8 + VAR_35, 0x00000001);
 FUNC_5(VAR_9 + VAR_35, 0x00000001);
}
