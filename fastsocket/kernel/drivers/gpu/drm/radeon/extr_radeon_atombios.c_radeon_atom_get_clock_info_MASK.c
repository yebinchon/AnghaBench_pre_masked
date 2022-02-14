
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int susAccess; } ;
struct TYPE_13__ {TYPE_1__ usFirmwareCapability; int usMaxPixelClock; int ulDefaultMemoryClock; int ulDefaultEngineClock; int usMaxMemoryClockPLL_Input; int usMinMemoryClockPLL_Input; int ulMaxMemoryClockPLL_Output; int usMinMemoryClockPLL_Output; int usReferenceClock; int usMaxEngineClockPLL_Input; int usMinEngineClockPLL_Input; int ulMaxEngineClockPLL_Output; int usMinEngineClockPLL_Output; int usMaxPixelClockPLL_Input; int usMinPixelClockPLL_Input; int ulMaxPixelClockPLL_Output; int usMinPixelClockPLL_Output; } ;
struct TYPE_12__ {int usUniphyDPModeExtClkFreq; int ulDefaultDispEngineClkFreq; int usMemoryReferenceClock; int usCoreReferenceClock; } ;
struct TYPE_11__ {int usLcdMaxPixelClockPLL_Output; int usLcdMinPixelClockPLL_Output; } ;
struct TYPE_10__ {int ulMinPixelClockPLL_Output; } ;
union firmware_info {TYPE_6__ info; TYPE_5__ info_21; TYPE_4__ info_14; TYPE_3__ info_12; } ;
typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct radeon_pll {int reference_freq; int pll_out_min; int pll_out_max; int lcd_pll_out_min; int lcd_pll_out_max; int pll_in_min; int pll_in_max; scalar_t__ reference_div; } ;
struct radeon_mode_info {int firmware_flags; TYPE_7__* atom_context; } ;
struct TYPE_9__ {int default_dispclk; int dp_extclk; int max_pixel_clock; void* default_mclk; void* default_sclk; struct radeon_pll mpll; struct radeon_pll spll; struct radeon_pll dcpll; struct radeon_pll p2pll; struct radeon_pll p1pll; } ;
struct radeon_device {struct radeon_mode_info mode_info; TYPE_2__ clock; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct TYPE_14__ {scalar_t__ bios; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 scalar_t__ FUNC_2 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_7__*,int,int *,int*,int*,scalar_t__*) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;

bool FUNC_7(struct drm_device *VAR_2)
{
 struct radeon_device *VAR_3 = VAR_2->dev_private;
 struct radeon_mode_info *VAR_4 = &VAR_3->mode_info;
 int VAR_5 = FUNC_3(VAR_0, VAR_1);
 union firmware_info *VAR_6;
 uint8_t VAR_7, VAR_8;
 struct radeon_pll *VAR_9 = &VAR_3->clock.p1pll;
 struct radeon_pll *VAR_10 = &VAR_3->clock.p2pll;
 struct radeon_pll *VAR_11 = &VAR_3->clock.dcpll;
 struct radeon_pll *VAR_12 = &VAR_3->clock.spll;
 struct radeon_pll *VAR_13 = &VAR_3->clock.mpll;
 uint16_t VAR_14;

 if (FUNC_4(VAR_4->atom_context, VAR_5, ((void*)0),
       &VAR_7, &VAR_8, &VAR_14)) {
  VAR_6 =
   (union firmware_info *)(VAR_4->atom_context->bios +
      VAR_14);

  VAR_9->reference_freq =
      FUNC_5(VAR_6->info.usReferenceClock);
  VAR_9->reference_div = 0;

  if (VAR_8 < 2)
   VAR_9->pll_out_min =
    FUNC_5(VAR_6->info.usMinPixelClockPLL_Output);
  else
   VAR_9->pll_out_min =
    FUNC_6(VAR_6->info_12.ulMinPixelClockPLL_Output);
  VAR_9->pll_out_max =
      FUNC_6(VAR_6->info.ulMaxPixelClockPLL_Output);

  if (VAR_8 >= 4) {
   VAR_9->lcd_pll_out_min =
    FUNC_5(VAR_6->info_14.usLcdMinPixelClockPLL_Output) * 100;
   if (VAR_9->lcd_pll_out_min == 0)
    VAR_9->lcd_pll_out_min = VAR_9->pll_out_min;
   VAR_9->lcd_pll_out_max =
    FUNC_5(VAR_6->info_14.usLcdMaxPixelClockPLL_Output) * 100;
   if (VAR_9->lcd_pll_out_max == 0)
    VAR_9->lcd_pll_out_max = VAR_9->pll_out_max;
  } else {
   VAR_9->lcd_pll_out_min = VAR_9->pll_out_min;
   VAR_9->lcd_pll_out_max = VAR_9->pll_out_max;
  }

  if (VAR_9->pll_out_min == 0) {
   if (FUNC_0(VAR_3))
    VAR_9->pll_out_min = 64800;
   else
    VAR_9->pll_out_min = 20000;
  }

  VAR_9->pll_in_min =
      FUNC_5(VAR_6->info.usMinPixelClockPLL_Input);
  VAR_9->pll_in_max =
      FUNC_5(VAR_6->info.usMaxPixelClockPLL_Input);

  *VAR_10 = *VAR_9;


  if (FUNC_1(VAR_3))
   VAR_12->reference_freq =
    FUNC_5(VAR_6->info_21.usCoreReferenceClock);
  else
   VAR_12->reference_freq =
    FUNC_5(VAR_6->info.usReferenceClock);
  VAR_12->reference_div = 0;

  VAR_12->pll_out_min =
      FUNC_5(VAR_6->info.usMinEngineClockPLL_Output);
  VAR_12->pll_out_max =
      FUNC_6(VAR_6->info.ulMaxEngineClockPLL_Output);


  if (VAR_12->pll_out_min == 0) {
   if (FUNC_0(VAR_3))
    VAR_12->pll_out_min = 64800;
   else
    VAR_12->pll_out_min = 20000;
  }

  VAR_12->pll_in_min =
      FUNC_5(VAR_6->info.usMinEngineClockPLL_Input);
  VAR_12->pll_in_max =
      FUNC_5(VAR_6->info.usMaxEngineClockPLL_Input);


  if (FUNC_1(VAR_3))
   VAR_13->reference_freq =
    FUNC_5(VAR_6->info_21.usMemoryReferenceClock);
  else
   VAR_13->reference_freq =
    FUNC_5(VAR_6->info.usReferenceClock);
  VAR_13->reference_div = 0;

  VAR_13->pll_out_min =
      FUNC_5(VAR_6->info.usMinMemoryClockPLL_Output);
  VAR_13->pll_out_max =
      FUNC_6(VAR_6->info.ulMaxMemoryClockPLL_Output);


  if (VAR_13->pll_out_min == 0) {
   if (FUNC_0(VAR_3))
    VAR_13->pll_out_min = 64800;
   else
    VAR_13->pll_out_min = 20000;
  }

  VAR_13->pll_in_min =
      FUNC_5(VAR_6->info.usMinMemoryClockPLL_Input);
  VAR_13->pll_in_max =
      FUNC_5(VAR_6->info.usMaxMemoryClockPLL_Input);

  VAR_3->clock.default_sclk =
      FUNC_6(VAR_6->info.ulDefaultEngineClock);
  VAR_3->clock.default_mclk =
      FUNC_6(VAR_6->info.ulDefaultMemoryClock);

  if (FUNC_1(VAR_3)) {
   VAR_3->clock.default_dispclk =
    FUNC_6(VAR_6->info_21.ulDefaultDispEngineClkFreq);
   if (VAR_3->clock.default_dispclk == 0) {
    if (FUNC_2(VAR_3))
     VAR_3->clock.default_dispclk = 54000;
    else
     VAR_3->clock.default_dispclk = 60000;
   }
   VAR_3->clock.dp_extclk =
    FUNC_5(VAR_6->info_21.usUniphyDPModeExtClkFreq);
  }
  *VAR_11 = *VAR_9;

  VAR_3->clock.max_pixel_clock = FUNC_5(VAR_6->info.usMaxPixelClock);
  if (VAR_3->clock.max_pixel_clock == 0)
   VAR_3->clock.max_pixel_clock = 40000;


  VAR_3->mode_info.firmware_flags =
   FUNC_5(VAR_6->info.usFirmwareCapability.susAccess);

  return 1;
 }

 return 0;
}
