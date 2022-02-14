
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * type; int * bus; int * parent; int archdata; int platform_data; } ;
struct i2c_client {int addr; int name; TYPE_1__ dev; struct i2c_adapter* adapter; int irq; int flags; } ;
struct i2c_board_info {int type; int irq; int addr; int flags; int * archdata; int platform_data; } ;
struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (int *,char*,int ,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct i2c_adapter*) ;
 int VAR_1 ;
 int FUNC_6 (struct i2c_adapter*,int ) ;
 int VAR_2 ;
 int FUNC_7 (struct i2c_client*) ;
 struct i2c_client* FUNC_8 (int,int ) ;
 int FUNC_9 (int ,int ,int) ;

struct i2c_client *
FUNC_10(struct i2c_adapter *VAR_3, struct i2c_board_info const *VAR_4)
{
 struct i2c_client *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_8(sizeof *VAR_5, VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->adapter = VAR_3;

 VAR_5->dev.platform_data = VAR_4->platform_data;

 if (VAR_4->archdata)
  VAR_5->dev.archdata = *VAR_4->archdata;

 VAR_5->flags = VAR_4->flags;
 VAR_5->addr = VAR_4->addr;
 VAR_5->irq = VAR_4->irq;

 FUNC_9(VAR_5->name, VAR_4->type, sizeof(VAR_5->name));


 VAR_6 = FUNC_6(VAR_3, VAR_5->addr);
 if (VAR_6)
  goto out_err;

 VAR_5->dev.parent = &VAR_5->adapter->dev;
 VAR_5->dev.bus = &VAR_1;
 VAR_5->dev.type = &VAR_2;

 FUNC_3(&VAR_5->dev, "%d-%04x", FUNC_5(VAR_3),
       VAR_5->addr);
 VAR_6 = FUNC_4(&VAR_5->dev);
 if (VAR_6)
  goto out_err;

 FUNC_0(&VAR_3->dev, "client [%s] registered with bus id %s\n",
  VAR_5->name, FUNC_2(&VAR_5->dev));

 return VAR_5;

out_err:
 FUNC_1(&VAR_3->dev, "Failed to register i2c client %s at 0x%02x "
  "(%d)\n", VAR_5->name, VAR_5->addr, VAR_6);
 FUNC_7(VAR_5);
 return ((void*)0);
}
