
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
struct TYPE_12__ {int (* read_i2c_byte ) (struct e1000_hw*,int ,int ,int*) ;} ;
struct TYPE_13__ {TYPE_5__ ops; } ;
struct TYPE_10__ {int (* read ) (struct e1000_hw*,int,int,int*) ;} ;
struct TYPE_11__ {TYPE_3__ ops; } ;
struct TYPE_9__ {scalar_t__ func; } ;
struct TYPE_8__ {scalar_t__ type; struct e1000_thermal_sensor_data thermal_sensor_data; } ;
struct e1000_hw {TYPE_6__ phy; TYPE_4__ nvm; TYPE_2__ bus; TYPE_1__ mac; } ;
typedef int s32 ;
struct TYPE_14__ {int temp; } ;


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
 int * VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct e1000_hw*,int,int,int*) ;
 int FUNC_2 (struct e1000_hw*,int,int,int*) ;
 int FUNC_3 (struct e1000_hw*,int,int,int*) ;
 int FUNC_4 (struct e1000_hw*,int ,int ,int*) ;

s32 FUNC_5(struct e1000_hw *VAR_16)
{
 s32 VAR_17 = VAR_3;
 u16 VAR_18;
 u16 VAR_19;
 u16 VAR_20;
 u8 VAR_21;
 u8 VAR_22;
 u8 VAR_23;
 u8 VAR_24;
 struct e1000_thermal_sensor_data *VAR_25 = &VAR_16->mac.thermal_sensor_data;

 if ((VAR_16->mac.type != VAR_15) || (VAR_16->bus.func != 0))
  return VAR_2;

 VAR_25->sensor[0].temp = (FUNC_0(VAR_4) & 0xFF);


 VAR_16->nvm.ops.read(VAR_16, VAR_5, 1, &VAR_18);
 if ((VAR_18 == 0x0000) || (VAR_18 == 0xFFFF))
  return VAR_17;

 VAR_16->nvm.ops.read(VAR_16, VAR_18, 1, &VAR_19);
 if (((VAR_19 & VAR_12) >> VAR_13)
     != VAR_11)
  return VAR_2;

 VAR_21 = (VAR_19 & VAR_10);
 if (VAR_21 > VAR_1)
  VAR_21 = VAR_1;

 for (VAR_24 = 1; VAR_24 < VAR_21; VAR_24++) {
  VAR_16->nvm.ops.read(VAR_16, (VAR_18 + VAR_24), 1, &VAR_20);
  VAR_22 = ((VAR_20 & VAR_6) >>
    VAR_7);
  VAR_23 = ((VAR_20 & VAR_8) >>
       VAR_9);

  if (VAR_23 != 0)
   VAR_16->phy.ops.read_i2c_byte(VAR_16,
     VAR_14[VAR_22],
     VAR_0,
     &VAR_25->sensor[VAR_24].temp);
 }
 return VAR_17;
}
