
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_msg {int* buf; int len; int flags; int addr; } ;
struct dst_state {int i2c; TYPE_1__* config; } ;
struct TYPE_2__ {int demod_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,char*,...) ;
 int FUNC_1 (struct dst_state*) ;
 int FUNC_2 (struct dst_state*) ;
 int FUNC_3 (int ,struct i2c_msg*,int) ;
 int VAR_3 ;

int FUNC_4(struct dst_state *VAR_4, u8 *VAR_5, u8 VAR_6)
{
 struct i2c_msg VAR_7 = {
  .addr = VAR_4->config->demod_address,
  .flags = VAR_2,
  .buf = VAR_5,
  .len = VAR_6
 };

 int VAR_8;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {
  if ((VAR_8 = FUNC_3(VAR_4->i2c, &VAR_7, 1)) < 0) {
   FUNC_0(VAR_3, VAR_1, 1, "read_dst error (err == %i, len == 0x%02x, b0 == 0x%02x)", VAR_8, VAR_6, VAR_5[0]);
   FUNC_2(VAR_4);
   continue;
  } else
   break;
 }
 if (VAR_9 >= 2) {
  FUNC_0(VAR_3, VAR_1, 1, "RDC 8820 RESET");
  FUNC_1(VAR_4);

  return -1;
 }
 FUNC_0(VAR_3, VAR_0, 1, "reply is 0x%x", VAR_5[0]);
 for (VAR_8 = 1; VAR_8 < VAR_6; VAR_8++)
  FUNC_0(VAR_3, VAR_0, 0, " 0x%x", VAR_5[VAR_8]);
 if (VAR_8 > 1)
  FUNC_0(VAR_3, VAR_0, 0, "\n");

 return 0;
}
