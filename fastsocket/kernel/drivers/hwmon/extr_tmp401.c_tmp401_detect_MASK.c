
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_client {struct i2c_adapter* adapter; } ;
struct i2c_board_info {int type; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

 int FUNC_0 (struct i2c_adapter*,int ) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_11, int VAR_12,
    struct i2c_board_info *VAR_13)
{
 struct i2c_adapter *VAR_14 = VAR_11->adapter;

 if (!FUNC_0(VAR_14, VAR_1))
  return -VAR_0;


 if (VAR_12 <= 0) {
  u8 VAR_15;

  VAR_15 = FUNC_1(VAR_11,
            VAR_7);
  if (VAR_15 != VAR_6)
   return -VAR_0;

  VAR_15 = FUNC_1(VAR_11, VAR_5);

  switch (VAR_15) {
  case 129:
   VAR_12 = VAR_8;
   break;
  case 128:
   VAR_12 = VAR_10;
   break;
  default:
   return -VAR_0;
  }

  VAR_15 = FUNC_1(VAR_11, VAR_3);
  if (VAR_15 & 0x1b)
   return -VAR_0;

  VAR_15 = FUNC_1(VAR_11,
            VAR_4);

  if (VAR_15 > 15)
   return -VAR_0;
 }
 FUNC_2(VAR_13->type, VAR_9[VAR_12 - 1].name, VAR_2);

 return 0;
}
