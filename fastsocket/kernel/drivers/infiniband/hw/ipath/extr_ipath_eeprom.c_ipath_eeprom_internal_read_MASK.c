
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ipath_devdata {int dummy; } ;
struct i2c_chain_desc {scalar_t__ eeprom_dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ipath_devdata*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct ipath_devdata*,char*) ;
 struct i2c_chain_desc* FUNC_4 (struct ipath_devdata*) ;
 int FUNC_5 (struct ipath_devdata*) ;
 int FUNC_6 (struct ipath_devdata*) ;
 int FUNC_7 (struct ipath_devdata*) ;
 int FUNC_8 (struct ipath_devdata*,int) ;

__attribute__((used)) static int FUNC_9(struct ipath_devdata *VAR_4,
     u8 VAR_5, void *VAR_6, int VAR_7)
{
 int VAR_8;
 struct i2c_chain_desc *VAR_9;
 u8 *VAR_10 = VAR_6;

 VAR_8 = 1;
 VAR_9 = FUNC_4(VAR_4);
 if (!VAR_9)
  goto bail;

 if (VAR_9->eeprom_dev == VAR_0) {

  FUNC_1(VAR_2, "Start command only address\n");
  VAR_5 = (VAR_5 << 1) | VAR_1;
  VAR_8 = FUNC_0(VAR_4, VAR_5);
 } else {

  FUNC_1(VAR_2, "Start command uses devaddr\n");
  if (FUNC_0(VAR_4, VAR_9->eeprom_dev | VAR_3)) {
   FUNC_2("Failed EEPROM startcmd\n");
   FUNC_7(VAR_4);
   VAR_8 = 1;
   goto bail;
  }
  VAR_8 = FUNC_8(VAR_4, VAR_5);
  FUNC_7(VAR_4);
  if (VAR_8) {
   FUNC_3(VAR_4, "Failed to write EEPROM address\n");
   VAR_8 = 1;
   goto bail;
  }
  VAR_8 = FUNC_0(VAR_4, VAR_9->eeprom_dev | VAR_1);
 }
 if (VAR_8) {
  FUNC_2("Failed startcmd for dev %02X\n", VAR_9->eeprom_dev);
  FUNC_7(VAR_4);
  VAR_8 = 1;
  goto bail;
 }





 while (VAR_7-- > 0) {

  *VAR_10++ = FUNC_5(VAR_4);

  if (VAR_7)
   FUNC_6(VAR_4);
 }

 FUNC_7(VAR_4);

 VAR_8 = 0;

bail:
 return VAR_8;
}
