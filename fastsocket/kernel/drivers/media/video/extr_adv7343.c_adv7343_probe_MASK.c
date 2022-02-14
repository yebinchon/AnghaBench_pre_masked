
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; TYPE_1__* adapter; } ;
struct adv7343_state {int reg00; int reg01; int reg02; int reg35; int sd; int std; int output; int reg82; int reg80; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int VAR_8 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 struct adv7343_state* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,struct i2c_client*,int *) ;
 int FUNC_4 (struct i2c_client*,char*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_9,
    const struct i2c_device_id *VAR_10)
{
 struct adv7343_state *VAR_11;

 if (!FUNC_1(VAR_9->adapter, VAR_6))
  return -VAR_3;

 FUNC_4(VAR_9, "chip found @ 0x%x (%s)\n",
   VAR_9->addr << 1, VAR_9->adapter->name);

 VAR_11 = FUNC_2(sizeof(struct adv7343_state), VAR_5);
 if (VAR_11 == ((void*)0))
  return -VAR_4;

 VAR_11->reg00 = 0x80;
 VAR_11->reg01 = 0x00;
 VAR_11->reg02 = 0x20;
 VAR_11->reg35 = 0x00;
 VAR_11->reg80 = VAR_1;
 VAR_11->reg82 = VAR_2;

 VAR_11->output = VAR_0;
 VAR_11->std = VAR_7;

 FUNC_3(&VAR_11->sd, VAR_9, &VAR_8);
 return FUNC_0(&VAR_11->sd);
}
