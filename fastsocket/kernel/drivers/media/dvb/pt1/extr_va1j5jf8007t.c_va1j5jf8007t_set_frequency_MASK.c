
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int frequency; } ;
struct TYPE_5__ {TYPE_1__ dtv_property_cache; } ;
struct va1j5jf8007t_state {int adap; TYPE_3__* config; TYPE_2__ fe; } ;
struct i2c_msg {int len; int* buf; scalar_t__ flags; int addr; } ;
typedef int buf ;
struct TYPE_6__ {int demod_address; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct va1j5jf8007t_state *VAR_1)
{
 u32 VAR_2;
 u16 VAR_3;
 u8 VAR_4[6];
 struct i2c_msg VAR_5;

 VAR_2 = VAR_1->fe.dtv_property_cache.frequency;

 VAR_3 = (VAR_2 + 71428) / 142857 + 399;
 VAR_4[0] = 0xfe;
 VAR_4[1] = 0xc2;
 VAR_4[2] = VAR_3 >> 8;
 VAR_4[3] = VAR_3;
 VAR_4[4] = 0x80;
 VAR_4[5] = FUNC_1(VAR_2);

 VAR_5.addr = VAR_1->config->demod_address;
 VAR_5.flags = 0;
 VAR_5.len = sizeof(VAR_4);
 VAR_5.buf = VAR_4;

 if (FUNC_0(VAR_1->adap, &VAR_5, 1) != 1)
  return -VAR_0;

 return 0;
}
