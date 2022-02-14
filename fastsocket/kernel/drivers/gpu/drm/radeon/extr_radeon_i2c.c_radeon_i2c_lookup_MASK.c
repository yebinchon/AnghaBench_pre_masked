
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ i2c_id; } ;
struct radeon_i2c_chan {TYPE_1__ rec; } ;
struct radeon_i2c_bus_rec {scalar_t__ i2c_id; } ;
struct radeon_device {struct radeon_i2c_chan** i2c_bus; } ;


 int VAR_0 ;

struct radeon_i2c_chan *FUNC_0(struct radeon_device *VAR_1,
       struct radeon_i2c_bus_rec *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1->i2c_bus[VAR_3] &&
      (VAR_1->i2c_bus[VAR_3]->rec.i2c_id == VAR_2->i2c_id)) {
   return VAR_1->i2c_bus[VAR_3];
  }
 }
 return ((void*)0);
}
