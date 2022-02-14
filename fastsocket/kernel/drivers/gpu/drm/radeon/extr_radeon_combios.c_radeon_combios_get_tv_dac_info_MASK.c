
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct radeon_encoder_tv_dac {int ps2_tvdac_adj; int pal_tvdac_adj; int ntsc_tvdac_adj; int tv_std; } ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct radeon_encoder {TYPE_1__ base; } ;
struct radeon_device {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct drm_device*,int ) ;
 struct radeon_encoder_tv_dac* FUNC_3 (int,int ) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*,struct radeon_encoder_tv_dac*) ;

struct radeon_encoder_tv_dac *FUNC_6(struct
            radeon_encoder
            *VAR_3)
{
 struct drm_device *VAR_4 = VAR_3->base.dev;
 struct radeon_device *VAR_5 = VAR_4->dev_private;
 uint16_t VAR_6;
 uint8_t VAR_7, VAR_8, VAR_9;
 struct radeon_encoder_tv_dac *VAR_10 = ((void*)0);
 int VAR_11 = 0;

 VAR_10 = FUNC_3(sizeof(struct radeon_encoder_tv_dac), VAR_2);
 if (!VAR_10)
  return ((void*)0);


 VAR_6 = FUNC_2(VAR_4, VAR_1);
 if (VAR_6) {
  VAR_7 = FUNC_1(VAR_6 + 0x3);
  if (VAR_7 > 4) {
   VAR_8 = FUNC_1(VAR_6 + 0xc) & 0xf;
   VAR_9 = FUNC_1(VAR_6 + 0xd) & 0xf;
   VAR_10->ps2_tvdac_adj = (VAR_8 << 16) | (VAR_9 << 20);

   VAR_8 = FUNC_1(VAR_6 + 0xe) & 0xf;
   VAR_9 = FUNC_1(VAR_6 + 0xf) & 0xf;
   VAR_10->pal_tvdac_adj = (VAR_8 << 16) | (VAR_9 << 20);

   VAR_8 = FUNC_1(VAR_6 + 0x10) & 0xf;
   VAR_9 = FUNC_1(VAR_6 + 0x11) & 0xf;
   VAR_10->ntsc_tvdac_adj = (VAR_8 << 16) | (VAR_9 << 20);

   if (VAR_10->ps2_tvdac_adj)
    VAR_11 = 1;
  } else if (VAR_7 > 1) {
   VAR_8 = FUNC_1(VAR_6 + 0xc) & 0xf;
   VAR_9 = (FUNC_1(VAR_6 + 0xc) >> 4) & 0xf;
   VAR_10->ps2_tvdac_adj = (VAR_8 << 16) | (VAR_9 << 20);

   VAR_8 = FUNC_1(VAR_6 + 0xd) & 0xf;
   VAR_9 = (FUNC_1(VAR_6 + 0xd) >> 4) & 0xf;
   VAR_10->pal_tvdac_adj = (VAR_8 << 16) | (VAR_9 << 20);

   VAR_8 = FUNC_1(VAR_6 + 0xe) & 0xf;
   VAR_9 = (FUNC_1(VAR_6 + 0xe) >> 4) & 0xf;
   VAR_10->ntsc_tvdac_adj = (VAR_8 << 16) | (VAR_9 << 20);

   if (VAR_10->ps2_tvdac_adj)
    VAR_11 = 1;
  }
  VAR_10->tv_std = FUNC_4(VAR_5);
 }
 if (!VAR_11) {

  VAR_6 =
      FUNC_2(VAR_4, VAR_0);
  if (VAR_6) {
   VAR_7 = FUNC_1(VAR_6) & 0x3;
   if (VAR_7 < 2) {
    VAR_8 = FUNC_1(VAR_6 + 0x3) & 0xf;
    VAR_9 = (FUNC_1(VAR_6 + 0x3) >> 4) & 0xf;
    VAR_10->ps2_tvdac_adj =
        (VAR_8 << 16) | (VAR_9 << 20);
    VAR_10->pal_tvdac_adj = VAR_10->ps2_tvdac_adj;
    VAR_10->ntsc_tvdac_adj = VAR_10->ps2_tvdac_adj;

    if (VAR_10->ps2_tvdac_adj)
     VAR_11 = 1;
   } else {
    VAR_8 = FUNC_1(VAR_6 + 0x4) & 0xf;
    VAR_9 = FUNC_1(VAR_6 + 0x5) & 0xf;
    VAR_10->ps2_tvdac_adj =
        (VAR_8 << 16) | (VAR_9 << 20);
    VAR_10->pal_tvdac_adj = VAR_10->ps2_tvdac_adj;
    VAR_10->ntsc_tvdac_adj = VAR_10->ps2_tvdac_adj;

    if (VAR_10->ps2_tvdac_adj)
     VAR_11 = 1;
   }
  } else {
   FUNC_0("No TV DAC info found in BIOS\n");
  }
 }

 if (!VAR_11)
  FUNC_5(VAR_5, VAR_10);

 return VAR_10;
}
