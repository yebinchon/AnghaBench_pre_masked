
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct i2c_msg {int addr; int len; int* buf; scalar_t__ flags; } ;
struct TYPE_6__ {TYPE_2__* shared; } ;
struct TYPE_4__ {int adapter; } ;
struct TYPE_5__ {TYPE_1__ i2c_stuff; } ;


 int FUNC_0 (int *,struct i2c_msg*,int) ;
 TYPE_3__* VAR_0 ;

int FUNC_1(u8 VAR_1, u8 VAR_2, u8 VAR_3)
{
 u8 VAR_4[2] = { VAR_2, VAR_3 };
 struct i2c_msg VAR_5;

 VAR_5.flags = 0;
 VAR_5.addr = VAR_1 / 2;
 VAR_5.len = 2;
 VAR_5.buf = VAR_4;
 return FUNC_0(&VAR_0->shared->i2c_stuff.adapter, &VAR_5, 1);
}
