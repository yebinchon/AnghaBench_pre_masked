
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83781d_data {int type; int * lm75; } ;
struct i2c_client {int addr; int dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;
typedef enum chips { ____Placeholder_chips } chips ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int,...) ;
 int* VAR_4 ;
 int FUNC_1 (struct i2c_adapter*) ;
 struct w83781d_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_adapter*,unsigned short) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct w83781d_data*,int ) ;
 int FUNC_6 (struct w83781d_data*,int ,int) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_7(struct i2c_client *VAR_6)
{
 int VAR_7, VAR_8 = 0, VAR_9;
 int VAR_10;
 int VAR_11 = VAR_6->addr;
 unsigned short VAR_12[2];
 struct i2c_adapter *VAR_13 = VAR_6->adapter;
 struct w83781d_data *VAR_14 = FUNC_2(VAR_6);
 enum chips VAR_15 = VAR_14->type;

 VAR_9 = FUNC_1(VAR_13);

 if (VAR_4[0] == VAR_9 && VAR_4[1] == VAR_11) {
  for (VAR_7 = 2; VAR_7 <= 3; VAR_7++) {
   if (VAR_4[VAR_7] < 0x48 ||
       VAR_4[VAR_7] > 0x4f) {
    FUNC_0(&VAR_6->dev, "Invalid subclient "
     "address %d; must be 0x48-0x4f\n",
     VAR_4[VAR_7]);
    VAR_10 = -VAR_1;
    goto ERROR_SC_1;
   }
  }
  FUNC_6(VAR_14, VAR_3,
    (VAR_4[2] & 0x07) |
    ((VAR_4[3] & 0x07) << 4));
  VAR_12[0] = VAR_4[2];
 } else {
  VAR_8 = FUNC_5(VAR_14, VAR_3);
  VAR_12[0] = 0x48 + (VAR_8 & 0x07);
 }

 if (VAR_15 != VAR_5) {
  if (VAR_4[0] == VAR_9 &&
      VAR_4[1] == VAR_11) {
   VAR_12[1] = VAR_4[3];
  } else {
   VAR_12[1] = 0x48 + ((VAR_8 >> 4) & 0x07);
  }
  if (VAR_12[0] == VAR_12[1]) {
   FUNC_0(&VAR_6->dev,
          "Duplicate addresses 0x%x for subclients.\n",
          VAR_12[0]);
   VAR_10 = -VAR_0;
   goto ERROR_SC_2;
  }
 }

 for (VAR_7 = 0; VAR_7 <= 1; VAR_7++) {
  VAR_14->lm75[VAR_7] = FUNC_3(VAR_13, VAR_12[VAR_7]);
  if (!VAR_14->lm75[VAR_7]) {
   FUNC_0(&VAR_6->dev, "Subclient %d "
    "registration at address 0x%x "
    "failed.\n", VAR_7, VAR_12[VAR_7]);
   VAR_10 = -VAR_2;
   if (VAR_7 == 1)
    goto ERROR_SC_3;
   goto ERROR_SC_2;
  }
  if (VAR_15 == VAR_5)
   break;
 }

 return 0;


ERROR_SC_3:
 FUNC_4(VAR_14->lm75[0]);
ERROR_SC_2:
ERROR_SC_1:
 return VAR_10;
}
