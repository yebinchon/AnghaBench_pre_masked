
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {scalar_t__ addr; int flags; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(const struct i2c_msg* VAR_1,
      const struct i2c_msg* VAR_2)
{
 return (VAR_1->addr != VAR_2->addr)
  || ((VAR_1->flags & VAR_0) != (VAR_2->flags & VAR_0));
}
