
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {int* block; } ;
typedef int u8 ;
struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,char*,...) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct i2c_adapter*,int ) ;
 int FUNC_3 (struct i2c_adapter*,int ,int *) ;
 int FUNC_4 (struct i2c_adapter*,int ) ;
 int FUNC_5 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_6(struct i2c_adapter *VAR_5, union i2c_smbus_data *VAR_6, int VAR_7)
{
 int VAR_8, VAR_9 = 0, VAR_10 = 0;
 u8 VAR_11 = 0;

 if (VAR_7 == VAR_0) {
  VAR_9 = VAR_6->block[0];
  if (VAR_9 < 0)
   VAR_9 = 0;
  else if (VAR_9 > 32)
   VAR_9 = 32;
  FUNC_5(VAR_3, VAR_9);
  for (VAR_8=1; VAR_8 <= VAR_9; VAR_8++) {
   FUNC_0(&VAR_5->dev, "set data 0x%02x\n", VAR_6->block[VAR_8]);

   FUNC_5(VAR_2+(VAR_8-1)%8, VAR_6->block[VAR_8]);
   if (VAR_8==8 || (VAR_9<8 && VAR_8==VAR_9)) {
    FUNC_0(&VAR_5->dev, "start trans len=%d i=%d\n",VAR_9 ,VAR_8);

    VAR_10 = FUNC_3(VAR_5,
      VAR_1, &VAR_11);
    if (VAR_10)
     return VAR_10;
   }
   else if ((VAR_8-1)%8 == 7 || VAR_8==VAR_9) {
    FUNC_0(&VAR_5->dev, "trans_wait len=%d i=%d\n",VAR_9,VAR_8);
    if (VAR_8>8) {
     FUNC_0(&VAR_5->dev, "clear smbary_sts len=%d i=%d\n",VAR_9,VAR_8);





     FUNC_5(VAR_4,0x10);
    }
    VAR_10 = FUNC_4(VAR_5,
      VAR_1);
    if (VAR_10) {
     FUNC_0(&VAR_5->dev, "trans_wait failed\n");
     break;
    }
   }
  }
 }
 else {

  VAR_6->block[0] = VAR_9 = 0;
  VAR_10 = FUNC_3(VAR_5,
    VAR_1, &VAR_11);
  if (VAR_10)
   return VAR_10;
  do {
   VAR_10 = FUNC_4(VAR_5, VAR_1);
   if (VAR_10) {
    FUNC_0(&VAR_5->dev, "trans_wait failed\n");
    break;
   }

   if (VAR_9 == 0)
    VAR_6->block[0] = FUNC_1(VAR_3);


   if (VAR_6->block[0] > 32)
    VAR_6->block[0] = 32;

   FUNC_0(&VAR_5->dev, "block data read len=0x%x\n", VAR_6->block[0]);

   for (VAR_8=0; VAR_8 < 8 && VAR_9 < VAR_6->block[0]; VAR_8++,VAR_9++) {
    FUNC_0(&VAR_5->dev, "read i=%d len=%d\n", VAR_8, VAR_9);
    VAR_6->block[VAR_9+1] = FUNC_1(VAR_2+VAR_8);
   }

   FUNC_0(&VAR_5->dev, "clear smbary_sts len=%d i=%d\n",VAR_9,VAR_8);


   FUNC_5(VAR_4,0x10);
  } while(VAR_9 < VAR_6->block[0]);
 }

 FUNC_2(VAR_5, VAR_11);

 return VAR_10;
}
