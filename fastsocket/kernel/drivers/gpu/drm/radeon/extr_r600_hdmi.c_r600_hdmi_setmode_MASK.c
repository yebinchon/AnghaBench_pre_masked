
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
 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int FUNC_3 (int) ;
 int VAR_9 ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_6 (scalar_t__,int) ;
 scalar_t__ FUNC_7 (struct hdmi_avi_infoframe*,struct drm_display_mode*) ;
 scalar_t__ FUNC_8 (struct hdmi_avi_infoframe*,int *,int) ;
 int FUNC_9 (struct drm_encoder*,int ) ;
 int FUNC_10 (struct drm_encoder*) ;
 int FUNC_11 (struct drm_encoder*,int ) ;
 int FUNC_12 (struct drm_encoder*,int *,int) ;
 struct radeon_encoder* FUNC_13 (struct drm_encoder*) ;

void FUNC_14(struct drm_encoder *VAR_27, struct drm_display_mode *VAR_28)
{
 struct drm_device *VAR_29 = VAR_27->dev;
 struct radeon_device *VAR_30 = VAR_29->dev_private;
 struct radeon_encoder *VAR_31 = FUNC_13(VAR_27);
 struct radeon_encoder_atom_dig *VAR_32 = VAR_31->enc_priv;
 u8 VAR_33[VAR_26 + VAR_25];
 struct hdmi_avi_infoframe VAR_34;
 uint32_t VAR_35;
 ssize_t VAR_36;


 if (!VAR_32->afmt->enabled)
  return;
 VAR_35 = VAR_32->afmt->offset;

 FUNC_9(VAR_27, VAR_28->clock);

 FUNC_6(VAR_24 + VAR_35,
        VAR_19);

 FUNC_6(VAR_7 + VAR_35, 0x1000);

 if (FUNC_0(VAR_30)) {
  FUNC_6(VAR_10 + VAR_35,
         FUNC_2(1) |
         FUNC_4(3));
  FUNC_6(VAR_1 + VAR_35,
         VAR_2 |
         VAR_0);
 } else {
  FUNC_6(VAR_10 + VAR_35,
         VAR_11 |
         FUNC_2(1) |
         FUNC_4(3) |
         VAR_3);
 }

 FUNC_6(VAR_5 + VAR_35,
        VAR_4 |
        VAR_6);

 FUNC_6(VAR_24 + VAR_35,
        VAR_19 |
        VAR_16 |
        VAR_15);


 FUNC_6(VAR_17 + VAR_35,
        VAR_13 |
        VAR_12 |
        VAR_9 |
        VAR_8);

 FUNC_6(VAR_18 + VAR_35,
        FUNC_5(2) |
        FUNC_3(2));

 FUNC_6(VAR_14 + VAR_35, 0);

 VAR_36 = FUNC_7(&VAR_34, VAR_28);
 if (VAR_36 < 0) {
  FUNC_1("failed to setup AVI infoframe: %zd\n", VAR_36);
  return;
 }

 VAR_36 = FUNC_8(&VAR_34, VAR_33, sizeof(VAR_33));
 if (VAR_36 < 0) {
  FUNC_1("failed to pack AVI infoframe: %zd\n", VAR_36);
  return;
 }

 FUNC_12(VAR_27, VAR_33, sizeof(VAR_33));
 FUNC_11(VAR_27, VAR_28->clock);


 FUNC_6(VAR_20 + VAR_35, 0x00FFFFFF);
 FUNC_6(VAR_21 + VAR_35, 0x007FFFFF);
 FUNC_6(VAR_22 + VAR_35, 0x00000001);
 FUNC_6(VAR_23 + VAR_35, 0x00000001);

 FUNC_10(VAR_27);
}
