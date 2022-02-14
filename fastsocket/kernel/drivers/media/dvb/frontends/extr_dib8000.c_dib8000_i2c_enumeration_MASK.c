
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_device {int addr; struct i2c_adapter* adap; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_device*,int,int) ;
 scalar_t__ FUNC_1 (struct i2c_device*) ;
 int FUNC_2 (char*,int,...) ;

int FUNC_3(struct i2c_adapter *VAR_1, int VAR_2, u8 VAR_3, u8 VAR_4)
{
 int VAR_5 = 0;
 u8 VAR_6 = 0;
 struct i2c_device VAR_7 = {.adap = VAR_1 };

 for (VAR_5 = VAR_2 - 1; VAR_5 >= 0; VAR_5--) {

  VAR_6 = VAR_4 + (VAR_5 << 1);

  VAR_7.addr = VAR_6;
  FUNC_0(&VAR_7, 1287, 0x0003);
  if (FUNC_1(&VAR_7) == 0) {
   FUNC_0(&VAR_7, 1287, 0x0003);
   VAR_7.addr = VAR_3;
   if (FUNC_1(&VAR_7) == 0) {
    FUNC_2("#%d: not identified", VAR_5);
    return -VAR_0;
   }
  }


  FUNC_0(&VAR_7, 1286, (1 << 10) | (4 << 6));


  FUNC_0(&VAR_7, 1285, (VAR_6 << 2) | 0x2);
  VAR_7.addr = VAR_6;
  FUNC_1(&VAR_7);

  FUNC_2("IC %d initialized (to i2c_address 0x%x)", VAR_5, VAR_6);
 }

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_6 = VAR_4 | (VAR_5 << 1);
  VAR_7.addr = VAR_6;


  FUNC_0(&VAR_7, 1285, VAR_6 << 2);


  FUNC_0(&VAR_7, 1286, 0);
 }

 return 0;
}
