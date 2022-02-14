
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct e1000_thermal_sensor_data {TYPE_7__* sensor; } ;
struct TYPE_12__ {int (* write_i2c_byte ) (struct e1000_hw*,int ,int ,int) ;} ;
struct TYPE_13__ {TYPE_5__ ops; } ;
struct TYPE_10__ {int (* read ) (struct e1000_hw*,int,int,int*) ;} ;
struct TYPE_11__ {TYPE_3__ ops; } ;
struct TYPE_9__ {scalar_t__ func; } ;
struct TYPE_8__ {scalar_t__ type; struct e1000_thermal_sensor_data thermal_sensor_data; } ;
struct e1000_hw {TYPE_6__ phy; TYPE_4__ nvm; TYPE_2__ bus; TYPE_1__ mac; } ;
typedef int s32 ;
struct TYPE_14__ {int location; int caution_thresh; int max_op_thresh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int * VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_0 (struct e1000_thermal_sensor_data*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct e1000_hw*,int,int,int*) ;
 int FUNC_3 (struct e1000_hw*,int,int,int*) ;
 int FUNC_4 (struct e1000_hw*,int,int,int*) ;
 int FUNC_5 (struct e1000_hw*,int ,int ,int) ;

s32 FUNC_6(struct e1000_hw *VAR_20)
{
 s32 VAR_21 = VAR_3;
 u16 VAR_22;
 u16 VAR_23;
 u16 VAR_24;
 u8 VAR_25;
 u8 VAR_26;
 u8 VAR_27;
 u8 VAR_28;
 u8 VAR_29;
 u8 VAR_30;
 struct e1000_thermal_sensor_data *VAR_31 = &VAR_20->mac.thermal_sensor_data;

 if ((VAR_20->mac.type != VAR_19) || (VAR_20->bus.func != 0))
  return VAR_2;

 FUNC_0(VAR_31, 0, sizeof(struct e1000_thermal_sensor_data));

 VAR_31->sensor[0].location = 0x1;
 VAR_31->sensor[0].caution_thresh =
  (FUNC_1(VAR_4) & 0xFF);
 VAR_31->sensor[0].max_op_thresh =
  (FUNC_1(VAR_5) & 0xFF);


 VAR_20->nvm.ops.read(VAR_20, VAR_6, 1, &VAR_22);
 if ((VAR_22 == 0x0000) || (VAR_22 == 0xFFFF))
  return VAR_21;

 VAR_20->nvm.ops.read(VAR_20, VAR_22, 1, &VAR_23);
 if (((VAR_23 & VAR_16) >> VAR_17)
     != VAR_15)
  return VAR_2;

 VAR_25 = ((VAR_23 & VAR_12) >>
       VAR_13);
 VAR_26 = (VAR_23 & VAR_14);

 for (VAR_30 = 1; VAR_30 <= VAR_26; VAR_30++) {
  VAR_20->nvm.ops.read(VAR_20, (VAR_22 + VAR_30), 1, &VAR_24);
  VAR_27 = ((VAR_24 & VAR_8) >>
    VAR_9);
  VAR_28 = ((VAR_24 & VAR_10) >>
       VAR_11);
  VAR_29 = VAR_24 & VAR_7;

  VAR_20->phy.ops.write_i2c_byte(VAR_20,
   VAR_18[VAR_27],
   VAR_0,
   VAR_29);

  if ((VAR_30 < VAR_1) && (VAR_28 != 0)) {
   VAR_31->sensor[VAR_30].location = VAR_28;
   VAR_31->sensor[VAR_30].caution_thresh = VAR_29;
   VAR_31->sensor[VAR_30].max_op_thresh = VAR_29 -
       VAR_25;
  }
 }
 return VAR_21;
}
