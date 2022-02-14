
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int flags; int len; char* buf; int addr; } ;
struct i2c_client {int flags; int addr; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_adapter*,struct i2c_msg*,int) ;

int FUNC_1(struct i2c_client *VAR_2, char *VAR_3 ,int VAR_4)
{
 struct i2c_adapter *VAR_5=VAR_2->adapter;
 struct i2c_msg VAR_6;
 int VAR_7;

 VAR_6.addr = VAR_2->addr;
 VAR_6.flags = VAR_2->flags & VAR_1;
 VAR_6.flags |= VAR_0;
 VAR_6.len = VAR_4;
 VAR_6.buf = VAR_3;

 VAR_7 = FUNC_0(VAR_5, &VAR_6, 1);



 return (VAR_7 == 1) ? VAR_4 : VAR_7;
}
