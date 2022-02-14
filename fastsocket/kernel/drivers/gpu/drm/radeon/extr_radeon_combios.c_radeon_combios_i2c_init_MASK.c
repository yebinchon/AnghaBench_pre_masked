
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_i2c_bus_rec {int valid; int hw_capable; int mm_i2c; int i2c_id; } ;
struct radeon_device {scalar_t__ family; void** i2c_bus; struct drm_device* ddev; } ;
struct drm_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct radeon_i2c_bus_rec FUNC_0 (struct radeon_device*,int ,int ,int ) ;
 struct radeon_i2c_bus_rec FUNC_1 (struct radeon_device*) ;
 void* FUNC_2 (struct drm_device*,struct radeon_i2c_bus_rec*,char*) ;

void FUNC_3(struct radeon_device *VAR_10)
{
 struct drm_device *VAR_11 = VAR_10->ddev;
 struct radeon_i2c_bus_rec VAR_12;
 VAR_12 = FUNC_0(VAR_10, VAR_7, 0, 0);
 VAR_10->i2c_bus[0] = FUNC_2(VAR_11, &VAR_12, "DVI_DDC");

 VAR_12 = FUNC_0(VAR_10, VAR_9, 0, 0);
 VAR_10->i2c_bus[1] = FUNC_2(VAR_11, &VAR_12, "VGA_DDC");


 VAR_12.valid = 1;
 VAR_12.hw_capable = 1;
 VAR_12.mm_i2c = 1;
 VAR_12.i2c_id = 0xa0;
 VAR_10->i2c_bus[2] = FUNC_2(VAR_11, &VAR_12, "MM_I2C");

 if (VAR_10->family == VAR_1 ||
     VAR_10->family == VAR_2) {

 } else if (VAR_10->family == VAR_3 ||
     VAR_10->family == VAR_4 ||
     VAR_10->family == VAR_5) {

  VAR_12 = FUNC_0(VAR_10, VAR_6, 0, 0);
  VAR_10->i2c_bus[3] = FUNC_2(VAR_11, &VAR_12, "MONID");


  VAR_12 = FUNC_1(VAR_10);
  if (VAR_12.valid)
   VAR_10->i2c_bus[4] = FUNC_2(VAR_11, &VAR_12, "GPIOPAD_MASK");
 } else if ((VAR_10->family == VAR_0) ||
     (VAR_10->family >= VAR_1)) {

  VAR_12 = FUNC_0(VAR_10, VAR_8, 0, 0);
  VAR_10->i2c_bus[3] = FUNC_2(VAR_11, &VAR_12, "MONID");
 } else {

  VAR_12 = FUNC_0(VAR_10, VAR_8, 0, 0);
  VAR_10->i2c_bus[3] = FUNC_2(VAR_11, &VAR_12, "MONID");

  VAR_12 = FUNC_0(VAR_10, VAR_6, 0, 0);
  VAR_10->i2c_bus[4] = FUNC_2(VAR_11, &VAR_12, "CRT2_DDC");
 }
}
