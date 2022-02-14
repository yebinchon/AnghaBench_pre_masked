
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wr ;
struct tea5764_write_regs {int intreg; void* rdsbbl; void* rdsctrl; void* testreg; void* tnctrl; void* frqset; } ;
struct tea5764_regs {int intreg; int rdsbbl; int rdsctrl; int testreg; int tnctrl; int frqset; } ;
struct tea5764_device {TYPE_1__* i2c_client; struct tea5764_regs regs; } ;
struct i2c_msg {int member_2; void* member_3; int member_1; int member_0; } ;
struct TYPE_2__ {int adapter; int addr; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;

int FUNC_2(struct tea5764_device *VAR_1)
{
 struct tea5764_write_regs VAR_2;
 struct tea5764_regs *VAR_3 = &VAR_1->regs;
 struct i2c_msg VAR_4[1] = {
  { VAR_1->i2c_client->addr, 0, sizeof(VAR_2), (void *) &VAR_2 },
 };
 VAR_2.intreg = VAR_3->intreg & 0xff;
 VAR_2.frqset = FUNC_0(VAR_3->frqset);
 VAR_2.tnctrl = FUNC_0(VAR_3->tnctrl);
 VAR_2.testreg = FUNC_0(VAR_3->testreg);
 VAR_2.rdsctrl = FUNC_0(VAR_3->rdsctrl);
 VAR_2.rdsbbl = FUNC_0(VAR_3->rdsbbl);
 if (FUNC_1(VAR_1->i2c_client->adapter, VAR_4, 1) != 1)
  return -VAR_0;
 return 0;
}
