
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int addr; int flags; int* buf; int len; } ;


 int VAR_0 ;
 int FUNC_0 (int,int*,int) ;

__attribute__((used)) static u8 FUNC_1(u8 VAR_1, struct i2c_msg *VAR_2)
{

 u8 VAR_3 = (VAR_2->addr << 1) | !!(VAR_2->flags & VAR_0);
 VAR_1 = FUNC_0(VAR_1, &VAR_3, 1);


 return FUNC_0(VAR_1, VAR_2->buf, VAR_2->len);
}
