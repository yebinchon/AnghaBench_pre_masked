
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeonfb_info {int dummy; } ;
struct radeon_i2c_chan {int ddc_reg; struct radeonfb_info* rinfo; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(void* VAR_1)
{
 struct radeon_i2c_chan *VAR_2 = VAR_1;
 struct radeonfb_info *VAR_3 = VAR_2->rinfo;
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_2->ddc_reg);

 return (VAR_4 & VAR_0) ? 1 : 0;
}
