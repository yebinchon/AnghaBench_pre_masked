
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint8_t ;
typedef scalar_t__ uint16_t ;
struct radeon_i2c_bus_rec {int valid; int hw_capable; int mm_i2c; int i2c_id; } ;
struct radeon_encoder_ext_tmds {int slave_addr; int * i2c_bus; int dvo_chip; } ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct radeon_encoder {TYPE_1__ base; } ;
struct radeon_device {int flags; } ;
struct drm_device {struct radeon_device* dev_private; } ;
typedef enum radeon_combios_ddc { ____Placeholder_radeon_combios_ddc } radeon_combios_ddc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,void*) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct drm_device*,int ) ;
 struct radeon_i2c_bus_rec FUNC_4 (struct radeon_device*,int,int ,int ) ;
 void* FUNC_5 (struct radeon_device*,struct radeon_i2c_bus_rec*) ;

bool FUNC_6(struct radeon_encoder *VAR_5,
        struct radeon_encoder_ext_tmds *VAR_6)
{
 struct drm_device *VAR_7 = VAR_5->base.dev;
 struct radeon_device *VAR_8 = VAR_7->dev_private;
 uint16_t VAR_9;
 uint8_t VAR_10;
 enum radeon_combios_ddc VAR_11;
 struct radeon_i2c_bus_rec VAR_12;

 VAR_6->i2c_bus = ((void*)0);
 if (VAR_8->flags & VAR_4) {
  VAR_12 = FUNC_4(VAR_8, VAR_2, 0, 0);
  VAR_6->i2c_bus = FUNC_5(VAR_8, &VAR_12);
  VAR_6->dvo_chip = VAR_3;
  VAR_6->slave_addr = 0x70 >> 1;
 } else {
  VAR_9 = FUNC_3(VAR_7, VAR_0);
  if (VAR_9) {
   VAR_10 = FUNC_2(VAR_9);
   FUNC_0("External TMDS Table revision: %d\n", VAR_10);
   VAR_6->slave_addr = FUNC_2(VAR_9 + 4 + 2);
   VAR_6->slave_addr >>= 1;
   VAR_11 = FUNC_2(VAR_9 + 4 + 3);
   if (VAR_11 == VAR_1) {

    VAR_12.valid = 1;
    VAR_12.hw_capable = 1;
    VAR_12.mm_i2c = 1;
    VAR_12.i2c_id = 0xa0;
   } else
    VAR_12 = FUNC_4(VAR_8, VAR_11, 0, 0);
   VAR_6->i2c_bus = FUNC_5(VAR_8, &VAR_12);
  }
 }

 if (!VAR_6->i2c_bus) {
  FUNC_1("No valid Ext TMDS info found in BIOS\n");
  return 0;
 }

 return 1;
}
