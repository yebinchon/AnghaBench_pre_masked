
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max6650_data {int config; void* count; } ;
struct i2c_client {int dev; } ;


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
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,int) ;
 int VAR_13 ;
 struct max6650_data* FUNC_3 (struct i2c_client*) ;
 void* FUNC_4 (struct i2c_client*,int ) ;
 scalar_t__ FUNC_5 (struct i2c_client*,int ,int) ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_15)
{
 struct max6650_data *VAR_16 = FUNC_3(VAR_15);
 int VAR_17;
 int VAR_18 = -VAR_0;

 VAR_17 = FUNC_4(VAR_15, VAR_10);

 if (VAR_17 < 0) {
  FUNC_1(&VAR_15->dev, "Error reading config, aborting.\n");
  return VAR_18;
 }

 switch (VAR_13) {
  case 0:
   break;
  case 5:
   VAR_17 &= ~VAR_9;
   break;
  case 12:
   VAR_17 |= VAR_9;
   break;
  default:
   FUNC_1(&VAR_15->dev,
    "illegal value for fan_voltage (%d)\n",
    VAR_13);
 }

 FUNC_2(&VAR_15->dev, "Fan voltage is set to %dV.\n",
   (VAR_17 & VAR_9) ? 12 : 5);

 switch (VAR_14) {
  case 0:
   break;
  case 1:
   VAR_17 &= ~VAR_8;
   break;
  case 2:
   VAR_17 = (VAR_17 & ~VAR_8)
     | VAR_5;
   break;
  case 4:
   VAR_17 = (VAR_17 & ~VAR_8)
     | VAR_6;
   break;
  case 8:
   VAR_17 = (VAR_17 & ~VAR_8)
     | VAR_7;
   break;
  case 16:
   VAR_17 = (VAR_17 & ~VAR_8)
     | VAR_4;
   break;
  default:
   FUNC_1(&VAR_15->dev,
    "illegal value for prescaler (%d)\n",
    VAR_14);
 }

 FUNC_2(&VAR_15->dev, "Prescaler is set to %d.\n",
   1 << (VAR_17 & VAR_8));






 if ((VAR_17 & VAR_1) == VAR_2) {
  FUNC_0(&VAR_15->dev, "Change mode to open loop, full off.\n");
  VAR_17 = (VAR_17 & ~VAR_1)
    | VAR_3;
  if (FUNC_5(VAR_15, VAR_12, 255)) {
   FUNC_1(&VAR_15->dev, "DAC write error, aborting.\n");
   return VAR_18;
  }
 }

 if (FUNC_5(VAR_15, VAR_10, VAR_17)) {
  FUNC_1(&VAR_15->dev, "Config write error, aborting.\n");
  return VAR_18;
 }

 VAR_16->config = VAR_17;
 VAR_16->count = FUNC_4(VAR_15, VAR_11);

 return 0;
}
