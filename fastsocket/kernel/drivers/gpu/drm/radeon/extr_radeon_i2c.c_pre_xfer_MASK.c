
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ u32 ;
struct radeon_i2c_bus_rec {scalar_t__ a_clk_reg; scalar_t__ mask_clk_reg; int a_clk_mask; scalar_t__ a_data_reg; int a_data_mask; scalar_t__ en_clk_reg; int en_clk_mask; scalar_t__ en_data_reg; int en_data_mask; int mask_clk_mask; scalar_t__ mask_data_reg; int mask_data_mask; scalar_t__ hw_capable; } ;
struct radeon_i2c_chan {struct radeon_i2c_bus_rec rec; TYPE_1__* dev; } ;
struct radeon_device {scalar_t__ family; int dc_hw_i2c_mutex; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_2__ {struct radeon_device* dev_private; } ;


 int FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int) ;
 struct radeon_i2c_chan* FUNC_5 (struct i2c_adapter*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct i2c_adapter *VAR_11)
{
 struct radeon_i2c_chan *VAR_12 = FUNC_5(VAR_11);
 struct radeon_device *VAR_13 = VAR_12->dev->dev_private;
 struct radeon_i2c_bus_rec *VAR_14 = &VAR_12->rec;
 uint32_t VAR_15;





 if (VAR_14->hw_capable) {
  if ((VAR_13->family >= VAR_0) && !FUNC_0(VAR_13)) {
   u32 VAR_16;

   if (VAR_13->family >= VAR_3)
    VAR_16 = VAR_9;
   else if ((VAR_13->family == VAR_1) ||
     (VAR_13->family == VAR_2))
    VAR_16 = VAR_8;
   else
    VAR_16 = VAR_7;

   FUNC_6(&VAR_13->dc_hw_i2c_mutex);
   if (VAR_14->a_clk_reg == VAR_16) {
    FUNC_4(VAR_6, (VAR_10 |
              FUNC_2(VAR_4)));
   } else {
    FUNC_4(VAR_6, (VAR_10 |
              FUNC_2(VAR_5)));
   }
   FUNC_7(&VAR_13->dc_hw_i2c_mutex);
  }
 }


 if (FUNC_1(VAR_13) && VAR_14->hw_capable) {
  VAR_15 = FUNC_3(VAR_14->mask_clk_reg);
  VAR_15 &= ~(1 << 16);
  FUNC_4(VAR_14->mask_clk_reg, VAR_15);
 }


 VAR_15 = FUNC_3(VAR_14->a_clk_reg) & ~VAR_14->a_clk_mask;
 FUNC_4(VAR_14->a_clk_reg, VAR_15);

 VAR_15 = FUNC_3(VAR_14->a_data_reg) & ~VAR_14->a_data_mask;
 FUNC_4(VAR_14->a_data_reg, VAR_15);


 VAR_15 = FUNC_3(VAR_14->en_clk_reg) & ~VAR_14->en_clk_mask;
 FUNC_4(VAR_14->en_clk_reg, VAR_15);

 VAR_15 = FUNC_3(VAR_14->en_data_reg) & ~VAR_14->en_data_mask;
 FUNC_4(VAR_14->en_data_reg, VAR_15);


 VAR_15 = FUNC_3(VAR_14->mask_clk_reg) | VAR_14->mask_clk_mask;
 FUNC_4(VAR_14->mask_clk_reg, VAR_15);
 VAR_15 = FUNC_3(VAR_14->mask_clk_reg);

 VAR_15 = FUNC_3(VAR_14->mask_data_reg) | VAR_14->mask_data_mask;
 FUNC_4(VAR_14->mask_data_reg, VAR_15);
 VAR_15 = FUNC_3(VAR_14->mask_data_reg);

 return 0;
}
