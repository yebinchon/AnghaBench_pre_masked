
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


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
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct i2c_adapter*,int ) ;
 char FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_14, int VAR_15,
    struct i2c_board_info *VAR_16)
{
 struct i2c_adapter *VAR_17 = VAR_14->adapter;

 if (!FUNC_0(VAR_17, VAR_4))
  return -VAR_0;


 if (VAR_15 <= 0) {
  char VAR_18[4];

  VAR_18[0] = FUNC_1(VAR_14,
    VAR_1);
  VAR_18[1] = FUNC_1(VAR_14,
    VAR_2);
  VAR_18[2] = FUNC_1(VAR_14,
    VAR_3);
  VAR_18[3] = '\0';

  if (!FUNC_2(VAR_18, "PEG"))
   VAR_15 = VAR_11;
  else if (!FUNC_2(VAR_18, "HER"))
   VAR_15 = VAR_7;
  else if (!FUNC_2(VAR_18, "SCY"))
   VAR_15 = VAR_12;
  else if (!FUNC_2(VAR_18, "HRC"))
   VAR_15 = VAR_10;
  else if (!FUNC_2(VAR_18, "HMD"))
   VAR_15 = VAR_8;
  else if (!FUNC_2(VAR_18, "HDS"))
   VAR_15 = VAR_6;
  else if (!FUNC_2(VAR_18, "SYL"))
   VAR_15 = VAR_13;
  else
   return -VAR_0;
 }

 FUNC_3(VAR_16->type, VAR_9[VAR_15 - 1].name, VAR_5);

 return 0;
}
