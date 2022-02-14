
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct i2c_client {int dummy; } ;
struct firmware {int size; int* data; } ;
struct cx25840_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*) ;
 int VAR_1 ;
 int FUNC_1 (struct i2c_client*,int) ;
 int FUNC_2 (struct i2c_client*,int) ;
 int FUNC_3 (struct i2c_client*,int,int ) ;
 int FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (struct i2c_client*,int*,int) ;
 char* FUNC_6 (struct i2c_client*) ;
 int FUNC_7 (struct i2c_client*) ;
 scalar_t__ FUNC_8 (struct cx25840_state*) ;
 scalar_t__ FUNC_9 (struct cx25840_state*) ;
 int FUNC_10 (int*,int const*,int) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (struct firmware const*) ;
 scalar_t__ FUNC_13 (struct firmware const**,char const*,int ) ;
 int FUNC_14 (struct i2c_client*) ;
 struct cx25840_state* FUNC_15 (int ) ;
 int FUNC_16 (struct i2c_client*,char*,...) ;

int FUNC_17(struct i2c_client *VAR_2)
{
 struct cx25840_state *VAR_3 = FUNC_15(FUNC_7(VAR_2));
 const struct firmware *VAR_4 = ((void*)0);
 u8 VAR_5[VAR_1];
 const u8 *VAR_6;
 const char *VAR_7 = FUNC_6(VAR_2);
 int VAR_8, VAR_9;
 int VAR_10 = VAR_1;
 u32 VAR_11 = 0, VAR_12 = 0;

 if (FUNC_9(VAR_3)) {

  VAR_11 = FUNC_2(VAR_2, 0x160);
  VAR_12 = FUNC_2(VAR_2, 0x164);
 }

 if (FUNC_8(VAR_3) && VAR_10 > 16) {
  FUNC_16(VAR_2, " Firmware download size changed to 16 bytes max length\n");
  VAR_10 = 16;
 }

 if (FUNC_13(&VAR_4, VAR_7, FUNC_0(VAR_2)) != 0) {
  FUNC_16(VAR_2, "unable to open firmware %s\n", VAR_7);
  return -VAR_0;
 }

 FUNC_14(VAR_2);

 VAR_5[0] = 0x08;
 VAR_5[1] = 0x02;

 VAR_8 = VAR_4->size;
 VAR_6 = VAR_4->data;
 while (VAR_8 > 0) {
  int VAR_13 = FUNC_11(VAR_10 - 2, VAR_8);

  FUNC_10(VAR_5 + 2, VAR_6, VAR_13);

  VAR_9 = FUNC_5(VAR_2, VAR_5, VAR_13 + 2);

  if (VAR_9 < 0) {
   FUNC_12(VAR_4);
   return VAR_9;
  }

  VAR_8 -= VAR_13;
  VAR_6 += VAR_13;
 }

 FUNC_4(VAR_2);

 VAR_8 = VAR_4->size;
 FUNC_12(VAR_4);

 if (FUNC_9(VAR_3)) {

  FUNC_3(VAR_2, 0x160, VAR_11);
  FUNC_3(VAR_2, 0x164, VAR_12);
 }

 return FUNC_1(VAR_2, VAR_8);
}
