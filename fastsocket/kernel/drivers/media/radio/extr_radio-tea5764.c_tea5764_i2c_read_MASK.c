
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct tea5764_regs {int dummy; } ;
struct tea5764_device {TYPE_1__* i2c_client; int regs; } ;
struct i2c_msg {int member_2; void* member_3; int member_1; int member_0; } ;
struct TYPE_2__ {int adapter; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;

int FUNC_2(struct tea5764_device *VAR_2)
{
 int VAR_3;
 u16 *VAR_4 = (u16 *) &VAR_2->regs;

 struct i2c_msg VAR_5[1] = {
  { VAR_2->i2c_client->addr, VAR_1, sizeof(VAR_2->regs),
   (void *)&VAR_2->regs },
 };
 if (FUNC_1(VAR_2->i2c_client->adapter, VAR_5, 1) != 1)
  return -VAR_0;
 for (VAR_3 = 0; VAR_3 < sizeof(struct tea5764_regs) / sizeof(u16); VAR_3++)
  VAR_4[VAR_3] = FUNC_0(VAR_4[VAR_3]);

 return 0;
}
