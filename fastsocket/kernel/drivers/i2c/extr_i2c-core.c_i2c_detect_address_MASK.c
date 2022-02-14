
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; } ;
struct i2c_driver {int (* detect ) (struct i2c_client*,int,struct i2c_board_info*) ;int clients; TYPE_1__ driver; } ;
struct i2c_client {int addr; int detected; struct i2c_adapter* adapter; } ;
struct i2c_board_info {int addr; char* type; } ;
struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,char*,int) ;
 int FUNC_1 (int *,char*,char*,int) ;
 int FUNC_2 (int *,char*,int) ;
 scalar_t__ FUNC_3 (struct i2c_adapter*,int) ;
 struct i2c_client* FUNC_4 (struct i2c_adapter*,struct i2c_board_info*) ;
 scalar_t__ FUNC_5 (struct i2c_adapter*,int,int ,int ,int ,int ,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct i2c_board_info*,int ,int) ;
 int FUNC_8 (struct i2c_client*,int,struct i2c_board_info*) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_3, int VAR_4,
         struct i2c_driver *VAR_5)
{
 struct i2c_board_info VAR_6;
 struct i2c_adapter *VAR_7 = VAR_3->adapter;
 int VAR_8 = VAR_3->addr;
 int VAR_9;


 if (VAR_8 < 0x03 || VAR_8 > 0x77) {
  FUNC_2(&VAR_7->dev, "Invalid probe address 0x%02x\n",
    VAR_8);
  return -VAR_0;
 }


 if (FUNC_3(VAR_7, VAR_8))
  return 0;


 if (VAR_4 < 0) {
  if (FUNC_5(VAR_7, VAR_8, 0, 0, 0,
       VAR_2, ((void*)0)) < 0)
   return 0;


  if ((VAR_8 & ~0x0f) == 0x50)
   FUNC_5(VAR_7, VAR_8, 0, 0, 0,
           VAR_2, ((void*)0));
 }


 FUNC_7(&VAR_6, 0, sizeof(struct i2c_board_info));
 VAR_6.addr = VAR_8;
 VAR_9 = VAR_5->detect(VAR_3, VAR_4, &VAR_6);
 if (VAR_9) {


  return VAR_9 == -VAR_1 ? 0 : VAR_9;
 }


 if (VAR_6.type[0] == '\0') {
  FUNC_1(&VAR_7->dev, "%s detection function provided "
   "no name for 0x%x\n", VAR_5->driver.name,
   VAR_8);
 } else {
  struct i2c_client *VAR_10;


  FUNC_0(&VAR_7->dev, "Creating %s at 0x%02x\n",
   VAR_6.type, VAR_6.addr);
  VAR_10 = FUNC_4(VAR_7, &VAR_6);
  if (VAR_10)
   FUNC_6(&VAR_10->detected, &VAR_5->clients);
  else
   FUNC_1(&VAR_7->dev, "Failed creating %s at 0x%02x\n",
    VAR_6.type, VAR_6.addr);
 }
 return 0;
}
