
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_msg {unsigned short addr; int len; unsigned char* buf; int flags; } ;
typedef int int32_t ;
struct TYPE_2__ {int adapter; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,struct i2c_msg*,int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int32_t FUNC_2(unsigned short VAR_2,
 unsigned char *VAR_3, int VAR_4)
{
 struct i2c_msg VAR_5[] = {
  {
   .addr = VAR_2,
   .flags = 0,
   .len = VAR_4,
   .buf = VAR_3,
  },
 };

 if (FUNC_1(VAR_1->adapter, VAR_5, 1) < 0) {
  FUNC_0("mt9d112_i2c_txdata failed\n");
  return -VAR_0;
 }

 return 0;
}
