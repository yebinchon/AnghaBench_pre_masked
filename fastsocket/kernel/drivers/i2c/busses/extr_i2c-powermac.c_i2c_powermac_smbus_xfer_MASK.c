
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {int byte; int word; int* block; } ;
typedef int u8 ;
typedef int u16 ;
struct pmac_i2c_bus {int dummy; } ;
struct i2c_adapter {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;





 char VAR_1 ;

 struct pmac_i2c_bus* FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct pmac_i2c_bus*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct pmac_i2c_bus*,int ) ;
 int FUNC_3 (struct pmac_i2c_bus*,int ) ;
 int FUNC_4 (struct pmac_i2c_bus*,int,int,int,int*,int) ;

__attribute__((used)) static s32 FUNC_5( struct i2c_adapter* VAR_5,
     u16 VAR_6,
     unsigned short VAR_7,
     char VAR_8,
     u8 VAR_9,
     int VAR_10,
     union i2c_smbus_data* VAR_11)
{
 struct pmac_i2c_bus *VAR_12 = FUNC_0(VAR_5);
 int VAR_13 = 0;
 int VAR_14 = (VAR_8 == VAR_1);
 int VAR_15 = (VAR_6 << 1) | VAR_14;
 u8 VAR_16[2];

 VAR_13 = FUNC_2(VAR_12, 0);
 if (VAR_13)
  return VAR_13;

 switch (VAR_10) {
        case 129:
  VAR_13 = FUNC_3(VAR_12, VAR_3);
  if (VAR_13)
   goto bail;
  VAR_13 = FUNC_4(VAR_12, VAR_15, 0, 0, ((void*)0), 0);
      break;
        case 132:
  VAR_13 = FUNC_3(VAR_12, VAR_3);
  if (VAR_13)
   goto bail;
  VAR_13 = FUNC_4(VAR_12, VAR_15, 0, 0, &VAR_11->byte, 1);
      break;
        case 131:
  VAR_13 = FUNC_3(VAR_12, VAR_14 ?
          VAR_2 :
          VAR_4);
  if (VAR_13)
   goto bail;
  VAR_13 = FUNC_4(VAR_12, VAR_15, 1, VAR_9, &VAR_11->byte, 1);
      break;
        case 128:
  VAR_13 = FUNC_3(VAR_12, VAR_14 ?
          VAR_2 :
          VAR_4);
  if (VAR_13)
   goto bail;
  if (!VAR_14) {
   VAR_16[0] = VAR_11->word & 0xff;
   VAR_16[1] = (VAR_11->word >> 8) & 0xff;
  }
  VAR_13 = FUNC_4(VAR_12, VAR_15, 1, VAR_9, VAR_16, 2);
  if (VAR_13 == 0 && VAR_14) {
   VAR_11->word = ((u16)VAR_16[1]) << 8;
   VAR_11->word |= VAR_16[0];
  }
      break;
        case 133:
  VAR_13 = FUNC_3(VAR_12, VAR_14 ?
          VAR_2 :
          VAR_4);
  if (VAR_13)
   goto bail;
  VAR_13 = FUNC_4(VAR_12, VAR_15, 1, VAR_9, VAR_11->block,
       VAR_11->block[0] + 1);

  break;
 case 130:
  VAR_13 = FUNC_3(VAR_12, VAR_14 ?
          VAR_2 :
          VAR_4);
  if (VAR_13)
   goto bail;
  VAR_13 = FUNC_4(VAR_12, VAR_15, 1, VAR_9,
       &VAR_11->block[1], VAR_11->block[0]);
  break;

        default:
      VAR_13 = -VAR_0;
 }
 bail:
 FUNC_1(VAR_12);
 return VAR_13;
}
