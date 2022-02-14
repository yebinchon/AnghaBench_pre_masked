
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ autoneg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*,int) ;
 int FUNC_2 (struct phy_device*,int,int) ;

__attribute__((used)) static int FUNC_3(struct phy_device *VAR_7)
{
 int VAR_8;




 VAR_8 = FUNC_2(VAR_7, VAR_2, VAR_1);

 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_2(VAR_7, 0x1d, 0x1f);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_2(VAR_7, 0x1e, 0x200c);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_2(VAR_7, 0x1d, 0x5);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_2(VAR_7, 0x1e, 0);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_2(VAR_7, 0x1e, 0x100);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_2(VAR_7, VAR_3,
   VAR_4);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_2(VAR_7, VAR_5,
   VAR_6);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_7->autoneg != VAR_0) {
  int VAR_9;






  VAR_9 = FUNC_1(VAR_7, VAR_2);
  if (VAR_9 < 0)
   return VAR_9;

  VAR_8 = FUNC_2(VAR_7, VAR_2, VAR_9 | VAR_1);
  if (VAR_8 < 0)
   return VAR_8;
 }

 return 0;
}
