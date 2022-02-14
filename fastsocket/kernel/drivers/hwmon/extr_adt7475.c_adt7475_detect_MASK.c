
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {scalar_t__ addr; struct i2c_adapter* adapter; } ;
struct i2c_board_info {int type; } ;
struct i2c_adapter {int dev; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,unsigned int) ;
 int FUNC_2 (struct i2c_adapter*,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_6, int VAR_7,
     struct i2c_board_info *VAR_8)
{
 struct i2c_adapter *VAR_9 = VAR_6->adapter;

 if (!FUNC_2(VAR_9, VAR_1))
  return -VAR_0;

 if (VAR_7 <= 0) {
  if (FUNC_0(VAR_4) != 0x41 ||
      FUNC_0(VAR_3) != 0x75) {
   FUNC_1(&VAR_9->dev,
    "Couldn't detect a adt7475 part at 0x%02x\n",
    (unsigned int)VAR_6->addr);
   return -VAR_0;
  }
 }

 FUNC_3(VAR_8->type, VAR_5[0].name, VAR_2);

 return 0;
}
