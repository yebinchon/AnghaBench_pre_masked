
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_3__ {scalar_t__ prtad; } ;
struct TYPE_4__ {TYPE_1__ mdio; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*,int ,scalar_t__) ;
 int FUNC_2 (struct ixgbe_hw*,char*) ;
 int FUNC_3 (int) ;

s32 FUNC_4(struct ixgbe_hw *VAR_10, u32 VAR_11,
    u32 VAR_12, u16 VAR_13)
{
 u32 VAR_14, VAR_15;


 FUNC_1(VAR_10, VAR_9, (u32)VAR_13);


 VAR_15 = ((VAR_11 << VAR_6) |
     (VAR_12 << VAR_4) |
     (VAR_10->phy.mdio.prtad << VAR_7) |
     (VAR_3 | VAR_5));

 FUNC_1(VAR_10, VAR_2, VAR_15);






 for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++) {
  FUNC_3(10);

  VAR_15 = FUNC_0(VAR_10, VAR_2);
  if ((VAR_15 & VAR_5) == 0)
   break;
 }

 if ((VAR_15 & VAR_5) != 0) {
  FUNC_2(VAR_10, "PHY address cmd didn't complete\n");
  return VAR_0;
 }





 VAR_15 = ((VAR_11 << VAR_6) |
     (VAR_12 << VAR_4) |
     (VAR_10->phy.mdio.prtad << VAR_7) |
     (VAR_8 | VAR_5));

 FUNC_1(VAR_10, VAR_2, VAR_15);





 for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++) {
  FUNC_3(10);

  VAR_15 = FUNC_0(VAR_10, VAR_2);
  if ((VAR_15 & VAR_5) == 0)
   break;
 }

 if ((VAR_15 & VAR_5) != 0) {
  FUNC_2(VAR_10, "PHY write cmd didn't complete\n");
  return VAR_0;
 }

 return 0;
}
