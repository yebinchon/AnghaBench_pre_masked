
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ speed; scalar_t__ duplex; scalar_t__ asym_pause; scalar_t__ pause; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct phy_device*,int ,int) ;

int FUNC_1(struct phy_device *VAR_7)
{
 int VAR_8;
 int VAR_9 = 0;

 VAR_7->pause = VAR_7->asym_pause = 0;

 if (VAR_6 == VAR_7->speed)
  VAR_9 |= VAR_2;
 else if (VAR_5 == VAR_7->speed)
  VAR_9 |= VAR_1;

 if (VAR_3 == VAR_7->duplex)
  VAR_9 |= VAR_0;

 VAR_8 = FUNC_0(VAR_7, VAR_4, VAR_9);

 return VAR_8;
}
