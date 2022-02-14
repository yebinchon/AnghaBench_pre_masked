
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ interface; int dev_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct phy_device*,int) ;
 int FUNC_1 (struct phy_device*,int,int) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_5)
{
 int VAR_6;


 VAR_6 = FUNC_1(VAR_5, 0x1d, 0x001b);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_5, 0x1e, 0x418f);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_5, 0x1d, 0x0016);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_5, 0x1e, 0xa2da);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_5->interface == VAR_4) {
  int VAR_7 = FUNC_0(VAR_5, VAR_1);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_7 |= (VAR_2 | VAR_3);

  VAR_6 = FUNC_1(VAR_5, VAR_1, VAR_7);
  if (VAR_6 < 0)
   return VAR_6;

  if (VAR_5->dev_flags & VAR_0) {
   VAR_6 = FUNC_1(VAR_5, 0x1d, 0x0012);
   if (VAR_6 < 0)
    return VAR_6;

   VAR_7 = FUNC_0(VAR_5, 0x1e);
   if (VAR_7 < 0)
    return VAR_7;

   VAR_7 &= 0xf03f;
   VAR_7 |= 2 << 9;
   VAR_7 |= 2 << 6;

   VAR_6 = FUNC_1(VAR_5, 0x1e, VAR_7);
   if (VAR_6 < 0)
    return VAR_6;

   VAR_6 = FUNC_1(VAR_5, 0x1d, 0x3);
   if (VAR_6 < 0)
    return VAR_6;

   VAR_6 = FUNC_1(VAR_5, 0x1e, 0x8000);
   if (VAR_6 < 0)
    return VAR_6;
  }
 }

 return 0;
}
