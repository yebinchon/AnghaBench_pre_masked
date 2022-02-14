
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v ;
typedef int u8 ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
struct TYPE_2__ {int demod_address; } ;
struct drx397xD_state {int i2c; TYPE_1__ config; } ;
typedef int a ;
typedef int __le32 ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct drx397xD_state *VAR_2, __le32 VAR_3)
{
 int VAR_4;
 u8 VAR_5[4];
 __le16 VAR_6;
 struct i2c_msg VAR_7[2] = {
  {
   .addr = VAR_2->config.demod_address,
   .flags = 0,
   .buf = VAR_5,
   .len = sizeof(VAR_5)
  }, {
   .addr = VAR_2->config.demod_address,
   .flags = VAR_1,
   .buf = (u8 *)&VAR_6,
   .len = sizeof(VAR_6)
  }
 };

 *(__le32 *) VAR_5 = VAR_3;

 VAR_4 = FUNC_0(VAR_2->i2c, VAR_7, 2);
 if (VAR_4 != 2)
  return -VAR_0;

 return FUNC_1(VAR_6);
}
