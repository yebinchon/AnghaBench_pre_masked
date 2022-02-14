
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dev_flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct phy_device*) ;
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
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct phy_device*) ;
 int FUNC_3 (struct phy_device*,int ,int ) ;
 int FUNC_4 (struct phy_device*,int ) ;
 int FUNC_5 (struct phy_device*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct phy_device *VAR_13)
{
 int VAR_14, VAR_15;

 VAR_14 = FUNC_4(VAR_13, VAR_1);
 if (VAR_14 < 0)
  return VAR_14;


 VAR_14 |= VAR_2;
 VAR_15 = FUNC_5(VAR_13, VAR_1, VAR_14);
 if (VAR_15 < 0)
  return VAR_15;


 VAR_14 = ~(VAR_4 |
  VAR_6 |
  VAR_5);
 VAR_15 = FUNC_5(VAR_13, VAR_3, VAR_14);
 if (VAR_15 < 0)
  return VAR_15;

 if ((FUNC_0(VAR_13) == VAR_11 ||
      FUNC_0(VAR_13) == VAR_12) &&
     (VAR_13->dev_flags & VAR_8))
  FUNC_3(VAR_13, VAR_0, 0);

 if ((VAR_13->dev_flags & VAR_10) ||
     (VAR_13->dev_flags & VAR_9) ||
     (VAR_13->dev_flags & VAR_7))
  FUNC_1(VAR_13);

 FUNC_2(VAR_13);

 return 0;
}
