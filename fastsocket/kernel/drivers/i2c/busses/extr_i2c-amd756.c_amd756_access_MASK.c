
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {int byte; int word; int* block; } ;
typedef int u8 ;
typedef int u16 ;
struct i2c_adapter {int dev; } ;
typedef int s32 ;





 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;





 char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static s32 FUNC_6(struct i2c_adapter * VAR_9, u16 VAR_10,
    unsigned short VAR_11, char VAR_12,
    u8 VAR_13, int VAR_14, union i2c_smbus_data * VAR_15)
{
 int VAR_16, VAR_17;
 int VAR_18;

 switch (VAR_14) {
 case 129:
  FUNC_5(((VAR_10 & 0x7f) << 1) | (VAR_12 & 0x01),
         VAR_5);
  VAR_14 = VAR_0;
  break;
 case 131:
  FUNC_5(((VAR_10 & 0x7f) << 1) | (VAR_12 & 0x01),
         VAR_5);
  if (VAR_12 == VAR_3)
   FUNC_4(VAR_13, VAR_8);
  VAR_14 = 135;
  break;
 case 130:
  FUNC_5(((VAR_10 & 0x7f) << 1) | (VAR_12 & 0x01),
         VAR_5);
  FUNC_4(VAR_13, VAR_7);
  if (VAR_12 == VAR_3)
   FUNC_5(VAR_15->byte, VAR_8);
  VAR_14 = 134;
  break;
 case 128:
  FUNC_5(((VAR_10 & 0x7f) << 1) | (VAR_12 & 0x01),
         VAR_5);
  FUNC_4(VAR_13, VAR_7);
  if (VAR_12 == VAR_3)
   FUNC_5(VAR_15->word, VAR_8);
  VAR_14 = 133;
  break;
 case 132:
  FUNC_5(((VAR_10 & 0x7f) << 1) | (VAR_12 & 0x01),
         VAR_5);
  FUNC_4(VAR_13, VAR_7);
  if (VAR_12 == VAR_3) {
   VAR_17 = VAR_15->block[0];
   if (VAR_17 < 0)
    VAR_17 = 0;
   if (VAR_17 > 32)
    VAR_17 = 32;
   FUNC_5(VAR_17, VAR_8);

   for (VAR_16 = 1; VAR_16 <= VAR_17; VAR_16++)
    FUNC_4(VAR_15->block[VAR_16],
           VAR_6);
  }
  VAR_14 = 136;
  break;
 default:
  FUNC_1(&VAR_9->dev, "Unsupported transaction %d\n", VAR_14);
  return -VAR_1;
 }


 FUNC_5(VAR_14 & VAR_2, VAR_4);

 VAR_18 = FUNC_0(VAR_9);
 if (VAR_18)
  return VAR_18;

 if ((VAR_12 == VAR_3) || (VAR_14 == VAR_0))
  return 0;


 switch (VAR_14) {
 case 135:
  VAR_15->byte = FUNC_3(VAR_8);
  break;
 case 134:
  VAR_15->byte = FUNC_3(VAR_8);
  break;
 case 133:
  VAR_15->word = FUNC_3(VAR_8);
  break;
 case 136:
  VAR_15->block[0] = FUNC_3(VAR_8) & 0x3f;
  if(VAR_15->block[0] > 32)
   VAR_15->block[0] = 32;

  for (VAR_16 = 1; VAR_16 <= VAR_15->block[0]; VAR_16++)
   VAR_15->block[VAR_16] = FUNC_2(VAR_6);
  break;
 }

 return 0;
}
