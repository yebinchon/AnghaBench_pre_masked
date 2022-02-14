
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int clock; } ;
struct i2c_bit_adapter {TYPE_1__ mask; int minfo; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(void* VAR_0) {
 struct i2c_bit_adapter* VAR_1 = VAR_0;
 return (FUNC_0(VAR_1->minfo) & VAR_1->mask.clock) ? 1 : 0;
}
