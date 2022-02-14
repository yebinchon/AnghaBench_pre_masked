
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_versatile {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(void *VAR_2)
{
 struct i2c_versatile *VAR_3 = VAR_2;
 return !!(FUNC_0(VAR_3->base + VAR_0) & VAR_1);
}
