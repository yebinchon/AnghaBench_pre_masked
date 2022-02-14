
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct w83791d_data {TYPE_1__** lm75; } ;
struct i2c_client {int addr; int dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_2__ {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int* VAR_2 ;
 int FUNC_1 (struct i2c_adapter*) ;
 struct w83791d_data* FUNC_2 (struct i2c_client*) ;
 void* FUNC_3 (struct i2c_adapter*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct i2c_client*,int ) ;
 int FUNC_6 (struct i2c_client*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_3)
{
 struct i2c_adapter *VAR_4 = VAR_3->adapter;
 struct w83791d_data *VAR_5 = FUNC_2(VAR_3);
 int VAR_6 = VAR_3->addr;
 int VAR_7, VAR_8, VAR_9;
 u8 VAR_10;

 VAR_8 = FUNC_1(VAR_4);
 if (VAR_2[0] == VAR_8 && VAR_2[1] == VAR_6) {
  for (VAR_7 = 2; VAR_7 <= 3; VAR_7++) {
   if (VAR_2[VAR_7] < 0x48 ||
       VAR_2[VAR_7] > 0x4f) {
    FUNC_0(&VAR_3->dev,
     "invalid subclient "
     "address %d; must be 0x48-0x4f\n",
     VAR_2[VAR_7]);
    VAR_9 = -VAR_0;
    goto error_sc_0;
   }
  }
  FUNC_6(VAR_3, VAR_1,
     (VAR_2[2] & 0x07) |
     ((VAR_2[3] & 0x07) << 4));
 }

 VAR_10 = FUNC_5(VAR_3, VAR_1);
 if (!(VAR_10 & 0x08)) {
  VAR_5->lm75[0] = FUNC_3(VAR_4, 0x48 + (VAR_10 & 0x7));
 }
 if (!(VAR_10 & 0x80)) {
  if ((VAR_5->lm75[0] != ((void*)0)) &&
    ((VAR_10 & 0x7) == ((VAR_10 >> 4) & 0x7))) {
   FUNC_0(&VAR_3->dev,
    "duplicate addresses 0x%x, "
    "use force_subclient\n",
    VAR_5->lm75[0]->addr);
   VAR_9 = -VAR_0;
   goto error_sc_1;
  }
  VAR_5->lm75[1] = FUNC_3(VAR_4,
           0x48 + ((VAR_10 >> 4) & 0x7));
 }

 return 0;



error_sc_1:
 if (VAR_5->lm75[0] != ((void*)0))
  FUNC_4(VAR_5->lm75[0]);
error_sc_0:
 return VAR_9;
}
