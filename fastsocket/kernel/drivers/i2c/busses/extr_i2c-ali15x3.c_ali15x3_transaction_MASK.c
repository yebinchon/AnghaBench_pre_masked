
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
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct i2c_adapter *VAR_19)
{
 int VAR_20;
 int VAR_21 = 0;
 int VAR_22 = 0;

 FUNC_0(&VAR_19->dev, "Transaction (pre): STS=%02x, CNT=%02x, CMD=%02x, "
  "ADD=%02x, DAT0=%02x, DAT1=%02x\n", FUNC_3(VAR_18),
  FUNC_3(VAR_14), FUNC_3(VAR_13), FUNC_3(VAR_12),
  FUNC_3(VAR_15), FUNC_3(VAR_16));


 VAR_20 = FUNC_3(VAR_18);



 if (VAR_20 & VAR_0) {
  FUNC_2(&VAR_19->dev, "Resetting entire SMB Bus to "
   "clear busy condition (%02x)\n", VAR_20);
  FUNC_5(VAR_6, VAR_14);
  VAR_20 = FUNC_3(VAR_18);
 }


 if (VAR_20 & (VAR_4 | VAR_0)) {

  FUNC_5(0xFF, VAR_18);
  if ((VAR_20 = FUNC_3(VAR_18)) &
      (VAR_4 | VAR_0)) {



   FUNC_1(&VAR_19->dev, "SMBus reset failed! (0x%02x) - "
    "controller or device on bus is probably hung\n",
    VAR_20);
   return -VAR_7;
  }
 } else {

  if (VAR_20 & VAR_3) {
   FUNC_5(VAR_20, VAR_18);
  }
 }


 FUNC_5(0xFF, VAR_17);


 VAR_22 = 0;
 do {
  FUNC_4(1);
  VAR_20 = FUNC_3(VAR_18);
 } while ((!(VAR_20 & (VAR_4 | VAR_3)))
   && (VAR_22++ < VAR_11));


 if (VAR_22 > VAR_11) {
  VAR_21 = -VAR_10;
  FUNC_1(&VAR_19->dev, "SMBus Timeout!\n");
 }

 if (VAR_20 & VAR_5) {
  VAR_21 = -VAR_8;
  FUNC_0(&VAR_19->dev, "Error: Failed bus transaction\n");
 }







 if (VAR_20 & VAR_1) {
  VAR_21 = -VAR_9;
  FUNC_0(&VAR_19->dev,
   "Error: no response or bus collision ADD=%02x\n",
   FUNC_3(VAR_12));
 }


 if (VAR_20 & VAR_2) {
  VAR_21 = -VAR_8;
  FUNC_1(&VAR_19->dev, "Error: device error\n");
 }
 FUNC_0(&VAR_19->dev, "Transaction (post): STS=%02x, CNT=%02x, CMD=%02x, "
  "ADD=%02x, DAT0=%02x, DAT1=%02x\n", FUNC_3(VAR_18),
  FUNC_3(VAR_14), FUNC_3(VAR_13), FUNC_3(VAR_12),
  FUNC_3(VAR_15), FUNC_3(VAR_16));
 return VAR_21;
}
