
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct si470x_device {TYPE_1__* client; int * registers; } ;
struct i2c_msg {int member_2; void* member_3; int member_1; int member_0; } ;
struct TYPE_2__ {int adapter; int addr; } ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct i2c_msg*,int) ;

int FUNC_3(struct si470x_device *VAR_2, int VAR_3)
{
 int VAR_4;
 u16 VAR_5[VAR_1];
 struct i2c_msg VAR_6[1] = {
  { VAR_2->client->addr, 0, sizeof(u16) * VAR_1,
   (void *)VAR_5 },
 };

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  VAR_5[VAR_4] = FUNC_1(VAR_2->registers[FUNC_0(VAR_4)]);

 if (FUNC_2(VAR_2->client->adapter, VAR_6, 1) != 1)
  return -VAR_0;

 return 0;
}
