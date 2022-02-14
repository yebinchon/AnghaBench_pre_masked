
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeonfb_info {int dummy; } ;
struct radeon_i2c_chan {int ddc_reg; struct radeonfb_info* rinfo; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(void* VAR_1, int VAR_2)
{
 struct radeon_i2c_chan *VAR_3 = VAR_1;
 struct radeonfb_info *VAR_4 = VAR_3->rinfo;
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_3->ddc_reg) & ~(VAR_0);
 if (!VAR_2)
  VAR_5 |= VAR_0;

 FUNC_1(VAR_3->ddc_reg, VAR_5);
 (void)FUNC_0(VAR_3->ddc_reg);
}
