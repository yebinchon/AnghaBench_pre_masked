
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct pvr2_hdw {int eeprom_addr; int i2c_adap; } ;
struct i2c_msg {int addr; int len; int* buf; scalar_t__ flags; } ;


 int FUNC_0 (struct i2c_msg*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,struct i2c_msg*,int ) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int,int ) ;
 int FUNC_4 (int*,int ,int) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (char*,int,...) ;

__attribute__((used)) static u8 *FUNC_7(struct pvr2_hdw *VAR_4)
{
 struct i2c_msg VAR_5[2];
 u8 *VAR_6;
 u8 VAR_7[2];
 u8 VAR_8;
 u16 VAR_9;
 unsigned int VAR_10;
 int VAR_11;
 int VAR_12 = 0;
 unsigned VAR_13,VAR_14;
 VAR_6 = FUNC_3(VAR_0,VAR_1);
 if (!VAR_6) {
  FUNC_5(VAR_3,
      "Failed to allocate memory"
      " required to read eeprom");
  return ((void*)0);
 }

 FUNC_6("Value for eeprom addr from controller was 0x%x",
       VAR_4->eeprom_addr);
 VAR_8 = VAR_4->eeprom_addr;



 if (VAR_8 & 0x80) VAR_8 >>= 1;




 VAR_12 = (VAR_8 & 1);
 VAR_9 = (VAR_12 ? VAR_0 : 256);
 FUNC_6("Examining %d byte eeprom at location 0x%x"
       " using %d bit addressing",VAR_9,VAR_8,
       VAR_12 ? 16 : 8);

 VAR_5[0].addr = VAR_8;
 VAR_5[0].flags = 0;
 VAR_5[0].len = VAR_12 ? 2 : 1;
 VAR_5[0].buf = VAR_7;
 VAR_5[1].addr = VAR_8;
 VAR_5[1].flags = VAR_2;





 FUNC_4(VAR_6,0,VAR_0);
 for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14 += VAR_13) {
  VAR_13 = 16;
  if (VAR_13 + VAR_14 > VAR_0) VAR_13 = VAR_0-VAR_14;
  VAR_10 = VAR_14 + (VAR_9 - VAR_0);
  if (VAR_12) {
   VAR_7[0] = VAR_10 >> 8;
   VAR_7[1] = VAR_10;
  } else {
   VAR_7[0] = VAR_10;
  }
  VAR_5[1].len = VAR_13;
  VAR_5[1].buf = VAR_6+VAR_14;
  if ((VAR_11 = FUNC_1(&VAR_4->i2c_adap,
     VAR_5,FUNC_0(VAR_5))) != 2) {
   FUNC_5(VAR_3,
       "eeprom fetch set offs err=%d",VAR_11);
   FUNC_2(VAR_6);
   return ((void*)0);
  }
 }
 return VAR_6;
}
