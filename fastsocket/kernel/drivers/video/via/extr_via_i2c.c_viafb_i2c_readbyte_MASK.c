
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


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;
 TYPE_3__* VAR_1 ;

int FUNC_1(u8 VAR_2, u8 VAR_3, u8 *VAR_4)
{
 u8 VAR_5[] = {0x00};
 struct i2c_msg VAR_6[2];

 *VAR_4 = 0;
 VAR_6[0].flags = 0;
 VAR_6[1].flags = VAR_0;
 VAR_6[0].addr = VAR_6[1].addr = VAR_2 / 2;
 VAR_5[0] = VAR_3;
 VAR_6[0].len = 1; VAR_6[1].len = 1;
 VAR_6[0].buf = VAR_5; VAR_6[1].buf = VAR_4;
 FUNC_0(&VAR_1->shared->i2c_stuff.adapter, VAR_6, 2);

 return 0;
}
