
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct va1j5jf8007s_state {int adap; TYPE_1__* config; } ;
struct i2c_msg {int len; int * buf; scalar_t__ flags; int addr; } ;
typedef int buf ;
struct TYPE_2__ {int frequency; int demod_address; } ;


 int FUNC_0 (int **) ;
 int VAR_0 ;
 int VAR_1 ;


 int FUNC_1 (int ,struct i2c_msg*,int) ;
 int FUNC_2 (int *,int const*,int) ;
 int ** VAR_2 ;
 int ** VAR_3 ;

__attribute__((used)) static int FUNC_3(struct va1j5jf8007s_state *VAR_4)
{
 const u8 (*VAR_5)[2];
 int VAR_6;
 u8 VAR_7;
 u8 VAR_8[2];
 struct i2c_msg VAR_9;
 int VAR_10;

 switch (VAR_4->config->frequency) {
 case 129:
  VAR_5 = VAR_2;
  VAR_6 = FUNC_0(VAR_2);
  break;
 case 128:
  VAR_5 = VAR_3;
  VAR_6 = FUNC_0(VAR_3);
  break;
 default:
  return -VAR_0;
 }

 VAR_7 = VAR_4->config->demod_address;

 VAR_9.addr = VAR_7;
 VAR_9.flags = 0;
 VAR_9.len = 2;
 VAR_9.buf = VAR_8;
 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  FUNC_2(VAR_8, VAR_5[VAR_10], sizeof(VAR_8));
  if (FUNC_1(VAR_4->adap, &VAR_9, 1) != 1)
   return -VAR_1;
 }

 return 0;
}
