
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_msg {unsigned short addr; int len; unsigned char* buf; int flags; } ;
struct TYPE_2__ {int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct i2c_msg*,int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(unsigned short VAR_3,
 unsigned char *VAR_4, int VAR_5)
{
 struct i2c_msg VAR_6[] = {
 {
  .addr = VAR_3,
  .flags = 0,
  .len = 2,
  .buf = VAR_4,
 },
 {
  .addr = VAR_3,
  .flags = VAR_1,
  .len = VAR_5,
  .buf = VAR_4,
 },
 };

 if (FUNC_0(VAR_2->adapter, VAR_6, 2) < 0) {
  FUNC_1("mt9t013_i2c_rxdata failed!\n");
  return -VAR_0;
 }

 return 0;
}
