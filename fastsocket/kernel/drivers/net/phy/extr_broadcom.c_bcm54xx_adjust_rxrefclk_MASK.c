
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy_device {int dev_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (struct phy_device*,int ) ;
 int FUNC_3 (struct phy_device*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct phy_device *VAR_12)
{
 u32 VAR_13, VAR_14;
 bool VAR_15 = 1;


 if (FUNC_0(VAR_12) != VAR_11 ||
     FUNC_0(VAR_12) != VAR_9 ||
     FUNC_0(VAR_12) != VAR_10)
  return;

 VAR_13 = FUNC_2(VAR_12, VAR_2);
 if (VAR_13 < 0)
  return;

 VAR_14 = VAR_13;

 if ((FUNC_0(VAR_12) == VAR_9 ||
      FUNC_0(VAR_12) == VAR_10) &&
     FUNC_1(VAR_12) >= 0x3) {




  VAR_15 = 0;
 } else {
  if (VAR_12->dev_flags & VAR_8) {

   VAR_13 &= ~VAR_3;
   VAR_15 = 0;
  }
 }

 if (VAR_15 == 0 ||
     (VAR_12->dev_flags & VAR_6))
  VAR_13 &= ~VAR_4;
 else
  VAR_13 |= VAR_4;

 if (VAR_12->dev_flags & VAR_7)
  VAR_13 |= VAR_5;

 if (VAR_14 != VAR_13)
  FUNC_3(VAR_12, VAR_2, VAR_13);

 VAR_13 = FUNC_2(VAR_12, VAR_0);
 if (VAR_13 < 0)
  return;

 VAR_14 = VAR_13;

 if (VAR_15 == 0 ||
     (VAR_12->dev_flags & VAR_6))
  VAR_13 |= VAR_1;
 else
  VAR_13 &= ~VAR_1;

 if (VAR_14 != VAR_13)
  FUNC_3(VAR_12, VAR_0, VAR_13);
}
