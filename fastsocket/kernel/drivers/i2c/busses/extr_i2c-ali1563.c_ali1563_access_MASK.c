
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {int byte; int word; } ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct i2c_adapter {int dev; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;





 char VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct i2c_adapter*,union i2c_smbus_data*,char) ;
 int FUNC_1 (struct i2c_adapter*,int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static s32 FUNC_5(struct i2c_adapter * VAR_12, u16 VAR_13,
     unsigned short VAR_14, char VAR_15, u8 VAR_16,
     int VAR_17, union i2c_smbus_data * VAR_18)
{
 int VAR_19 = 0;
 int VAR_20;
 u32 VAR_21;

 for (VAR_20 = VAR_0; VAR_20; VAR_20--) {
  if (!(VAR_21 = FUNC_3(VAR_11) & VAR_4))
   break;
 }
 if (!VAR_20)
  FUNC_2(&VAR_12->dev,"SMBus not idle. HST_STS = %02x\n",VAR_21);
 FUNC_4(0xff,VAR_11);


 switch (VAR_17) {
 case 129:
  VAR_17 = VAR_2;
  break;
 case 131:
  VAR_17 = 135;
  break;
 case 130:
  VAR_17 = 134;
  break;
 case 128:
  VAR_17 = 133;
  break;
 case 132:
  VAR_17 = 136;
  break;
 default:
  FUNC_2(&VAR_12->dev, "Unsupported transaction %d\n", VAR_17);
  VAR_19 = -VAR_1;
  goto Done;
 }

 FUNC_4(((VAR_13 & 0x7f) << 1) | (VAR_15 & 0x01), VAR_6);
 FUNC_4((FUNC_3(VAR_8) & ~VAR_3) | (VAR_17 << 3), VAR_8);



 switch(VAR_17) {
 case 135:
  if (VAR_15== VAR_5)

   FUNC_4(VAR_16, VAR_9);
  break;
 case 134:
  FUNC_4(VAR_16, VAR_7);
  if (VAR_15 == VAR_5)
   FUNC_4(VAR_18->byte, VAR_9);
  break;
 case 133:
  FUNC_4(VAR_16, VAR_7);
  if (VAR_15 == VAR_5) {
   FUNC_4(VAR_18->word & 0xff, VAR_9);
   FUNC_4((VAR_18->word & 0xff00) >> 8, VAR_10);
  }
  break;
 case 136:
  FUNC_4(VAR_16, VAR_7);
  VAR_19 = FUNC_0(VAR_12,VAR_18,VAR_15);
  goto Done;
 }

 if ((VAR_19 = FUNC_1(VAR_12, VAR_17)))
  goto Done;

 if ((VAR_15 == VAR_5) || (VAR_17 == VAR_2))
  goto Done;

 switch (VAR_17) {
 case 135:
  VAR_18->byte = FUNC_3(VAR_9);
  break;
 case 134:
  VAR_18->byte = FUNC_3(VAR_9);
  break;
 case 133:
  VAR_18->word = FUNC_3(VAR_9) + (FUNC_3(VAR_10) << 8);
  break;
 }
Done:
 return VAR_19;
}
