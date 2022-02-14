
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct i2c_adapter *VAR_8)
{
 int VAR_9;
 int VAR_10 = 0;
 int VAR_11 = 0;


 VAR_9 = FUNC_3(VAR_7) + (FUNC_3(VAR_6) << 8);
 if (VAR_9 != 0x00) {
  FUNC_0(&VAR_8->dev, "SMBus busy (%04x). Resetting...\n", VAR_9);
  FUNC_4(VAR_7, VAR_9 & 0xff);
  FUNC_4(VAR_6, VAR_9 >> 8);
  if ((VAR_9 = FUNC_3(VAR_7) + (FUNC_3(VAR_6) << 8)) != 0x00) {
   FUNC_0(&VAR_8->dev, "Failed! (%02x)\n", VAR_9);
   return -VAR_0;
  } else {
   FUNC_0(&VAR_8->dev, "Successful!\n");
  }
 }


 FUNC_4(VAR_5, FUNC_3(VAR_5) | 0x10);


 do {
  FUNC_2(1);
  VAR_9 = FUNC_3(VAR_7);
 } while (!(VAR_9 & 0x40) && (VAR_11++ < VAR_4));


 if (VAR_11 > VAR_4) {
  FUNC_0(&VAR_8->dev, "SMBus Timeout!\n");
  VAR_10 = -VAR_3;
 }

 if (VAR_9 & 0x10) {
  FUNC_0(&VAR_8->dev, "Error: Failed bus transaction\n");
  VAR_10 = -VAR_2;
 }

 if (VAR_9 & 0x20) {
  FUNC_1(&VAR_8->dev, "Bus collision! SMBus may be locked until "
   "next hard reset (or not...)\n");

  VAR_10 = -VAR_1;
 }

 VAR_9 = FUNC_3(VAR_7) + (FUNC_3(VAR_6) << 8);
 if (VAR_9 != 0x00) {
  FUNC_4(VAR_7, VAR_9 & 0xff);
  FUNC_4(VAR_6, VAR_9 >> 8);
 }

 VAR_9 = FUNC_3(VAR_7) + (FUNC_3(VAR_6) << 8);
 if (VAR_9 != 0x00)
  FUNC_0(&VAR_8->dev, "Failed reset at end of transaction (%02x)\n", VAR_9);

 return VAR_10;
}
