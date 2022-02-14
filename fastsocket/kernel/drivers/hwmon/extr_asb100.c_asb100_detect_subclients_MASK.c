
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int addr; int dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;
struct asb100_data {void** lm75; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;
 int FUNC_2 (int *,char*,int,...) ;
 int* VAR_3 ;
 int FUNC_3 (struct i2c_adapter*) ;
 struct asb100_data* FUNC_4 (struct i2c_client*) ;
 void* FUNC_5 (struct i2c_adapter*,unsigned short) ;
 int FUNC_6 (void*) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 int VAR_8 = VAR_4->addr;
 unsigned short VAR_9[2];
 struct asb100_data *VAR_10 = FUNC_4(VAR_4);
 struct i2c_adapter *VAR_11 = VAR_4->adapter;

 VAR_6 = FUNC_3(VAR_11);

 if (VAR_3[0] == VAR_6 && VAR_3[1] == VAR_8) {
  for (VAR_5 = 2; VAR_5 <= 3; VAR_5++) {
   if (VAR_3[VAR_5] < 0x48 ||
       VAR_3[VAR_5] > 0x4f) {
    FUNC_2(&VAR_4->dev, "invalid subclient "
     "address %d; must be 0x48-0x4f\n",
     VAR_3[VAR_5]);
    VAR_7 = -VAR_1;
    goto ERROR_SC_2;
   }
  }
  FUNC_1(VAR_4, VAR_0,
     (VAR_3[2] & 0x07) |
     ((VAR_3[3] & 0x07) << 4));
  VAR_9[0] = VAR_3[2];
  VAR_9[1] = VAR_3[3];
 } else {
  int VAR_12 = FUNC_0(VAR_4, VAR_0);
  VAR_9[0] = 0x48 + (VAR_12 & 0x07);
  VAR_9[1] = 0x48 + ((VAR_12 >> 4) & 0x07);
 }

 if (VAR_9[0] == VAR_9[1]) {
  FUNC_2(&VAR_4->dev, "duplicate addresses 0x%x "
    "for subclients\n", VAR_9[0]);
  VAR_7 = -VAR_1;
  goto ERROR_SC_2;
 }

 VAR_10->lm75[0] = FUNC_5(VAR_11, VAR_9[0]);
 if (!VAR_10->lm75[0]) {
  FUNC_2(&VAR_4->dev, "subclient %d registration "
   "at address 0x%x failed.\n", 1, VAR_9[0]);
  VAR_7 = -VAR_2;
  goto ERROR_SC_2;
 }

 VAR_10->lm75[1] = FUNC_5(VAR_11, VAR_9[1]);
 if (!VAR_10->lm75[1]) {
  FUNC_2(&VAR_4->dev, "subclient %d registration "
   "at address 0x%x failed.\n", 2, VAR_9[1]);
  VAR_7 = -VAR_2;
  goto ERROR_SC_3;
 }

 return 0;


ERROR_SC_3:
 FUNC_6(VAR_10->lm75[0]);
ERROR_SC_2:
 return VAR_7;
}
