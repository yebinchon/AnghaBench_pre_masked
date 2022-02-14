
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct radeon_encoder_atom_dig {TYPE_1__* afmt; } ;
struct radeon_encoder {int encoder_id; struct radeon_encoder_atom_dig* enc_priv; } ;
struct radeon_device {int dev; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct TYPE_2__ {int enabled; int id; scalar_t__ offset; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*) ;
 scalar_t__ FUNC_2 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*,scalar_t__,int) ;




 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (struct radeon_device*,int ) ;
 struct radeon_encoder* FUNC_8 (struct drm_encoder*) ;

void FUNC_9(struct drm_encoder *VAR_8)
{
 struct drm_device *VAR_9 = VAR_8->dev;
 struct radeon_device *VAR_10 = VAR_9->dev_private;
 struct radeon_encoder *VAR_11 = FUNC_8(VAR_8);
 struct radeon_encoder_atom_dig *VAR_12 = VAR_11->enc_priv;
 uint32_t VAR_13;

 if (FUNC_2(VAR_10))
  return;


 if (!VAR_12 || !VAR_12->afmt) {
  return;
 }
 if (!VAR_12->afmt->enabled)
  return;
 VAR_13 = VAR_12->afmt->offset;

 FUNC_3("Disabling HDMI interface @ 0x%04X for encoder 0x%x\n",
    VAR_13, VAR_11->encoder_id);


 FUNC_7(VAR_10, VAR_12->afmt->id);


 if (FUNC_0(VAR_10) && !FUNC_1(VAR_10)) {
  switch (VAR_11->encoder_id) {
  case 129:
   FUNC_5(VAR_2, 0,
     ~VAR_3);
   break;
  case 128:
   FUNC_5(VAR_0, 0,
     ~VAR_1);
   break;
  case 131:
   FUNC_5(VAR_4, 0, ~VAR_5);
   break;
  case 130:
   break;
  default:
   FUNC_6(VAR_10->dev, "Invalid encoder for HDMI: 0x%X\n",
    VAR_11->encoder_id);
   break;
  }
  FUNC_4(VAR_6 + VAR_13, VAR_7);
 }

 VAR_12->afmt->enabled = 0;
}
