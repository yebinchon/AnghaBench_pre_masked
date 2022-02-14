
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
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (struct phy_device*,int ) ;
 int FUNC_1 (struct phy_device*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_17)
{
 int VAR_18;
 int VAR_19;


 VAR_19 = FUNC_0(VAR_17, VAR_9);
 VAR_19 &= ~VAR_2;
 FUNC_1(VAR_17, VAR_9, VAR_19);

 VAR_19 = FUNC_0(VAR_17, VAR_1);
 VAR_19 |= VAR_0;
 FUNC_1(VAR_17, VAR_1, VAR_19);

 if ((VAR_17->interface == VAR_12) ||
     (VAR_17->interface == VAR_13) ||
     (VAR_17->interface == VAR_14) ||
     (VAR_17->interface == VAR_15)) {

  VAR_19 = FUNC_0(VAR_17, VAR_8);
  if (VAR_19 < 0)
   return VAR_19;

  if (VAR_17->interface == VAR_13) {
   VAR_19 |= (VAR_10 | VAR_11);
  } else if (VAR_17->interface == VAR_14) {
   VAR_19 &= ~VAR_11;
   VAR_19 |= VAR_10;
  } else if (VAR_17->interface == VAR_15) {
   VAR_19 &= ~VAR_10;
   VAR_19 |= VAR_11;
  }

  VAR_18 = FUNC_1(VAR_17, VAR_8, VAR_19);
  if (VAR_18 < 0)
   return VAR_18;

  VAR_19 = FUNC_0(VAR_17, VAR_9);
  if (VAR_19 < 0)
   return VAR_19;

  VAR_19 &= ~(VAR_6);

  if (VAR_19 & VAR_3)
   VAR_19 |= VAR_5;
  else
   VAR_19 |= VAR_4;

  VAR_18 = FUNC_1(VAR_17, VAR_9, VAR_19);
  if (VAR_18 < 0)
   return VAR_18;
 }

 if (VAR_17->interface == VAR_16) {
  VAR_19 = FUNC_0(VAR_17, VAR_9);
  if (VAR_19 < 0)
   return VAR_19;

  VAR_19 &= ~(VAR_6);
  VAR_19 |= VAR_7;
  VAR_19 |= VAR_2;

  VAR_18 = FUNC_1(VAR_17, VAR_9, VAR_19);
  if (VAR_18 < 0)
   return VAR_18;
 }

 VAR_18 = FUNC_1(VAR_17, VAR_1, VAR_0);
 if (VAR_18 < 0)
  return VAR_18;

 return 0;
}
