
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct radeon_mode_info {TYPE_4__* atom_context; } ;
struct radeon_encoder_int_tmds {TYPE_3__* tmds_pll; } ;
struct TYPE_5__ {struct drm_device* dev; } ;
struct radeon_encoder {TYPE_1__ base; } ;
struct radeon_device {struct radeon_mode_info mode_info; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct _ATOM_TMDS_INFO {TYPE_2__* asMiscInfo; int usMaxFrequency; } ;
struct TYPE_8__ {int bios; } ;
struct TYPE_7__ {int freq; int value; } ;
struct TYPE_6__ {int ucPLL_ChargePump; int ucPLL_VCO_Gain; int ucPLL_DutyCycle; int ucPLL_VoltageSwing; int usFrequency; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_4__*,int,int *,int *,int *,int*) ;
 void* FUNC_3 (int ) ;

bool FUNC_4(struct radeon_encoder *VAR_2,
       struct radeon_encoder_int_tmds *VAR_3)
{
 struct drm_device *VAR_4 = VAR_2->base.dev;
 struct radeon_device *VAR_5 = VAR_4->dev_private;
 struct radeon_mode_info *VAR_6 = &VAR_5->mode_info;
 int VAR_7 = FUNC_1(VAR_0, VAR_1);
 uint16_t VAR_8;
 struct _ATOM_TMDS_INFO *VAR_9;
 uint8_t VAR_10, VAR_11;
 uint16_t VAR_12;
 int VAR_13;

 if (FUNC_2(VAR_6->atom_context, VAR_7, ((void*)0),
       &VAR_10, &VAR_11, &VAR_8)) {
  VAR_9 =
   (struct _ATOM_TMDS_INFO *)(VAR_6->atom_context->bios +
         VAR_8);

  VAR_12 = FUNC_3(VAR_9->usMaxFrequency);
  for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {
   VAR_3->tmds_pll[VAR_13].freq =
       FUNC_3(VAR_9->asMiscInfo[VAR_13].usFrequency);
   VAR_3->tmds_pll[VAR_13].value =
       VAR_9->asMiscInfo[VAR_13].ucPLL_ChargePump & 0x3f;
   VAR_3->tmds_pll[VAR_13].value |=
       (VAR_9->asMiscInfo[VAR_13].
        ucPLL_VCO_Gain & 0x3f) << 6;
   VAR_3->tmds_pll[VAR_13].value |=
       (VAR_9->asMiscInfo[VAR_13].
        ucPLL_DutyCycle & 0xf) << 12;
   VAR_3->tmds_pll[VAR_13].value |=
       (VAR_9->asMiscInfo[VAR_13].
        ucPLL_VoltageSwing & 0xf) << 16;

   FUNC_0("TMDS PLL From ATOMBIOS %u %x\n",
      VAR_3->tmds_pll[VAR_13].freq,
      VAR_3->tmds_pll[VAR_13].value);

   if (VAR_12 == VAR_3->tmds_pll[VAR_13].freq) {
    VAR_3->tmds_pll[VAR_13].freq = 0xffffffff;
    break;
   }
  }
  return 1;
 }
 return 0;
}
