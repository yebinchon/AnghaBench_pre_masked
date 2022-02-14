
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
struct TYPE_2__ {int demod_address; } ;
struct drx397xD_state {int i2c; TYPE_1__ config; } ;
typedef int a ;
typedef int __le32 ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct drx397xD_state *VAR_1, __le32 VAR_2, __le16 VAR_3)
{
 u8 VAR_4[6];
 int VAR_5;
 struct i2c_msg VAR_6 = {
  .addr = VAR_1->config.demod_address,
  .flags = 0,
  .buf = VAR_4,
  .len = sizeof(VAR_4)
 };

 *(__le32 *)VAR_4 = VAR_2;
 *(__le16 *)&VAR_4[4] = VAR_3;

 VAR_5 = FUNC_0(VAR_1->i2c, &VAR_6, 1);
 if (VAR_5 != 1)
  return -VAR_0;

 return 0;
}
