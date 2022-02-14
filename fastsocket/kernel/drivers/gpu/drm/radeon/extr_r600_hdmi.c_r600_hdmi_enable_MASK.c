
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int u32 ;
struct radeon_encoder_atom_dig {TYPE_2__* afmt; } ;
struct radeon_encoder {int encoder_id; struct radeon_encoder_atom_dig* enc_priv; } ;
struct TYPE_3__ {scalar_t__ installed; } ;
struct radeon_device {TYPE_1__ irq; int dev; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct TYPE_4__ {int enabled; int id; scalar_t__ offset; } ;


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
 int VAR_8 ;
 int FUNC_4 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (struct radeon_device*,int ) ;
 struct radeon_encoder* FUNC_9 (struct drm_encoder*) ;

void FUNC_10(struct drm_encoder *VAR_13)
{
 struct drm_device *VAR_14 = VAR_13->dev;
 struct radeon_device *VAR_15 = VAR_14->dev_private;
 struct radeon_encoder *VAR_16 = FUNC_9(VAR_13);
 struct radeon_encoder_atom_dig *VAR_17 = VAR_16->enc_priv;
 uint32_t VAR_18;
 u32 VAR_19;

 if (FUNC_2(VAR_15))
  return;


 if (VAR_17->afmt->enabled)
  return;
 VAR_18 = VAR_17->afmt->offset;


 if (FUNC_0(VAR_15) && !FUNC_1(VAR_15)) {
  VAR_19 = VAR_8 | VAR_7;
  switch (VAR_16->encoder_id) {
  case 129:
   FUNC_6(VAR_2, VAR_3,
     ~VAR_3);
   VAR_19 |= FUNC_4(VAR_12);
   break;
  case 128:
   FUNC_6(VAR_0, VAR_1,
     ~VAR_1);
   VAR_19 |= FUNC_4(VAR_11);
   break;
  case 131:
   FUNC_6(VAR_4, VAR_5, ~VAR_5);
   VAR_19 |= FUNC_4(VAR_9);
   break;
  case 130:
   VAR_19 |= FUNC_4(VAR_10);
   break;
  default:
   FUNC_7(VAR_15->dev, "Invalid encoder for HDMI: 0x%X\n",
    VAR_16->encoder_id);
   break;
  }
  FUNC_5(VAR_6 + VAR_18, VAR_19);
 }

 if (VAR_15->irq.installed) {

  FUNC_8(VAR_15, VAR_17->afmt->id);
 }

 VAR_17->afmt->enabled = 1;

 FUNC_3("Enabling HDMI interface @ 0x%04X for encoder 0x%x\n",
    VAR_18, VAR_16->encoder_id);
}
