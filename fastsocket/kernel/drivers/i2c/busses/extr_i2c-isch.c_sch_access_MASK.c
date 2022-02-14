
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union i2c_smbus_data {int byte; int word; int* block; } ;
typedef int u8 ;
typedef int u16 ;
struct i2c_adapter {int dev; } ;
typedef int s32 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;




 char VAR_5 ;



 int VAR_6 ;

 int VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;
 char* VAR_13 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char*) ;
 TYPE_1__ VAR_14 ;
 int FUNC_4 () ;

__attribute__((used)) static s32 FUNC_5(struct i2c_adapter *VAR_15, u16 VAR_16,
   unsigned short VAR_17, char VAR_18,
   u8 VAR_19, int VAR_20, union i2c_smbus_data *VAR_21)
{
 int VAR_22, VAR_23, VAR_24, VAR_25;


 VAR_24 = FUNC_2(VAR_13) & 0x0f;
 if (VAR_24 & 0x08) {
  FUNC_0(&VAR_14.dev, "SMBus busy (%02x)\n", VAR_24);
  return -VAR_0;
 }
 FUNC_0(&VAR_14.dev, "access size: %d %s\n", VAR_20,
  (VAR_18)?"READ":"WRITE");
 switch (VAR_20) {
 case 133:
  FUNC_3((VAR_16 << 1) | VAR_18, VAR_8);
  VAR_20 = VAR_6;
  break;
 case 135:
  FUNC_3((VAR_16 << 1) | VAR_18, VAR_8);
  if (VAR_18 == VAR_5)
   FUNC_3(VAR_19, VAR_9);
  VAR_20 = 130;
  break;
 case 134:
  FUNC_3((VAR_16 << 1) | VAR_18, VAR_8);
  FUNC_3(VAR_19, VAR_9);
  if (VAR_18 == VAR_5)
   FUNC_3(VAR_21->byte, VAR_11);
  VAR_20 = 129;
  break;
 case 132:
  FUNC_3((VAR_16 << 1) | VAR_18, VAR_8);
  FUNC_3(VAR_19, VAR_9);
  if (VAR_18 == VAR_5) {
   FUNC_3(VAR_21->word & 0xff, VAR_11);
   FUNC_3((VAR_21->word & 0xff00) >> 8, VAR_12);
  }
  VAR_20 = 128;
  break;
 case 136:
  FUNC_3((VAR_16 << 1) | VAR_18, VAR_8);
  FUNC_3(VAR_19, VAR_9);
  if (VAR_18 == VAR_5) {
   VAR_23 = VAR_21->block[0];
   if (VAR_23 == 0 || VAR_23 > VAR_4)
    return -VAR_1;
   FUNC_3(VAR_23, VAR_11);
   for (VAR_22 = 1; VAR_22 <= VAR_23; VAR_22++)
    FUNC_3(VAR_21->block[VAR_22], VAR_7+VAR_22-1);
  }
  VAR_20 = 131;
  break;
 default:
  FUNC_1(&VAR_15->dev, "Unsupported transaction %d\n", VAR_20);
  return -VAR_2;
 }
 FUNC_0(&VAR_14.dev, "write size %d to 0x%04x\n", VAR_20, VAR_10);
 FUNC_3((FUNC_2(VAR_10) & 0xb0) | (VAR_20 & 0x7), VAR_10);

 VAR_25 = FUNC_4();
 if (VAR_25)
  return VAR_25;

 if ((VAR_18 == VAR_5) || (VAR_20 == VAR_6))
  return 0;

 switch (VAR_20) {
 case 130:
 case 129:
  VAR_21->byte = FUNC_2(VAR_11);
  break;
 case 128:
  VAR_21->word = FUNC_2(VAR_11) + (FUNC_2(VAR_12) << 8);
  break;
 case 131:
  VAR_21->block[0] = FUNC_2(VAR_11);
  if (VAR_21->block[0] == 0 || VAR_21->block[0] > VAR_4)
   return -VAR_3;
  for (VAR_22 = 1; VAR_22 <= VAR_21->block[0]; VAR_22++)
   VAR_21->block[VAR_22] = FUNC_2(VAR_7+VAR_22-1);
  break;
 }
 return 0;
}
