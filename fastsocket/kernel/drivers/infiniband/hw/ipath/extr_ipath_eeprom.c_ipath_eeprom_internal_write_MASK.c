
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ipath_devdata {int dummy; } ;
struct i2c_chain_desc {int eeprom_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ipath_devdata*,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct ipath_devdata*,char*) ;
 struct i2c_chain_desc* FUNC_3 (struct ipath_devdata*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct ipath_devdata*) ;
 int FUNC_6 (struct ipath_devdata*) ;
 int FUNC_7 (struct ipath_devdata*,int) ;

__attribute__((used)) static int FUNC_8(struct ipath_devdata *VAR_3, u8 VAR_4,
           const void *VAR_5, int VAR_6)
{
 int VAR_7;
 const u8 *VAR_8 = VAR_5;
 int VAR_9, VAR_10;
 int VAR_11;
 struct i2c_chain_desc *VAR_12;

 VAR_11 = 1;
 VAR_12 = FUNC_3(VAR_3);
 if (!VAR_12)
  goto bail;

 while (VAR_6 > 0) {
  if (VAR_12->eeprom_dev == VAR_0) {
   if (FUNC_0(VAR_3,
      (VAR_4 << 1) | VAR_2)) {
    FUNC_1("Failed to start cmd offset %u\n",
     VAR_4);
    goto failed_write;
   }
  } else {

   if (FUNC_0(VAR_3, VAR_12->eeprom_dev | VAR_2)) {
    FUNC_1("Failed EEPROM startcmd\n");
    goto failed_write;
   }
   VAR_11 = FUNC_7(VAR_3, VAR_4);
   if (VAR_11) {
    FUNC_2(VAR_3, "Failed to write EEPROM "
           "address\n");
    goto failed_write;
   }
  }

  VAR_7 = FUNC_4(VAR_6, 4);
  VAR_4 += VAR_7;
  VAR_6 -= VAR_7;

  for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
   if (FUNC_7(VAR_3, *VAR_8++)) {
    FUNC_1("no ack after byte %u/%u (%u "
       "total remain)\n", VAR_10, VAR_7,
       VAR_6 + VAR_7 - VAR_10);
    goto failed_write;
   }
  }

  FUNC_6(VAR_3);
  VAR_9 = 100;
  while (FUNC_0(VAR_3, VAR_12->eeprom_dev | VAR_1)) {
   FUNC_6(VAR_3);
   if (!--VAR_9) {
    FUNC_1("Did not get successful read to "
       "complete write\n");
    goto failed_write;
   }
  }

  FUNC_5(VAR_3);
  FUNC_6(VAR_3);
 }

 VAR_11 = 0;
 goto bail;

failed_write:
 FUNC_6(VAR_3);
 VAR_11 = 1;

bail:
 return VAR_11;
}
