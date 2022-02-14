
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct stb6100_state {TYPE_1__* config; int i2c; } ;
struct i2c_msg {int* buf; int len; int flags; scalar_t__ addr; } ;
struct TYPE_2__ {scalar_t__ tuner_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,scalar_t__,int,char*,unsigned int,int,...) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;
 int FUNC_2 (int*,int*,int) ;
 int * VAR_5 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int FUNC_4(struct stb6100_state *VAR_7, u8 VAR_8[], int VAR_9, int VAR_10)
{
 int VAR_11;
 u8 VAR_12[VAR_10 + 1];
 struct i2c_msg VAR_13 = {
  .addr = VAR_7->config->tuner_address,
  .flags = 0,
  .buf = VAR_12,
  .len = VAR_10 + 1
 };

 if (FUNC_3(VAR_9 < 1 || VAR_9 + VAR_10 > VAR_4)) {
  FUNC_0(VAR_6, VAR_3, 1, "Invalid register range %d:%d",
   VAR_9, VAR_10);
  return -VAR_0;
 }
 FUNC_2(&VAR_12[1], VAR_8, VAR_10);
 VAR_12[0] = VAR_9;

 if (FUNC_3(VAR_6 > VAR_2)) {
  int VAR_14;

  FUNC_0(VAR_6, VAR_2, 1, "    Write @ 0x%02x: [%d:%d]", VAR_7->config->tuner_address, VAR_9, VAR_10);
  for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++)
   FUNC_0(VAR_6, VAR_2, 1, "        %s: 0x%02x", VAR_5[VAR_9 + VAR_14], VAR_8[VAR_14]);
 }
 VAR_11 = FUNC_1(VAR_7->i2c, &VAR_13, 1);
 if (FUNC_3(VAR_11 != 1)) {
  FUNC_0(VAR_6, VAR_3, 1, "(0x%x) write err [%d:%d], rc=[%d]",
   (unsigned int)VAR_7->config->tuner_address, VAR_9, VAR_10, VAR_11);
  return -VAR_1;
 }
 return 0;
}
