
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint16_t ;
struct radeon_pll {int pll_in_min; int pll_in_max; void* pll_out_max; void* pll_out_min; void* reference_div; void* reference_freq; void* lcd_pll_out_max; void* lcd_pll_out_min; } ;
struct TYPE_2__ {int max_pixel_clock; void* default_mclk; void* default_sclk; struct radeon_pll mpll; struct radeon_pll spll; struct radeon_pll p2pll; struct radeon_pll p1pll; } ;
struct radeon_device {TYPE_1__ clock; } ;
struct drm_device {struct radeon_device* dev_private; } ;
typedef int int8_t ;


 int VAR_0 ;
 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (struct drm_device*,int ) ;

bool FUNC_4(struct drm_device *VAR_1)
{
 struct radeon_device *VAR_2 = VAR_1->dev_private;
 uint16_t VAR_3;
 struct radeon_pll *VAR_4 = &VAR_2->clock.p1pll;
 struct radeon_pll *VAR_5 = &VAR_2->clock.p2pll;
 struct radeon_pll *VAR_6 = &VAR_2->clock.spll;
 struct radeon_pll *VAR_7 = &VAR_2->clock.mpll;
 int8_t VAR_8;
 uint16_t VAR_9, VAR_10;

 VAR_3 = FUNC_3(VAR_1, VAR_0);
 if (VAR_3) {
  VAR_8 = FUNC_2(VAR_3);


  VAR_4->reference_freq = FUNC_0(VAR_3 + 0xe);
  VAR_4->reference_div = FUNC_0(VAR_3 + 0x10);
  VAR_4->pll_out_min = FUNC_1(VAR_3 + 0x12);
  VAR_4->pll_out_max = FUNC_1(VAR_3 + 0x16);
  VAR_4->lcd_pll_out_min = VAR_4->pll_out_min;
  VAR_4->lcd_pll_out_max = VAR_4->pll_out_max;

  if (VAR_8 > 9) {
   VAR_4->pll_in_min = FUNC_1(VAR_3 + 0x36);
   VAR_4->pll_in_max = FUNC_1(VAR_3 + 0x3a);
  } else {
   VAR_4->pll_in_min = 40;
   VAR_4->pll_in_max = 500;
  }
  *VAR_5 = *VAR_4;


  VAR_6->reference_freq = FUNC_0(VAR_3 + 0x1a);
  VAR_6->reference_div = FUNC_0(VAR_3 + 0x1c);
  VAR_6->pll_out_min = FUNC_1(VAR_3 + 0x1e);
  VAR_6->pll_out_max = FUNC_1(VAR_3 + 0x22);

  if (VAR_8 > 10) {
   VAR_6->pll_in_min = FUNC_1(VAR_3 + 0x48);
   VAR_6->pll_in_max = FUNC_1(VAR_3 + 0x4c);
  } else {

   VAR_6->pll_in_min = 40;
   VAR_6->pll_in_max = 500;
  }


  VAR_7->reference_freq = FUNC_0(VAR_3 + 0x26);
  VAR_7->reference_div = FUNC_0(VAR_3 + 0x28);
  VAR_7->pll_out_min = FUNC_1(VAR_3 + 0x2a);
  VAR_7->pll_out_max = FUNC_1(VAR_3 + 0x2e);

  if (VAR_8 > 10) {
   VAR_7->pll_in_min = FUNC_1(VAR_3 + 0x5a);
   VAR_7->pll_in_max = FUNC_1(VAR_3 + 0x5e);
  } else {

   VAR_7->pll_in_min = 40;
   VAR_7->pll_in_max = 500;
  }


  VAR_9 = FUNC_0(VAR_3 + 0xa);
  VAR_10 = FUNC_0(VAR_3 + 0x8);
  if (VAR_9 == 0)
   VAR_9 = 200 * 100;
  if (VAR_10 == 0)
   VAR_10 = 200 * 100;

  VAR_2->clock.default_sclk = VAR_9;
  VAR_2->clock.default_mclk = VAR_10;

  if (FUNC_1(VAR_3 + 0x16))
   VAR_2->clock.max_pixel_clock = FUNC_1(VAR_3 + 0x16);
  else
   VAR_2->clock.max_pixel_clock = 35000;

  return 1;
 }
 return 0;
}
