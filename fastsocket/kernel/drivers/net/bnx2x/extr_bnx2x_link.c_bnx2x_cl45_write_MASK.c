
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct bnx2x_phy {int flags; int addr; scalar_t__ mdio_ctrl; } ;
struct bnx2x {int dev; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct bnx2x*,scalar_t__) ;
 int FUNC_2 (struct bnx2x*,scalar_t__,int) ;
 int FUNC_3 (struct bnx2x*,scalar_t__,int ) ;
 int FUNC_4 (struct bnx2x*,scalar_t__,int ) ;
 int FUNC_5 (struct bnx2x*,struct bnx2x_phy*,int,int,int*) ;
 int FUNC_6 (struct bnx2x*,int,scalar_t__) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct bnx2x *VAR_14, struct bnx2x_phy *VAR_15,
       u8 VAR_16, u16 VAR_17, u16 VAR_18)
{
 u32 VAR_19;
 u8 VAR_20;
 int VAR_21 = 0;
 u32 VAR_22;
 if (VAR_15->flags & VAR_10) {
  VAR_22 = (FUNC_1(VAR_14, VAR_11) << 16) |
     ((FUNC_1(VAR_14, VAR_12) & 0xf) << 12);
  FUNC_6(VAR_14, VAR_22, VAR_15->mdio_ctrl);
 }

 if (VAR_15->flags & VAR_9)
  FUNC_4(VAR_14, VAR_15->mdio_ctrl + VAR_6,
         VAR_4);


 VAR_19 = ((VAR_15->addr << 21) | (VAR_16 << 16) | VAR_17 |
        VAR_1 |
        VAR_3);
 FUNC_2(VAR_14, VAR_15->mdio_ctrl + VAR_5, VAR_19);

 for (VAR_20 = 0; VAR_20 < 50; VAR_20++) {
  FUNC_8(10);

  VAR_19 = FUNC_1(VAR_14, VAR_15->mdio_ctrl + VAR_5);
  if (!(VAR_19 & VAR_3)) {
   FUNC_8(5);
   break;
  }
 }
 if (VAR_19 & VAR_3) {
  FUNC_0(VAR_13, "write phy register failed\n");
  FUNC_7(VAR_14->dev, "MDC/MDIO access timeout\n");
  VAR_21 = -VAR_0;
 } else {

  VAR_19 = ((VAR_15->addr << 21) | (VAR_16 << 16) | VAR_18 |
         VAR_2 |
         VAR_3);
  FUNC_2(VAR_14, VAR_15->mdio_ctrl + VAR_5, VAR_19);

  for (VAR_20 = 0; VAR_20 < 50; VAR_20++) {
   FUNC_8(10);

   VAR_19 = FUNC_1(VAR_14, VAR_15->mdio_ctrl +
         VAR_5);
   if (!(VAR_19 & VAR_3)) {
    FUNC_8(5);
    break;
   }
  }
  if (VAR_19 & VAR_3) {
   FUNC_0(VAR_13, "write phy register failed\n");
   FUNC_7(VAR_14->dev, "MDC/MDIO access timeout\n");
   VAR_21 = -VAR_0;
  }
 }

 if (VAR_15->flags & VAR_8) {
  VAR_15->flags ^= VAR_7;
  if (VAR_15->flags & VAR_7) {
   u16 VAR_23;
   FUNC_5(VAR_14, VAR_15, VAR_16, 0xf, &VAR_23);
  }
 }
 if (VAR_15->flags & VAR_9)
  FUNC_3(VAR_14, VAR_15->mdio_ctrl + VAR_6,
          VAR_4);
 return VAR_21;
}
