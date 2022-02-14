
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
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct i2c_adapter *VAR_17)
{
 int VAR_18;
 int VAR_19 = 0;
 int VAR_20 = 0;

 FUNC_0(&VAR_17->dev, "Transaction (pre): GS=%04x, GE=%04x, ADD=%04x, "
  "DAT=%04x\n", FUNC_4(VAR_14),
  FUNC_4(VAR_13), FUNC_4(VAR_15),
  FUNC_2(VAR_16));


 if ((VAR_18 = FUNC_4(VAR_14)) & (VAR_8 | VAR_10)) {
  FUNC_0(&VAR_17->dev, "SMBus busy (%04x). Waiting...\n", VAR_18);
  do {
   FUNC_5(1);
   VAR_18 = FUNC_4(VAR_14);
  } while ((VAR_18 & (VAR_8 | VAR_10)) &&
           (VAR_20++ < VAR_12));

  if (VAR_20 > VAR_12) {
   FUNC_0(&VAR_17->dev, "Busy wait timeout (%04x)\n", VAR_18);
   goto abort;
  }
  VAR_20 = 0;
 }


 FUNC_6(FUNC_3(VAR_13) | VAR_4, VAR_13);


 do {
  FUNC_5(1);
  VAR_18 = FUNC_4(VAR_14);
 } while ((VAR_18 & VAR_8) && (VAR_20++ < VAR_12));


 if (VAR_20 > VAR_12) {
  FUNC_0(&VAR_17->dev, "Completion timeout!\n");
  goto abort;
 }

 if (VAR_18 & VAR_9) {
  VAR_19 = -VAR_1;
  FUNC_0(&VAR_17->dev, "SMBus Protocol error (no response)!\n");
 }

 if (VAR_18 & VAR_6) {
  VAR_19 = -VAR_0;
  FUNC_1(&VAR_17->dev, "SMBus collision!\n");
 }

 if (VAR_18 & VAR_11) {
  VAR_19 = -VAR_2;
  FUNC_0(&VAR_17->dev, "SMBus protocol timeout!\n");
 }

 if (VAR_18 & VAR_7)
  FUNC_0(&VAR_17->dev, "SMBus protocol success!\n");

 FUNC_6(VAR_5, VAR_14);
 FUNC_0(&VAR_17->dev,
  "Transaction (post): GS=%04x, GE=%04x, ADD=%04x, DAT=%04x\n",
  FUNC_4(VAR_14), FUNC_4(VAR_13),
  FUNC_4(VAR_15), FUNC_2(VAR_16));

 return VAR_19;

 abort:
 FUNC_1(&VAR_17->dev, "Sending abort\n");
 FUNC_6(FUNC_3(VAR_13) | VAR_3, VAR_13);
 FUNC_5(100);
 FUNC_6(VAR_5, VAR_14);
 return -VAR_0;
}
