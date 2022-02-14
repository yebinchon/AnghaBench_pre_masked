
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int flags; int len; char* buf; int addr; } ;
struct i2c_client {int flags; int addr; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_adapter*,struct i2c_msg*,int) ;

int FUNC_1(struct i2c_client *VAR_1,const char *VAR_2 ,int VAR_3)
{
 int VAR_4;
 struct i2c_adapter *VAR_5=VAR_1->adapter;
 struct i2c_msg VAR_6;

 VAR_6.addr = VAR_1->addr;
 VAR_6.flags = VAR_1->flags & VAR_0;
 VAR_6.len = VAR_3;
 VAR_6.buf = (char *)VAR_2;

 VAR_4 = FUNC_0(VAR_5, &VAR_6, 1);



 return (VAR_4 == 1) ? VAR_3 : VAR_4;
}
