
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ interface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct phy_device*,int ) ;
 int FUNC_1 (struct phy_device*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_8)
{
 int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_8, VAR_1,
   VAR_0);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_9 = FUNC_0(VAR_8, VAR_6);

 if (VAR_9 < 0)
  return VAR_10;

 VAR_9 &= ~(VAR_5 |
   VAR_3);

 if (VAR_8->interface == VAR_7)
  VAR_9 |= (VAR_4 |
    VAR_2);

 VAR_10 = FUNC_1(VAR_8, VAR_6, VAR_9);

 return VAR_10;
}
