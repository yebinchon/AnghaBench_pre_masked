
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_bit_adapter {scalar_t__ initialized; int adapter; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct i2c_bit_adapter* VAR_0) {
 if (VAR_0->initialized) {
  FUNC_0(&VAR_0->adapter);
  VAR_0->initialized = 0;
 }
}
