
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct radeon_i2c_bus_rec {int valid; } ;
struct radeon_device {struct drm_device* ddev; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct drm_device*,int ) ;
 struct radeon_i2c_bus_rec FUNC_2 (struct radeon_device*,int ,int,int) ;

__attribute__((used)) static struct radeon_i2c_bus_rec FUNC_3(struct radeon_device *VAR_2)
{
 struct drm_device *VAR_3 = VAR_2->ddev;
 struct radeon_i2c_bus_rec VAR_4;
 u16 VAR_5;
 u8 VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10;

 VAR_4.valid = 0;

 VAR_5 = FUNC_1(VAR_3, VAR_0);
 if (VAR_5) {
  VAR_7 = FUNC_0(VAR_5 + 2);
  for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
   VAR_6 = FUNC_0(VAR_5 + 3 + (VAR_10 * 5) + 0);
   if (VAR_6 == 136) {
    VAR_8 = FUNC_0(VAR_5 + 3 + (VAR_10 * 5) + 3);
    VAR_9 = FUNC_0(VAR_5 + 3 + (VAR_10 * 5) + 4);

    VAR_4 = FUNC_2(VAR_2, VAR_1,
           (1 << VAR_8), (1 << VAR_9));
    break;
   }
  }
 }
 return VAR_4;
}
