
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int write_buf ;
typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int isdbs_ts_id; } ;
struct TYPE_5__ {TYPE_1__ dtv_property_cache; } ;
struct va1j5jf8007s_state {int adap; TYPE_3__* config; TYPE_2__ fe; } ;
struct i2c_msg {int addr; int len; int* buf; scalar_t__ flags; } ;
typedef int read_buf ;
struct TYPE_6__ {int demod_address; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int
FUNC_1(struct va1j5jf8007s_state *VAR_2, int *VAR_3)
{
 u8 VAR_4;
 u8 VAR_5[1], VAR_6[2];
 struct i2c_msg VAR_7[2];
 u32 VAR_8;

 VAR_8 = VAR_2->fe.dtv_property_cache.isdbs_ts_id;
 if (!VAR_8) {
  *VAR_3 = 1;
  return 0;
 }

 VAR_4 = VAR_2->config->demod_address;

 VAR_5[0] = 0xe6;

 VAR_7[0].addr = VAR_4;
 VAR_7[0].flags = 0;
 VAR_7[0].len = sizeof(VAR_5);
 VAR_7[0].buf = VAR_5;

 VAR_7[1].addr = VAR_4;
 VAR_7[1].flags = VAR_1;
 VAR_7[1].len = sizeof(VAR_6);
 VAR_7[1].buf = VAR_6;

 if (FUNC_0(VAR_2->adap, VAR_7, 2) != 2)
  return -VAR_0;

 *VAR_3 = (VAR_6[0] << 8 | VAR_6[1]) == VAR_8;
 return 0;
}
