
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int addr; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline unsigned char
FUNC_0(struct i2c_msg *VAR_2)
{
 unsigned char VAR_3;

 VAR_3 = (VAR_2->addr << 1);

 if (VAR_2->flags & VAR_0)
  VAR_3 |= 1;




 if (VAR_2->flags & VAR_1)
  VAR_3 ^= 1;

 return VAR_3;
}
