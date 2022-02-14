
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
struct stb0899_state {scalar_t__* verbose; int i2c; TYPE_1__* config; } ;
struct i2c_msg {unsigned int* buf; int len; int flags; int addr; } ;
struct TYPE_2__ {int demod_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__*,int ,int,char*,unsigned int,unsigned int) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct stb0899_state *VAR_5, unsigned int VAR_6)
{
 int VAR_7;

 u8 VAR_8[] = { VAR_6 >> 8, VAR_6 & 0xff };
 u8 VAR_9;

 struct i2c_msg VAR_10[] = {
  {
   .addr = VAR_5->config->demod_address,
   .flags = 0,
   .buf = VAR_8,
   .len = 2
  },{
   .addr = VAR_5->config->demod_address,
   .flags = VAR_4,
   .buf = &VAR_9,
   .len = 1
  }
 };

 VAR_7 = FUNC_1(VAR_5->i2c, VAR_10, 2);
 if (VAR_7 != 2) {
  if (VAR_7 != -VAR_1)
   FUNC_0(VAR_5->verbose, VAR_3, 1,
    "Read error, Reg=[0x%02x], Status=%d",
    VAR_6, VAR_7);

  return VAR_7 < 0 ? VAR_7 : -VAR_0;
 }
 if (FUNC_2(*VAR_5->verbose >= VAR_2))
  FUNC_0(VAR_5->verbose, VAR_3, 1, "Reg=[0x%02x], data=%02x",
   VAR_6, VAR_9);

 return (unsigned int)VAR_9;
}
