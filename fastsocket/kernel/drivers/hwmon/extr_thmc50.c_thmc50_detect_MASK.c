
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int addr; struct i2c_adapter* adapter; } ;
struct i2c_board_info {int type; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct i2c_adapter*,int ) ;
 unsigned int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,unsigned int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ,char const*,int ) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_10, int VAR_11,
    struct i2c_board_info *VAR_12)
{
 unsigned VAR_13;
 unsigned VAR_14;
 unsigned VAR_15;
 struct i2c_adapter *VAR_16 = VAR_10->adapter;
 int VAR_17 = 0;
 const char *VAR_18;

 if (!FUNC_1(VAR_16, VAR_1)) {
  FUNC_4("thmc50: detect failed, "
    "smbus byte data not supported!\n");
  return -VAR_0;
 }

 FUNC_4("thmc50: Probing for THMC50 at 0x%2X on bus %d\n",
   VAR_10->addr, FUNC_0(VAR_10->adapter));


 VAR_13 = FUNC_2(VAR_10, VAR_3);
 VAR_14 = FUNC_2(VAR_10, VAR_5);
 VAR_15 = FUNC_2(VAR_10, VAR_4);

 if (VAR_11 == 0)
  VAR_11 = VAR_9;
 else if (VAR_11 < 0) {
  VAR_17 = -VAR_0;
  if (VAR_14 >= 0xc0 && ((VAR_15 & 0x10) == 0)) {
   if (VAR_13 == 0x49) {
    VAR_11 = VAR_9;
    VAR_17 = 0;
   } else if (VAR_13 == 0x41) {
    VAR_11 = VAR_6;
    VAR_17 = 0;
   }
  }
 }
 if (VAR_17 == -VAR_0) {
  FUNC_4("thmc50: Detection of THMC50/ADM1022 failed\n");
  return VAR_17;
 }

 if (VAR_11 == VAR_6) {
  int VAR_19 = FUNC_0(VAR_10->adapter);
  int VAR_20;

  VAR_18 = "adm1022";
  for (VAR_20 = 0; VAR_20 + 1 < VAR_8; VAR_20 += 2)
   if (VAR_7[VAR_20] == VAR_19 &&
       VAR_7[VAR_20 + 1] == VAR_10->addr) {

    VAR_15 |= (1 << 7);
    FUNC_3(VAR_10,
         VAR_4,
         VAR_15);
    break;
   }
 } else {
  VAR_18 = "thmc50";
 }
 FUNC_4("thmc50: Detected %s (version %x, revision %x)\n",
   VAR_18, (VAR_14 >> 4) - 0xc, VAR_14 & 0xf);

 FUNC_5(VAR_12->type, VAR_18, VAR_2);

 return 0;
}
