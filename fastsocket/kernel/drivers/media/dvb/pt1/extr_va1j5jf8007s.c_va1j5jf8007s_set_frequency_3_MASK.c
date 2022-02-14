
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_5__ {int frequency; } ;
struct TYPE_6__ {TYPE_2__ dtv_property_cache; } ;
struct va1j5jf8007s_state {int adap; TYPE_1__* config; TYPE_3__ fe; } ;
struct i2c_msg {int len; int* buf; scalar_t__ flags; int addr; } ;
typedef int buf ;
struct TYPE_4__ {int demod_address; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct va1j5jf8007s_state *VAR_1)
{
 u32 VAR_2;
 u8 VAR_3[4];
 struct i2c_msg VAR_4;

 VAR_2 = VAR_1->fe.dtv_property_cache.frequency;

 VAR_3[0] = 0xfe;
 VAR_3[1] = 0xc0;
 VAR_3[2] = 0xf4;
 VAR_3[3] = FUNC_1(VAR_2) | 0x4;

 VAR_4.addr = VAR_1->config->demod_address;
 VAR_4.flags = 0;
 VAR_4.len = sizeof(VAR_3);
 VAR_4.buf = VAR_3;

 if (FUNC_0(VAR_1->adap, &VAR_4, 1) != 1)
  return -VAR_0;

 return 0;
}
