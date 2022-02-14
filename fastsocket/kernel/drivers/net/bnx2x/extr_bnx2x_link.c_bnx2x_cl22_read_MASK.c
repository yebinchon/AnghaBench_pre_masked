
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct bnx2x_phy {int addr; scalar_t__ mdio_ctrl; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct bnx2x*,scalar_t__) ;
 int FUNC_2 (struct bnx2x*,scalar_t__,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct bnx2x *VAR_8,
          struct bnx2x_phy *VAR_9,
          u16 VAR_10, u16 *VAR_11)
{
 u32 VAR_12, VAR_13;
 u16 VAR_14;
 int VAR_15 = 0;


 VAR_13 = FUNC_1(VAR_8, VAR_9->mdio_ctrl + VAR_6);
 FUNC_2(VAR_8, VAR_9->mdio_ctrl + VAR_6,
        VAR_13 & ~VAR_4);


 VAR_12 = ((VAR_9->addr << 21) | (VAR_10 << 16) |
        VAR_1 |
        VAR_3);
 FUNC_2(VAR_8, VAR_9->mdio_ctrl + VAR_5, VAR_12);

 for (VAR_14 = 0; VAR_14 < 50; VAR_14++) {
  FUNC_3(10);

  VAR_12 = FUNC_1(VAR_8, VAR_9->mdio_ctrl + VAR_5);
  if (!(VAR_12 & VAR_3)) {
   *VAR_11 = (u16)(VAR_12 & VAR_2);
   FUNC_3(5);
   break;
  }
 }
 if (VAR_12 & VAR_3) {
  FUNC_0(VAR_7, "read phy register failed\n");

  *VAR_11 = 0;
  VAR_15 = -VAR_0;
 }
 FUNC_2(VAR_8, VAR_9->mdio_ctrl + VAR_6, VAR_13);
 return VAR_15;
}
