
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
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
 int FUNC_0 (int *,char*,int,int,int,int,int,int,int) ;
 int FUNC_1 (int *,char*,char*,char*,char*,char*,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct i2c_adapter * VAR_18)
{
 u32 VAR_19;
 int VAR_20;
 int VAR_21 = -VAR_2;

 FUNC_0(&VAR_18->dev, "Block (pre): STS=%02x, CNTL1=%02x, "
  "CNTL2=%02x, CMD=%02x, ADD=%02x, DAT0=%02x, DAT1=%02x\n",
  FUNC_3(VAR_17), FUNC_3(VAR_13), FUNC_3(VAR_14),
  FUNC_3(VAR_12), FUNC_3(VAR_11), FUNC_3(VAR_15),
  FUNC_3(VAR_16));

 VAR_19 = FUNC_3(VAR_17);
 if (VAR_19 & VAR_6) {
  FUNC_2(&VAR_18->dev,"ali1563: Trying to reset busy device\n");
  FUNC_5(VAR_19 | VAR_6,VAR_17);
  VAR_19 = FUNC_3(VAR_17);
  if (VAR_19 & VAR_6)
   return -VAR_1;
 }


 FUNC_5(VAR_19 | VAR_9, VAR_17);


 FUNC_5(FUNC_3(VAR_14) | VAR_5, VAR_14);

 VAR_20 = VAR_0;
 do
  FUNC_4(1);
 while (!((VAR_19 = FUNC_3(VAR_17)) & VAR_9) && --VAR_20);

 FUNC_0(&VAR_18->dev, "Block (post): STS=%02x, CNTL1=%02x, "
  "CNTL2=%02x, CMD=%02x, ADD=%02x, DAT0=%02x, DAT1=%02x\n",
  FUNC_3(VAR_17), FUNC_3(VAR_13), FUNC_3(VAR_14),
  FUNC_3(VAR_12), FUNC_3(VAR_11), FUNC_3(VAR_15),
  FUNC_3(VAR_16));

 if (VAR_20 && !(VAR_19 & VAR_6))
  return 0;

 if (VAR_20 == 0)
  VAR_21 = -VAR_4;

 if (VAR_19 & VAR_8)
  VAR_21 = -VAR_3;

 FUNC_1(&VAR_18->dev, "SMBus Error: %s%s%s%s%s\n",
  VAR_20 ? "" : "Timeout ",
  VAR_19 & VAR_10 ? "Transaction Failed " : "",
  VAR_19 & VAR_7 ? "No response or Bus Collision " : "",
  VAR_19 & VAR_8 ? "Device Error " : "",
  !(VAR_19 & VAR_9) ? "Transaction Never Finished " : "");
 return VAR_21;
}
