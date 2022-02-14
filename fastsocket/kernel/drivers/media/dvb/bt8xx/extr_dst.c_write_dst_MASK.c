
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct i2c_msg {size_t* buf; size_t len; int flags; int addr; } ;
struct dst_state {int i2c; TYPE_1__* config; } ;
struct TYPE_2__ {int demod_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,char*,...) ;
 int FUNC_1 (struct dst_state*) ;
 int FUNC_2 (struct dst_state*) ;
 int FUNC_3 (int ,struct i2c_msg*,int) ;
 int VAR_2 ;

int FUNC_4(struct dst_state *VAR_3, u8 *VAR_4, u8 VAR_5)
{
 struct i2c_msg VAR_6 = {
  .addr = VAR_3->config->demod_address,
  .flags = 0,
  .buf = VAR_4,
  .len = VAR_5
 };

 int VAR_7;
 u8 VAR_8, VAR_9;

 FUNC_0(VAR_2, VAR_1, 0, "writing [ ");
 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
  FUNC_0(VAR_2, VAR_1, 0, "%02x ", VAR_4[VAR_9]);
 FUNC_0(VAR_2, VAR_1, 0, "]\n");

 for (VAR_8 = 0; VAR_8 < 2; VAR_8++) {
  if ((VAR_7 = FUNC_3(VAR_3->i2c, &VAR_6, 1)) < 0) {
   FUNC_0(VAR_2, VAR_0, 1, "_write_dst error (err == %i, len == 0x%02x, b0 == 0x%02x)", VAR_7, VAR_5, VAR_4[0]);
   FUNC_2(VAR_3);
   continue;
  } else
   break;
 }
 if (VAR_8 >= 2) {
  FUNC_0(VAR_2, VAR_0, 1, "RDC 8820 RESET");
  FUNC_1(VAR_3);

  return -1;
 }

 return 0;
}
