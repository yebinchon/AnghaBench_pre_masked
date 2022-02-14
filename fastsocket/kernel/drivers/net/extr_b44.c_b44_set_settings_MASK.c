
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_cmd {scalar_t__ autoneg; int advertising; scalar_t__ speed; scalar_t__ duplex; } ;
struct b44 {int flags; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_0 (struct b44*) ;
 struct b44* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_19, struct ethtool_cmd *VAR_20)
{
 struct b44 *VAR_21 = FUNC_1(VAR_19);


 if (VAR_20->autoneg == VAR_6) {
  if (VAR_20->advertising &
      (VAR_1 |
       VAR_0))
   return -VAR_16;
 } else if ((VAR_20->speed != VAR_18 &&
      VAR_20->speed != VAR_17) ||
     (VAR_20->duplex != VAR_15 &&
      VAR_20->duplex != VAR_14)) {
   return -VAR_16;
 }

 FUNC_3(&VAR_21->lock);

 if (VAR_20->autoneg == VAR_6) {
  VAR_21->flags &= ~(VAR_12 |
          VAR_7 |
          VAR_13 |
          VAR_11 |
          VAR_10 |
          VAR_9 |
          VAR_8);
  if (VAR_20->advertising == 0) {
   VAR_21->flags |= (VAR_11 |
          VAR_10 |
          VAR_9 |
          VAR_8);
  } else {
   if (VAR_20->advertising & VAR_5)
    VAR_21->flags |= VAR_11;
   if (VAR_20->advertising & VAR_4)
    VAR_21->flags |= VAR_10;
   if (VAR_20->advertising & VAR_3)
    VAR_21->flags |= VAR_9;
   if (VAR_20->advertising & VAR_2)
    VAR_21->flags |= VAR_8;
  }
 } else {
  VAR_21->flags |= VAR_12;
  VAR_21->flags &= ~(VAR_7 | VAR_13);
  if (VAR_20->speed == VAR_18)
   VAR_21->flags |= VAR_7;
  if (VAR_20->duplex == VAR_14)
   VAR_21->flags |= VAR_13;
 }

 if (FUNC_2(VAR_19))
  FUNC_0(VAR_21);

 FUNC_4(&VAR_21->lock);

 return 0;
}
