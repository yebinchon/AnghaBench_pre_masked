
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {int byte; int word; int* block; } ;
typedef int u8 ;
typedef int u16 ;
struct i2c_adapter {int dev; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;

 scalar_t__ VAR_3 ;





 char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (int *,char*,int,int,int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static s32 FUNC_6(struct i2c_adapter *VAR_13, u16 VAR_14,
     unsigned short VAR_15, char VAR_16, u8 VAR_17,
     int VAR_18, union i2c_smbus_data *VAR_19)
{
 int VAR_20, VAR_21;
 int VAR_22;
 int VAR_23;
 s32 VAR_24 = 0;


 VAR_22 = FUNC_3(VAR_11);
 for (VAR_23 = 0;
      (VAR_23 < VAR_5) && !(VAR_22 & VAR_2);
      VAR_23++) {
  FUNC_4(1);
  VAR_22 = FUNC_3(VAR_11);
 }
 if (VAR_23 >= VAR_5)
  FUNC_2(&VAR_13->dev, "Idle wait Timeout! STS=0x%02x\n", VAR_22);


 FUNC_5(0xFF, VAR_11);

 switch (VAR_18) {
 case 129:
  FUNC_5(((VAR_14 & 0x7f) << 1) | (VAR_16 & 0x01),
         VAR_7);
  VAR_18 = VAR_1;
  FUNC_5(VAR_18, VAR_12);
  break;
 case 131:
  FUNC_5(((VAR_14 & 0x7f) << 1) | (VAR_16 & 0x01),
         VAR_7);
  VAR_18 = 135;
  FUNC_5(VAR_18, VAR_12);
  if (VAR_16 == VAR_4)
   FUNC_5(VAR_17, VAR_8);
  break;
 case 130:
  FUNC_5(((VAR_14 & 0x7f) << 1) | (VAR_16 & 0x01),
         VAR_7);
  VAR_18 = 134;
  FUNC_5(VAR_18, VAR_12);
  FUNC_5(VAR_17, VAR_8);
  if (VAR_16 == VAR_4)
   FUNC_5(VAR_19->byte, VAR_9);
  break;
 case 128:
  FUNC_5(((VAR_14 & 0x7f) << 1) | (VAR_16 & 0x01),
         VAR_7);
  VAR_18 = 133;
  FUNC_5(VAR_18, VAR_12);
  FUNC_5(VAR_17, VAR_8);
  if (VAR_16 == VAR_4) {
   FUNC_5(VAR_19->word & 0xff, VAR_9);
   FUNC_5((VAR_19->word & 0xff00) >> 8, VAR_10);
  }
  break;
 case 132:
  FUNC_5(((VAR_14 & 0x7f) << 1) | (VAR_16 & 0x01),
         VAR_7);
  VAR_18 = 136;
  FUNC_5(VAR_18, VAR_12);
  FUNC_5(VAR_17, VAR_8);
  if (VAR_16 == VAR_4) {
   VAR_21 = VAR_19->block[0];
   if (VAR_21 < 0) {
    VAR_21 = 0;
    VAR_19->block[0] = VAR_21;
   }
   if (VAR_21 > 32) {
    VAR_21 = 32;
    VAR_19->block[0] = VAR_21;
   }
   FUNC_5(VAR_21, VAR_9);

   FUNC_5(FUNC_3(VAR_12) | VAR_0, VAR_12);
   for (VAR_20 = 1; VAR_20 <= VAR_21; VAR_20++)
    FUNC_5(VAR_19->block[VAR_20], VAR_6);
  }
  break;
 default:
  FUNC_2(&VAR_13->dev, "Unsupported transaction %d\n", VAR_18);
  VAR_24 = -VAR_3;
  goto EXIT;
 }

 VAR_24 = FUNC_0(VAR_13);
 if (VAR_24)
  goto EXIT;

 if ((VAR_16 == VAR_4) || (VAR_18 == VAR_1)) {
  VAR_24 = 0;
  goto EXIT;
 }

 switch (VAR_18) {
 case 135:
  VAR_19->byte = FUNC_3(VAR_9);
  break;
 case 134:
  VAR_19->byte = FUNC_3(VAR_9);
  break;
 case 133:
  VAR_19->word = FUNC_3(VAR_9) + (FUNC_3(VAR_10) << 8);
  break;
 case 136:
  VAR_21 = FUNC_3(VAR_9);
  if (VAR_21 > 32)
   VAR_21 = 32;
  VAR_19->block[0] = VAR_21;

  FUNC_5(FUNC_3(VAR_12) | VAR_0, VAR_12);
  for (VAR_20 = 1; VAR_20 <= VAR_19->block[0]; VAR_20++) {
   VAR_19->block[VAR_20] = FUNC_3(VAR_6);
   FUNC_1(&VAR_13->dev, "Blk: len=%d, i=%d, data=%02x\n",
    VAR_21, VAR_20, VAR_19->block[VAR_20]);
  }
  break;
 }
EXIT:
 return VAR_24;
}
