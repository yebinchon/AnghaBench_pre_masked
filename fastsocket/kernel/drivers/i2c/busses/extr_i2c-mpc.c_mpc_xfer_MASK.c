
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpc_i2c {int dev; scalar_t__ base; } ;
struct i2c_msg {int flags; int len; int buf; int addr; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,...) ;
 struct mpc_i2c* FUNC_1 (struct i2c_adapter*) ;
 unsigned long VAR_9 ;
 int FUNC_2 (struct mpc_i2c*) ;
 int FUNC_3 (struct mpc_i2c*) ;
 int FUNC_4 (struct mpc_i2c*) ;
 int FUNC_5 (struct mpc_i2c*,int ,int ,int ,int) ;
 int FUNC_6 (struct mpc_i2c*,int ,int ,int ,int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (unsigned long,scalar_t__) ;
 int FUNC_11 (struct mpc_i2c*,int ) ;

__attribute__((used)) static int FUNC_12(struct i2c_adapter *VAR_10, struct i2c_msg *VAR_11, int VAR_12)
{
 struct i2c_msg *VAR_13;
 int VAR_14;
 int VAR_15 = 0;
 unsigned long VAR_16 = VAR_9;
 struct mpc_i2c *VAR_17 = FUNC_1(VAR_10);

 FUNC_3(VAR_17);


 while (FUNC_7(VAR_17->base + VAR_7) & VAR_0) {
  if (FUNC_9(VAR_8)) {
   FUNC_0(VAR_17->dev, "Interrupted\n");
   FUNC_11(VAR_17, 0);
   return -VAR_3;
  }
  if (FUNC_10(VAR_9, VAR_16 + VAR_5)) {
   FUNC_0(VAR_17->dev, "timeout\n");
   if (FUNC_7(VAR_17->base + VAR_7) ==
       (VAR_1 | VAR_0 | VAR_2))
    FUNC_2(VAR_17);
   return -VAR_4;
  }
  FUNC_8();
 }

 for (VAR_14 = 0; VAR_15 >= 0 && VAR_14 < VAR_12; VAR_14++) {
  VAR_13 = &VAR_11[VAR_14];
  FUNC_0(VAR_17->dev,
   "Doing %s %d bytes to 0x%02x - %d of %d messages\n",
   VAR_13->flags & VAR_6 ? "read" : "write",
   VAR_13->len, VAR_13->addr, VAR_14 + 1, VAR_12);
  if (VAR_13->flags & VAR_6)
   VAR_15 =
       FUNC_5(VAR_17, VAR_13->addr, VAR_13->buf, VAR_13->len, VAR_14);
  else
   VAR_15 =
       FUNC_6(VAR_17, VAR_13->addr, VAR_13->buf, VAR_13->len, VAR_14);
 }
 FUNC_4(VAR_17);
 return (VAR_15 < 0) ? VAR_15 : VAR_12;
}
