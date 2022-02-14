
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct radeon_mode_info {TYPE_2__* atom_context; } ;
struct radeon_encoder_primary_dac {int ps2_pdac_adj; } ;
struct TYPE_3__ {struct drm_device* dev; } ;
struct radeon_encoder {TYPE_1__ base; } ;
struct radeon_device {struct radeon_mode_info mode_info; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct _COMPASSIONATE_DATA {int ucDAC1_BG_Adjustment; int ucDAC1_DAC_Adjustment; } ;
struct TYPE_4__ {scalar_t__ bios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int,int *,int*,int*,scalar_t__*) ;
 struct radeon_encoder_primary_dac* FUNC_2 (int,int ) ;

struct radeon_encoder_primary_dac *
FUNC_3(struct radeon_encoder *VAR_3)
{
 struct drm_device *VAR_4 = VAR_3->base.dev;
 struct radeon_device *VAR_5 = VAR_4->dev_private;
 struct radeon_mode_info *VAR_6 = &VAR_5->mode_info;
 int VAR_7 = FUNC_0(VAR_1, VAR_0);
 uint16_t VAR_8;
 struct _COMPASSIONATE_DATA *VAR_9;
 uint8_t VAR_10, VAR_11;
 uint8_t VAR_12, VAR_13;
 struct radeon_encoder_primary_dac *VAR_14 = ((void*)0);

 if (FUNC_1(VAR_6->atom_context, VAR_7, ((void*)0),
       &VAR_10, &VAR_11, &VAR_8)) {
  VAR_9 = (struct _COMPASSIONATE_DATA *)
   (VAR_6->atom_context->bios + VAR_8);

  VAR_14 = FUNC_2(sizeof(struct radeon_encoder_primary_dac), VAR_2);

  if (!VAR_14)
   return ((void*)0);

  VAR_12 = VAR_9->ucDAC1_BG_Adjustment;
  VAR_13 = VAR_9->ucDAC1_DAC_Adjustment;
  VAR_14->ps2_pdac_adj = (VAR_12 << 8) | (VAR_13);

 }
 return VAR_14;
}
