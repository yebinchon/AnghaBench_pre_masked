
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u16 ;
struct ixgbe_thermal_sensor_data {TYPE_6__* sensor; } ;
struct TYPE_10__ {int (* write_i2c_byte ) (struct ixgbe_hw*,int ,int ,size_t) ;} ;
struct TYPE_11__ {TYPE_4__ ops; } ;
struct TYPE_8__ {int (* read ) (struct ixgbe_hw*,size_t,size_t*) ;} ;
struct TYPE_9__ {TYPE_2__ ops; } ;
struct TYPE_7__ {struct ixgbe_thermal_sensor_data thermal_sensor_data; } ;
struct ixgbe_hw {TYPE_5__ phy; TYPE_3__ eeprom; TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;
struct TYPE_12__ {size_t location; size_t caution_thresh; size_t max_op_thresh; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int * VAR_13 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,size_t*,size_t*) ;
 int FUNC_2 (struct ixgbe_thermal_sensor_data*,int ,int) ;
 int FUNC_3 (struct ixgbe_hw*,size_t,size_t*) ;
 int FUNC_4 (struct ixgbe_hw*,int ,int ,size_t) ;

s32 FUNC_5(struct ixgbe_hw *VAR_14)
{
 s32 VAR_15 = 0;
 u16 VAR_16;
 u16 VAR_17;
 u16 VAR_18;
 u8 VAR_19;
 u8 VAR_20;
 u8 VAR_21;
 u8 VAR_22;
 struct ixgbe_thermal_sensor_data *VAR_23 = &VAR_14->mac.thermal_sensor_data;

 FUNC_2(VAR_23, 0, sizeof(struct ixgbe_thermal_sensor_data));


 if ((FUNC_0(VAR_14, VAR_11) & VAR_12)) {
  VAR_15 = VAR_10;
  goto out;
 }

 VAR_15 = FUNC_1(VAR_14, &VAR_17, &VAR_16);
 if (VAR_15)
  goto out;

 VAR_19 = ((VAR_17 & VAR_5) >>
        VAR_6);
 VAR_20 = (VAR_17 & VAR_7);
 if (VAR_20 > VAR_9)
  VAR_20 = VAR_9;

 for (VAR_22 = 0; VAR_22 < VAR_20; VAR_22++) {
  u8 VAR_24;
  u8 VAR_25;

  VAR_14->eeprom.ops.read(VAR_14, (VAR_16 + 1 + VAR_22), &VAR_18);
  VAR_24 = ((VAR_18 & VAR_1) >>
    VAR_2);
  VAR_25 = ((VAR_18 & VAR_3) >>
       VAR_4);
  VAR_21 = VAR_18 & VAR_0;

  VAR_14->phy.ops.write_i2c_byte(VAR_14,
   VAR_13[VAR_24],
   VAR_8, VAR_21);

  if (VAR_25 == 0)
   continue;

  VAR_23->sensor[VAR_22].location = VAR_25;
  VAR_23->sensor[VAR_22].caution_thresh = VAR_21;
  VAR_23->sensor[VAR_22].max_op_thresh = VAR_21 - VAR_19;
 }
out:
 return VAR_15;
}
